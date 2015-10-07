#include "Borderlands_TPS.h"
#include "pointerAddresses.h"
#include "loadMemoryFunctions.h"
#include "inputBox.h"

//global variables
HWND bltpsWindow = FindWindow(0, _T("Borderlands: The Pre-Sequel (32-bit, DX9)")); //finds the bl2 window
HANDLE hProcess;	//handle to the process
DWORD pid;	//holds the Process ID
DWORD baseAddress;	//holds the address for the module, in other words it's the baseAddress for the pointers
int offset1 = 0x01CCE828;	//first offset that is added to the baseAddress, value is the '"Borderlands2.exe" + 01ed4798' in Cheat Engine

namespace BorderlandsThePreSequel {
	//default constructor
	Borderlands_TPS::Borderlands_TPS(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}
	//destructor
	Borderlands_TPS::~Borderlands_TPS()
	{
		if (components)
		{
			delete components;
		}
	}

	//function to run when the application is loaded into memory
	//When the main form is created and before it's displayed to the screen
	System::Void Borderlands_TPS::Borderlands_TPS_Load(System::Object^  sender, System::EventArgs^  e)
	{
		if (!bltpsWindow)
		{
			lblErrorMsg->Text = "Borderlands: The Pre-Sequel Window not found.";
		}
		else
		{
			GetWindowThreadProcessId(bltpsWindow, &pid);
			hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

			if (!hProcess)
			{
				lblErrorMsg->Text = "Can't open the process";
			}
			else
			{
				baseAddress = dwGetModuleBaseAddress(pid, _T("BorderlandsPreSequel.exe"));
				readMemory(hProcess, baseAddress, offset1, stats, 8);
				readMemory(hProcess, baseAddress, offset1, stats2, 7);
				readMemory(hProcess, baseAddress, offset1, stats3, 3);
				readMemory(hProcess, baseAddress, offset1 - 0xC, goldKeys, 4);
				readMemory(hProcess, baseAddress, offset1, skillPoints, 1);
				readMemory(hProcess, baseAddress, offset1, skillCDTimer, 1);
				readSkillsMemory(hProcess, baseAddress, offset1, loadSkills, 39);
				//readMemory(hProcess, baseAddress, offset1, skills, 39);

				if (!ReadProcessMemory(hProcess, (void*)stats[0][1], &stats[0][0], sizeof(stats[0][0]), NULL))
				{
					lblErrorMsg->Text = "Failed to read memory.";
				}
				else
				{
					loadMemory();
					LoadTimer->Start();
				}
			}
		}
	}	//end Borderlands_TPS_Load

	//function to load the values into the corresponding labels as text
	System::Void Borderlands_TPS::loadMemory()
	{
		lblLoadMoney->Text = "" + stats[0][0];
		lblLoadMShards->Text = "" + stats[1][0];
		lblLoadCredits->Text = "" + stats[2][0];
		lblLoadNextLevel->Text = "" + stats[3][0];
		lblLoadWD->Text = "" + stats[4][0];
		lblLoadBkPk->Text = "" + stats[5][0];

		//health, shield, and oz values are of type FLOAT
		float health = 0;
		ReadProcessMemory(hProcess, (void*)stats2[0][1], &health, sizeof(health), NULL);
		lblLoadHealth->Text = "" + health;
		float shield;
		ReadProcessMemory(hProcess, (void*)stats2[2][1], &shield, sizeof(shield), NULL);
		lblLoadShield->Text = "" + shield;
		float oz;
		ReadProcessMemory(hProcess, (void*)stats2[4][1], &oz, sizeof(oz), NULL);
		lblLoadOz->Text = "" + oz;

		lblLoadBank->Text = "" + stats2[6][0];
		lblLoadLevel->Text = "" + stats3[0][0];

		float exp;
		ReadProcessMemory(hProcess, (void*)stats3[1][1], &exp, sizeof(exp), NULL);
		lblLoadExp->Text = "" + exp;
		float expMult;
		ReadProcessMemory(hProcess, (void*)stats3[2][1], &expMult, sizeof(expMult), NULL);
		lblLoadExpMult->Text = "" + expMult;

		//golden key values are of type BYTE
		byte bUsed;
		ReadProcessMemory(hProcess, (void*)goldKeys[0][1], &bUsed, sizeof(bUsed), NULL);
		lblLoadBaseUsed->Text = "" + bUsed;
		byte sUsed;
		ReadProcessMemory(hProcess, (void*)goldKeys[1][1], &sUsed, sizeof(sUsed), NULL);
		lblLoadShiftUsed->Text = "" + sUsed;
		byte bTotal;
		ReadProcessMemory(hProcess, (void*)goldKeys[2][1], &bTotal, sizeof(bTotal), NULL);
		lblLoadBaseTotal->Text = "" + bTotal;
		byte sTotal;
		ReadProcessMemory(hProcess, (void*)goldKeys[3][1], &sTotal, sizeof(sTotal), NULL);
		lblLoadShiftTotal->Text = "" + sTotal;

		lblLoadSP->Text = "" + skillPoints[0][0];

		//skill cooldown timer value is of type FLOAT
		float cdTimer;
		ReadProcessMemory(hProcess, (void*)skillCDTimer[0][1], &cdTimer, sizeof(cdTimer), NULL);
		lblLoadCDTimer->Text = "" + cdTimer;

		lblCTClass->Text = "" + loadSkills[0][0];
		lblWilClass->Text = "" + loadSkills[0][0];
		lblAthClass->Text = "" + loadSkills[0][0];
		lblNClass->Text = "" + loadSkills[0][0];
		lblJClass->Text = "" + loadSkills[0][0];
		lblAurClass->Text = "" + loadSkills[0][0];

		displaySkills("lblCS", "tpClaptrap", 36);
		displaySkills("lblWS", "tpWilhelm", 33);
		displaySkills("lblAtS", "tpAthena", 34);
		displaySkills("lblNS", "tpNisha", 34);
		displaySkills("lblJS", "tpJack", 38);
		displaySkills("lblAuS", "tpAurelia", 37);
	}	//end loadMemory

	//Function to load the allloted skills points
	//allows reusablitiy for all of the character tabs instead of having to load each one individually
	System::Void Borderlands_TPS::displaySkills(System::String^ Name, System::String^ tabPage, int noOfSkills)
	{
		int i = 1;
		for each(Control^ tab in tcClasses->Controls)
		{
			if (tab->Name == tabPage)
			{
				for (int i = 1; i < noOfSkills + 1; i++)
				{
					for each (Control^ con in tab->Controls)
					{
						if (con->Name == (Name + i))
						{
							con->Text = "" + loadSkills[i][0];
							break;
						}
					}
				}
				break;
			}
		}
	}	//end displaySkills

	//Function to get input from the user to write to memory
	System::Void Borderlands_TPS::writeMemory(System::Object^  sender, System::EventArgs^  e)
	{
		String^ tbName = safe_cast<Label^>(sender)->Name;
		int i = -1;	//variable to store the value from the event sending label
		int j = 0;	//variable used to get the right memory address
		float k = 0.0;	//variable used to store float value in from the event sending label
		byte b = -1;	//variable used to store byte value in form the event sending label
		bool found = false;

		getInput(sender); //gets the input data

		//determines where the event call came from
		for each (Control^ group in tpStats->Controls)
		{
			if (group->GetType() == GroupBox::typeid)
			{
				for each (Control^ con in group->Controls)
				{
					if (con->Name == tbName)
					{
						if (con->Name == "lblLoadHealth" || con->Name == "lblLoadShield"
							|| con->Name == "lblLoadOz" || con->Name == "lblLoadCDTimer" || con->Name == "lblLoadExp" || con->Name == "lblLoadExpMult")
						{
							k = float::Parse(safe_cast<Label^>(sender)->Text);
							j = safe_cast<Label ^>(sender)->TabIndex;
							break;
						}
						else if (con->Name == "lblLoadBaseUsed" || con->Name == "lblLoadShiftUsed" || con->Name == "lblLoadBaseTotal" || con->Name == "lblLoadShiftTotal")
						{
							b = byte::Parse(safe_cast<Label^>(sender)->Text);
							j = safe_cast<Label ^>(sender)->TabIndex;
							break;
						}
						else
						{
							i = int::Parse(safe_cast<Label^>(sender)->Text);
							j = safe_cast<Label ^>(sender)->TabIndex;
							break;
						}
						found = true;
					}
				}
				if (found)
				{
					break;
				}
			}
		}

		//update the memory with the input
		if (i > -1)
		{
			if (j < 8)
			{
				WriteProcessMemory(hProcess, (void*)stats[j - 1][1], (void*)&i, (DWORD)sizeof(i), NULL);	//write to memory
			}
			else if (j == 15) //if updating the bank size
			{
				WriteProcessMemory(hProcess, (void*)stats2[6][1], (void*)&i, (DWORD)sizeof(i), NULL);	//write to memory
			}
			else if (j == 16) //if updating level
			{
				WriteProcessMemory(hProcess, (void*)stats3[0][1], (void*)&i, (DWORD)sizeof(i), NULL);	//write to memory
			}
			else if (j == 500) //if updating skill points
			{
				WriteProcessMemory(hProcess, (void*)skillPoints[0][1], (void*)&i, (DWORD)sizeof(i), NULL);	//write to memory
			}
		}
		else if (k > -1)
		{
			if (j == 501) //if updating the skill cooldown timer
			{
				WriteProcessMemory(hProcess, (void*)skillCDTimer[0][1], (void*)&k, (DWORD)sizeof(k), NULL);	//write to memory
			}
			else if (j == 17 || j == 18)
			{
				WriteProcessMemory(hProcess, (void*)stats3[j - 16][1], (void*)&k, (DWORD)sizeof(k), NULL);	//write to memory
			}
			else //if updating health, shield or oz values
			{
				WriteProcessMemory(hProcess, (void*)stats2[j - 9][1], (void*)&k, (DWORD)sizeof(k), NULL);	//write to memory
			}
		}
		if (b > -1) //if updating golden key values
		{
			WriteProcessMemory(hProcess, (void*)goldKeys[j - 19][1], (void*)&b, (BYTE)sizeof(b), NULL);	//write to memory
		}
	}	//end writeMemory

	//Function to call inputBox
	System::Void Borderlands_TPS::getInput(System::Object^  sender)
	{
		inputBox^ input = gcnew inputBox;
		//display the input box
		input->ShowDialog();
		if (input->textBox1->Text != "")
		{
			safe_cast<Label^>(sender)->Text = input->textBox1->Text;
		}

		delete input;
	}	//end getInput

	//function to repeatively read memory for all of the pointers and then finally calling loadMemory
	System::Void Borderlands_TPS::LoadTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		//Reread the memory values
		for (int i = 0; i < 8; i++)
		{
			ReadProcessMemory(hProcess, (void*)stats[i][1], &stats[i][0], sizeof(stats[i][0]), NULL);
		}
		for (int i = 0; i < 7; i++)
		{
			ReadProcessMemory(hProcess, (void*)stats2[i][1], &stats2[i][0], sizeof(stats2[i][0]), NULL);
		}
		for (int i = 0; i < 3; i++)
		{
			ReadProcessMemory(hProcess, (void*)stats3[i][1], &stats3[i][0], sizeof(stats3[i][0]), NULL);
		}
		for (int i = 0; i < 4; i++)
		{
			ReadProcessMemory(hProcess, (void*)goldKeys[i][1], &goldKeys[i][0], sizeof(goldKeys[i][0]), NULL);
		}
		ReadProcessMemory(hProcess, (void*)skillPoints[0][1], &skillPoints[0][0], sizeof(skillPoints[0][0]), NULL);
		ReadProcessMemory(hProcess, (void*)skillCDTimer[0][1], &skillCDTimer[0][0], sizeof(skillCDTimer[0][0]), NULL);
		for (int i = 0; i < 39; i++)
		{
			ReadProcessMemory(hProcess, (void*)loadSkills[i][1], &loadSkills[i][0], sizeof(loadSkills[i][0]), NULL);
		}
		//redisplay the values
		loadMemory();
	}	//end LoadTimer_Tick

	//function to increment or decrement the alloted points in a skill
	System::Void Borderlands_TPS::clickSkill(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		int increment = int::Parse(safe_cast<Label^>(sender)->Text);
		int tabIndex = safe_cast<Label^>(sender)->TabIndex;
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			increment += 1;
			WriteProcessMemory(hProcess, (void*)loadSkills[tabIndex + 1][1], (void*)&increment, (DWORD)sizeof(increment), NULL);

		}
		else if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			if (increment != 0)
			{
				increment -= 1;
				WriteProcessMemory(hProcess, (void*)loadSkills[tabIndex + 1][1], (void*)&increment, (DWORD)sizeof(increment), NULL);
			}
		}

	}	//end clickSkill

	//function to repeaticely write to memory to the switch pointers to activate Godmode cheat
	System::Void Borderlands_TPS::godmodeTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int godInt = 6;
		WriteProcessMemory(hProcess, (void*)stats2[1][1], (void*)&godInt, (DWORD)sizeof(godInt), NULL);
		WriteProcessMemory(hProcess, (void*)stats2[3][1], (void*)&godInt, (DWORD)sizeof(godInt), NULL);
		WriteProcessMemory(hProcess, (void*)stats2[5][1], (void*)&godInt, (DWORD)sizeof(godInt), NULL);
	}	//end godmodeTimer_Tick

	//function to repeatively write to the backpack limit check pointer to activate unlimited backpack space cheat
	System::Void Borderlands_TPS::bkpkTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int unlimitedBkPk = 1;
		WriteProcessMemory(hProcess, (void*)stats[7][1], (void*)&unlimitedBkPk, (DWORD)sizeof(unlimitedBkPk), NULL);
	}	//end bkpkTimer_Tick

	//determines whether to turn on or off the unlimited backpack space cheat
	//based on the checked state of ckbxuBkPk
	System::Void Borderlands_TPS::ckbxuBkPk_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (ckbxuBkPk->Checked == true)
		{
			bkpkTimer->Start();
		}
		else
		{
			bkpkTimer->Stop();
			WriteProcessMemory(hProcess, (void*)stats[7][1], (void*)&stats[6][0], (DWORD)sizeof(stats[6][0]), NULL);
		}
	}	//end ckbxuBkPk_CheckedChanged

	//determines whether to turn on or off the God Mode cheat
	//based on the checked state of ckbxGodMode
	System::Void Borderlands_TPS::ckbxGodMode_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (ckbxGodMode->Checked == true)
		{
			godmodeTimer->Start();
		}
		else
		{
			godmodeTimer->Stop();
			int normalMode = 5;
			WriteProcessMemory(hProcess, (void*)stats2[1][1], (void*)&normalMode, (DWORD)sizeof(normalMode), NULL);
			WriteProcessMemory(hProcess, (void*)stats2[3][1], (void*)&normalMode, (DWORD)sizeof(normalMode), NULL);
			WriteProcessMemory(hProcess, (void*)stats2[5][1], (void*)&normalMode, (DWORD)sizeof(normalMode), NULL);
		}
	}	//end ckbxGodMode_CheckedChanged
}	//end namespace BorderlandsThePreSequel

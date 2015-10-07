#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>

namespace BorderlandsThePreSequel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Borderlands_TPS
	/// </summary>
	public ref class Borderlands_TPS : public System::Windows::Forms::Form
	{
	public:
		Borderlands_TPS(void); //Constructor

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Borderlands_TPS();	//destructor

	private: System::Windows::Forms::TabControl^  tcMain;
	protected:
	private: System::Windows::Forms::TabPage^  tpStats;
	private: System::Windows::Forms::GroupBox^  gbGoldenKeys;
	private: System::Windows::Forms::GroupBox^  gbInventory;
	private: System::Windows::Forms::GroupBox^  gbCurrency;
	private: System::Windows::Forms::Label^  lblLoadCredits;
	private: System::Windows::Forms::Label^  lblLoadMShards;
	private: System::Windows::Forms::Label^  lblLoadMoney;
	private: System::Windows::Forms::Label^  lblCredits;
	private: System::Windows::Forms::Label^  lblMShards;
	private: System::Windows::Forms::Label^  lblMoney;
	private: System::Windows::Forms::GroupBox^  gbMain;
	private: System::Windows::Forms::Label^  lblLoadExpMult;
	private: System::Windows::Forms::Label^  lblLoadNextLevel;
	private: System::Windows::Forms::Label^  lblLoadExp;
	private: System::Windows::Forms::Label^  lblLoadLevel;
	private: System::Windows::Forms::Label^  lblEXPMult;
	private: System::Windows::Forms::Label^  lblEXPNext;
	private: System::Windows::Forms::Label^  lblEXP;
	private: System::Windows::Forms::Label^  lblLevel;
	private: System::Windows::Forms::Label^  lblLoadOz;
	private: System::Windows::Forms::Label^  lblLoadShield;
	private: System::Windows::Forms::Label^  lblLoadHealth;
	private: System::Windows::Forms::Label^  lblOz;
	private: System::Windows::Forms::Label^  lblShield;
	private: System::Windows::Forms::Label^  lblHealth;
	private: System::Windows::Forms::TabPage^  tpSkills;
	private: System::Windows::Forms::Label^  lblLoadBank;
	private: System::Windows::Forms::Label^  lblLoadBkPk;
	private: System::Windows::Forms::Label^  lblLoadWD;
	private: System::Windows::Forms::Label^  lblBank;
	private: System::Windows::Forms::Label^  lblBkPk;
	private: System::Windows::Forms::Label^  lblWD;
	private: System::Windows::Forms::Label^  lblLoadShiftTotal;
	private: System::Windows::Forms::Label^  lblShiftTotal;
	private: System::Windows::Forms::Label^  lblLoadBaseTotal;
	private: System::Windows::Forms::Label^  lblLoadShiftUsed;
	private: System::Windows::Forms::Label^  lblLoadBaseUsed;
	private: System::Windows::Forms::Label^  lblBaseTotal;
	private: System::Windows::Forms::Label^  lblShiftUsed;
	private: System::Windows::Forms::Label^  lblBaseUsed;
	private: System::Windows::Forms::TabControl^  tcClasses;
	private: System::Windows::Forms::TabPage^  tpClaptrap;
	private: System::Windows::Forms::TabPage^  tpWilhelm;
	private: System::Windows::Forms::Label^  lblCS1;
	private: System::Windows::Forms::TabPage^  tpAthena;

	private: System::Windows::Forms::TabPage^  tpNisha;
	private: System::Windows::Forms::TabPage^  tpJack;
	private: System::Windows::Forms::TabPage^  tpAurelia;
	private: System::Windows::Forms::Label^  lblCS36;

	private: System::Windows::Forms::Label^  lblCS35;

	private: System::Windows::Forms::Label^  lblCS34;

	private: System::Windows::Forms::Label^  lblCS33;

	private: System::Windows::Forms::Label^  lblCS32;

	private: System::Windows::Forms::Label^  lblCS31;


	private: System::Windows::Forms::Label^  lblCS30;

	private: System::Windows::Forms::Label^  lblCS29;
	private: System::Windows::Forms::Label^  lblCS28;
	private: System::Windows::Forms::Label^  lblCS27;
	private: System::Windows::Forms::Label^  lblCS26;
	private: System::Windows::Forms::Label^  lblCS25;
	private: System::Windows::Forms::Label^  lblCS24;
	private: System::Windows::Forms::Label^  lblCS23;
	private: System::Windows::Forms::Label^  lblCS22;
	private: System::Windows::Forms::Label^  lblCS21;
	private: System::Windows::Forms::Label^  lblCS20;
	private: System::Windows::Forms::Label^  lblCS19;
	private: System::Windows::Forms::Label^  lblCS18;
	private: System::Windows::Forms::Label^  lblCS17;
	private: System::Windows::Forms::Label^  lblCS16;
	private: System::Windows::Forms::Label^  lblCS15;
	private: System::Windows::Forms::Label^  lblCS14;
	private: System::Windows::Forms::Label^  lblCS13;
	private: System::Windows::Forms::Label^  lblCS12;
	private: System::Windows::Forms::Label^  lblCS11;
	private: System::Windows::Forms::Label^  lblCS10;
	private: System::Windows::Forms::Label^  lblCS9;
	private: System::Windows::Forms::Label^  lblCS8;
	private: System::Windows::Forms::Label^  lblCS7;
	private: System::Windows::Forms::Label^  lblCS6;
	private: System::Windows::Forms::Label^  lblCS5;
	private: System::Windows::Forms::Label^  lblCS4;
	private: System::Windows::Forms::Label^  lblCS3;
	private: System::Windows::Forms::Label^  lblCS2;
	private: System::Windows::Forms::Label^  lblCTClass;
	private: System::Windows::Forms::Label^  lblWilClass;
	private: System::Windows::Forms::Label^  lblWS33;

	private: System::Windows::Forms::Label^  lblWS32;

	private: System::Windows::Forms::Label^  lblWS31;

	private: System::Windows::Forms::Label^  lblWS30;

	private: System::Windows::Forms::Label^  lblWS29;

	private: System::Windows::Forms::Label^  lblWS28;

	private: System::Windows::Forms::Label^  lblWS27;

	private: System::Windows::Forms::Label^  lblWS26;

	private: System::Windows::Forms::Label^  lblWS25;


	private: System::Windows::Forms::Label^  lblWS24;

	private: System::Windows::Forms::Label^  lblWS23;


	private: System::Windows::Forms::Label^  lblWS22;

	private: System::Windows::Forms::Label^  lblWS21;

	private: System::Windows::Forms::Label^  lblWS20;

	private: System::Windows::Forms::Label^  lblWS19;

	private: System::Windows::Forms::Label^  lblWS18;

	private: System::Windows::Forms::Label^  lblWS17;

	private: System::Windows::Forms::Label^  lblWS16;

	private: System::Windows::Forms::Label^  lblWS15;

	private: System::Windows::Forms::Label^  lblWS14;


	private: System::Windows::Forms::Label^  lblWS13;

	private: System::Windows::Forms::Label^  lblWS12;

	private: System::Windows::Forms::Label^  lblWS11;

	private: System::Windows::Forms::Label^  lblWS10;

	private: System::Windows::Forms::Label^  lblWS9;

	private: System::Windows::Forms::Label^  lblWS8;

	private: System::Windows::Forms::Label^  lblWS7;

	private: System::Windows::Forms::Label^  lblWS6;

	private: System::Windows::Forms::Label^  lblWS5;

	private: System::Windows::Forms::Label^  lblWS4;

	private: System::Windows::Forms::Label^  lblWS3;

	private: System::Windows::Forms::Label^  lblWS2;

	private: System::Windows::Forms::Label^  lblWS1;
	private: System::Windows::Forms::Label^  lblErrorMsg;
	private: System::Windows::Forms::Timer^  LoadTimer;
	private: System::Windows::Forms::Label^  lblAthClass;
	private: System::Windows::Forms::Label^  lblAtS34;
	private: System::Windows::Forms::Label^  lblAtS33;
	private: System::Windows::Forms::Label^  lblAtS32;
	private: System::Windows::Forms::Label^  lblAtS31;
	private: System::Windows::Forms::Label^  lblAtS30;
	private: System::Windows::Forms::Label^  lblAtS29;
	private: System::Windows::Forms::Label^  lblAtS27;
	private: System::Windows::Forms::Label^  lblAtS26;
	private: System::Windows::Forms::Label^  lblAtS28;
	private: System::Windows::Forms::Label^  lblAtS25;
	private: System::Windows::Forms::Label^  lblAtS24;
	private: System::Windows::Forms::Label^  lblAtS23;
	private: System::Windows::Forms::Label^  lblAtS22;
	private: System::Windows::Forms::Label^  lblAtS21;
	private: System::Windows::Forms::Label^  lblAtS20;
	private: System::Windows::Forms::Label^  lblAtS19;
	private: System::Windows::Forms::Label^  lblAtS18;
	private: System::Windows::Forms::Label^  lblAtS17;
	private: System::Windows::Forms::Label^  lblAtS16;
	private: System::Windows::Forms::Label^  lblAtS15;
	private: System::Windows::Forms::Label^  lblAtS14;
	private: System::Windows::Forms::Label^  lblAtS13;
	private: System::Windows::Forms::Label^  lblAtS12;
	private: System::Windows::Forms::Label^  lblAtS11;
	private: System::Windows::Forms::Label^  lblAtS10;
	private: System::Windows::Forms::Label^  lblAtS9;
	private: System::Windows::Forms::Label^  lblAtS8;
	private: System::Windows::Forms::Label^  lblAtS7;
	private: System::Windows::Forms::Label^  lblAtS6;
	private: System::Windows::Forms::Label^  lblAtS5;
	private: System::Windows::Forms::Label^  lblAtS4;
	private: System::Windows::Forms::Label^  lblAtS3;
	private: System::Windows::Forms::Label^  lblAtS2;
	private: System::Windows::Forms::Label^  lblAtS1;
	private: System::Windows::Forms::Label^  lblNClass;
	private: System::Windows::Forms::Label^  lblNS34;

	private: System::Windows::Forms::Label^  lblNS33;

	private: System::Windows::Forms::Label^  lblNS32;

	private: System::Windows::Forms::Label^  lblNS31;

	private: System::Windows::Forms::Label^  lblNS30;

	private: System::Windows::Forms::Label^  lblNS29;

	private: System::Windows::Forms::Label^  lblNS28;

	private: System::Windows::Forms::Label^  lblNS27;

	private: System::Windows::Forms::Label^  lblNS4;
	private: System::Windows::Forms::Label^  lblNS26;

	private: System::Windows::Forms::Label^  lblNS25;

	private: System::Windows::Forms::Label^  lblNS24;

	private: System::Windows::Forms::Label^  lblNS23;

	private: System::Windows::Forms::Label^  lblNS22;

	private: System::Windows::Forms::Label^  lblNS21;

	private: System::Windows::Forms::Label^  lblNS20;

	private: System::Windows::Forms::Label^  lblNS19;

	private: System::Windows::Forms::Label^  lblNS18;

	private: System::Windows::Forms::Label^  lblNS17;

	private: System::Windows::Forms::Label^  lblNS16;

	private: System::Windows::Forms::Label^  lblNS15;

	private: System::Windows::Forms::Label^  lblNS14;

	private: System::Windows::Forms::Label^  lblNS13;

	private: System::Windows::Forms::Label^  lblNS12;
	private: System::Windows::Forms::Label^  lblNS11;
	private: System::Windows::Forms::Label^  lblNS10;
	private: System::Windows::Forms::Label^  lblNS9;
	private: System::Windows::Forms::Label^  lblNS8;
	private: System::Windows::Forms::Label^  lblNS7;
	private: System::Windows::Forms::Label^  lblNS6;
	private: System::Windows::Forms::Label^  lblNS5;
	private: System::Windows::Forms::Label^  lblNS3;
	private: System::Windows::Forms::Label^  lblNS2;
	private: System::Windows::Forms::Label^  lblNS1;
	private: System::Windows::Forms::Label^  lblJClass;
	private: System::Windows::Forms::Label^  lblJS38;
	private: System::Windows::Forms::Label^  lblJS37;




	private: System::Windows::Forms::Label^  lblJS35;

	private: System::Windows::Forms::Label^  lblJS34;

	private: System::Windows::Forms::Label^  lblJS33;

	private: System::Windows::Forms::Label^  lblJS32;

	private: System::Windows::Forms::Label^  lblJS31;

	private: System::Windows::Forms::Label^  lblJS30;
	private: System::Windows::Forms::Label^  lblJS36;


	private: System::Windows::Forms::Label^  lblJS29;

	private: System::Windows::Forms::Label^  lblJS28;

	private: System::Windows::Forms::Label^  lblJS27;

	private: System::Windows::Forms::Label^  lblJS26;

	private: System::Windows::Forms::Label^  lblJS25;

	private: System::Windows::Forms::Label^  lblJS23;

	private: System::Windows::Forms::Label^  lblJS22;

	private: System::Windows::Forms::Label^  lblJS21;

	private: System::Windows::Forms::Label^  lblJS20;

	private: System::Windows::Forms::Label^  lblJS19;

	private: System::Windows::Forms::Label^  lblJS18;

	private: System::Windows::Forms::Label^  lblJS16;

	private: System::Windows::Forms::Label^  lblJS15;

	private: System::Windows::Forms::Label^  lblJS14;

	private: System::Windows::Forms::Label^  lblJS13;

	private: System::Windows::Forms::Label^  lblJS12;

	private: System::Windows::Forms::Label^  lblJS11;

	private: System::Windows::Forms::Label^  lblJS10;

	private: System::Windows::Forms::Label^  lblJS9;

	private: System::Windows::Forms::Label^  lblJS8;

	private: System::Windows::Forms::Label^  lblJS6;

	private: System::Windows::Forms::Label^  lblJS5;

	private: System::Windows::Forms::Label^  lblJS3;

	private: System::Windows::Forms::Label^  lblJS2;

	private: System::Windows::Forms::Label^  lblJS1;
	private: System::Windows::Forms::Label^  lblAuS4;
	private: System::Windows::Forms::Label^  lblAuS16;
	private: System::Windows::Forms::Label^  lblAuS26;




	private: System::Windows::Forms::Label^  lblAurClass;
	private: System::Windows::Forms::Label^  lblAuS37;


	private: System::Windows::Forms::Label^  lblAuS36;

	private: System::Windows::Forms::Label^  lblAuS35;

	private: System::Windows::Forms::Label^  lblAuS34;

	private: System::Windows::Forms::Label^  lblAuS33;

	private: System::Windows::Forms::Label^  lblAuS32;

	private: System::Windows::Forms::Label^  lblAuS31;

	private: System::Windows::Forms::Label^  lblAuS30;

	private: System::Windows::Forms::Label^  lblAuS29;

	private: System::Windows::Forms::Label^  lblAuS28;

	private: System::Windows::Forms::Label^  lblAuS27;

	private: System::Windows::Forms::Label^  lblAuS25;

	private: System::Windows::Forms::Label^  lblAuS24;

	private: System::Windows::Forms::Label^  lblAuS23;

	private: System::Windows::Forms::Label^  lblAuS22;

	private: System::Windows::Forms::Label^  lblAuS21;

	private: System::Windows::Forms::Label^  lblAuS20;

	private: System::Windows::Forms::Label^  lblAuS19;

	private: System::Windows::Forms::Label^  lblAuS18;

	private: System::Windows::Forms::Label^  lblAuS17;

	private: System::Windows::Forms::Label^  lblAuS15;

	private: System::Windows::Forms::Label^  lblAuS14;

	private: System::Windows::Forms::Label^  lblAuS13;

	private: System::Windows::Forms::Label^  lblAuS12;

	private: System::Windows::Forms::Label^  lblAuS11;

	private: System::Windows::Forms::Label^  lblAuS10;

	private: System::Windows::Forms::Label^  lblAuS9;

	private: System::Windows::Forms::Label^  lblAuS8;

	private: System::Windows::Forms::Label^  lblAuS7;

	private: System::Windows::Forms::Label^  lblAuS6;

	private: System::Windows::Forms::Label^  lblAuS5;

	private: System::Windows::Forms::Label^  lblAuS3;

	private: System::Windows::Forms::Label^  lblAuS2;

	private: System::Windows::Forms::Label^  lblAuS1;

	private: System::Windows::Forms::Label^  lblJS24;

	private: System::Windows::Forms::Label^  lblJS17;

	private: System::Windows::Forms::Label^  lblJS7;

	private: System::Windows::Forms::Label^  lblJS4;
	private: System::Windows::Forms::GroupBox^  gbSkills;
	private: System::Windows::Forms::Label^  lblLoadSP;
	private: System::Windows::Forms::Label^  lblCDTimer;
	private: System::Windows::Forms::Label^  lblSkillPoints;
	private: System::Windows::Forms::Label^  lblLoadCDTimer;
	private: System::Windows::Forms::TabPage^  tpCheats;
	private: System::Windows::Forms::CheckBox^  ckbxGodMode;
	private: System::Windows::Forms::CheckBox^  ckbxuBkPk;
	private: System::Windows::Forms::Timer^  bkpkTimer;
	private: System::Windows::Forms::Timer^  godmodeTimer;

	private: System::ComponentModel::IContainer^  components;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Borderlands_TPS::typeid));
			this->tcMain = (gcnew System::Windows::Forms::TabControl());
			this->tpStats = (gcnew System::Windows::Forms::TabPage());
			this->gbSkills = (gcnew System::Windows::Forms::GroupBox());
			this->lblLoadCDTimer = (gcnew System::Windows::Forms::Label());
			this->lblLoadSP = (gcnew System::Windows::Forms::Label());
			this->lblCDTimer = (gcnew System::Windows::Forms::Label());
			this->lblSkillPoints = (gcnew System::Windows::Forms::Label());
			this->gbGoldenKeys = (gcnew System::Windows::Forms::GroupBox());
			this->lblLoadShiftTotal = (gcnew System::Windows::Forms::Label());
			this->lblShiftTotal = (gcnew System::Windows::Forms::Label());
			this->lblLoadBaseTotal = (gcnew System::Windows::Forms::Label());
			this->lblLoadShiftUsed = (gcnew System::Windows::Forms::Label());
			this->lblLoadBaseUsed = (gcnew System::Windows::Forms::Label());
			this->lblBaseTotal = (gcnew System::Windows::Forms::Label());
			this->lblShiftUsed = (gcnew System::Windows::Forms::Label());
			this->lblBaseUsed = (gcnew System::Windows::Forms::Label());
			this->gbInventory = (gcnew System::Windows::Forms::GroupBox());
			this->lblLoadBank = (gcnew System::Windows::Forms::Label());
			this->lblLoadBkPk = (gcnew System::Windows::Forms::Label());
			this->lblLoadWD = (gcnew System::Windows::Forms::Label());
			this->lblBank = (gcnew System::Windows::Forms::Label());
			this->lblBkPk = (gcnew System::Windows::Forms::Label());
			this->lblWD = (gcnew System::Windows::Forms::Label());
			this->gbCurrency = (gcnew System::Windows::Forms::GroupBox());
			this->lblLoadCredits = (gcnew System::Windows::Forms::Label());
			this->lblLoadMShards = (gcnew System::Windows::Forms::Label());
			this->lblLoadMoney = (gcnew System::Windows::Forms::Label());
			this->lblCredits = (gcnew System::Windows::Forms::Label());
			this->lblMShards = (gcnew System::Windows::Forms::Label());
			this->lblMoney = (gcnew System::Windows::Forms::Label());
			this->gbMain = (gcnew System::Windows::Forms::GroupBox());
			this->lblLoadExpMult = (gcnew System::Windows::Forms::Label());
			this->lblLoadNextLevel = (gcnew System::Windows::Forms::Label());
			this->lblLoadExp = (gcnew System::Windows::Forms::Label());
			this->lblLoadLevel = (gcnew System::Windows::Forms::Label());
			this->lblEXPMult = (gcnew System::Windows::Forms::Label());
			this->lblEXPNext = (gcnew System::Windows::Forms::Label());
			this->lblEXP = (gcnew System::Windows::Forms::Label());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->lblLoadOz = (gcnew System::Windows::Forms::Label());
			this->lblLoadShield = (gcnew System::Windows::Forms::Label());
			this->lblLoadHealth = (gcnew System::Windows::Forms::Label());
			this->lblOz = (gcnew System::Windows::Forms::Label());
			this->lblShield = (gcnew System::Windows::Forms::Label());
			this->lblHealth = (gcnew System::Windows::Forms::Label());
			this->tpSkills = (gcnew System::Windows::Forms::TabPage());
			this->tcClasses = (gcnew System::Windows::Forms::TabControl());
			this->tpClaptrap = (gcnew System::Windows::Forms::TabPage());
			this->lblCTClass = (gcnew System::Windows::Forms::Label());
			this->lblCS36 = (gcnew System::Windows::Forms::Label());
			this->lblCS35 = (gcnew System::Windows::Forms::Label());
			this->lblCS34 = (gcnew System::Windows::Forms::Label());
			this->lblCS33 = (gcnew System::Windows::Forms::Label());
			this->lblCS32 = (gcnew System::Windows::Forms::Label());
			this->lblCS31 = (gcnew System::Windows::Forms::Label());
			this->lblCS30 = (gcnew System::Windows::Forms::Label());
			this->lblCS29 = (gcnew System::Windows::Forms::Label());
			this->lblCS28 = (gcnew System::Windows::Forms::Label());
			this->lblCS27 = (gcnew System::Windows::Forms::Label());
			this->lblCS26 = (gcnew System::Windows::Forms::Label());
			this->lblCS25 = (gcnew System::Windows::Forms::Label());
			this->lblCS24 = (gcnew System::Windows::Forms::Label());
			this->lblCS23 = (gcnew System::Windows::Forms::Label());
			this->lblCS22 = (gcnew System::Windows::Forms::Label());
			this->lblCS21 = (gcnew System::Windows::Forms::Label());
			this->lblCS20 = (gcnew System::Windows::Forms::Label());
			this->lblCS19 = (gcnew System::Windows::Forms::Label());
			this->lblCS18 = (gcnew System::Windows::Forms::Label());
			this->lblCS17 = (gcnew System::Windows::Forms::Label());
			this->lblCS16 = (gcnew System::Windows::Forms::Label());
			this->lblCS15 = (gcnew System::Windows::Forms::Label());
			this->lblCS14 = (gcnew System::Windows::Forms::Label());
			this->lblCS13 = (gcnew System::Windows::Forms::Label());
			this->lblCS12 = (gcnew System::Windows::Forms::Label());
			this->lblCS11 = (gcnew System::Windows::Forms::Label());
			this->lblCS10 = (gcnew System::Windows::Forms::Label());
			this->lblCS9 = (gcnew System::Windows::Forms::Label());
			this->lblCS8 = (gcnew System::Windows::Forms::Label());
			this->lblCS7 = (gcnew System::Windows::Forms::Label());
			this->lblCS6 = (gcnew System::Windows::Forms::Label());
			this->lblCS5 = (gcnew System::Windows::Forms::Label());
			this->lblCS4 = (gcnew System::Windows::Forms::Label());
			this->lblCS3 = (gcnew System::Windows::Forms::Label());
			this->lblCS2 = (gcnew System::Windows::Forms::Label());
			this->lblCS1 = (gcnew System::Windows::Forms::Label());
			this->tpWilhelm = (gcnew System::Windows::Forms::TabPage());
			this->lblWilClass = (gcnew System::Windows::Forms::Label());
			this->lblWS33 = (gcnew System::Windows::Forms::Label());
			this->lblWS32 = (gcnew System::Windows::Forms::Label());
			this->lblWS31 = (gcnew System::Windows::Forms::Label());
			this->lblWS30 = (gcnew System::Windows::Forms::Label());
			this->lblWS29 = (gcnew System::Windows::Forms::Label());
			this->lblWS28 = (gcnew System::Windows::Forms::Label());
			this->lblWS27 = (gcnew System::Windows::Forms::Label());
			this->lblWS26 = (gcnew System::Windows::Forms::Label());
			this->lblWS25 = (gcnew System::Windows::Forms::Label());
			this->lblWS24 = (gcnew System::Windows::Forms::Label());
			this->lblWS23 = (gcnew System::Windows::Forms::Label());
			this->lblWS22 = (gcnew System::Windows::Forms::Label());
			this->lblWS21 = (gcnew System::Windows::Forms::Label());
			this->lblWS20 = (gcnew System::Windows::Forms::Label());
			this->lblWS19 = (gcnew System::Windows::Forms::Label());
			this->lblWS18 = (gcnew System::Windows::Forms::Label());
			this->lblWS17 = (gcnew System::Windows::Forms::Label());
			this->lblWS16 = (gcnew System::Windows::Forms::Label());
			this->lblWS15 = (gcnew System::Windows::Forms::Label());
			this->lblWS14 = (gcnew System::Windows::Forms::Label());
			this->lblWS13 = (gcnew System::Windows::Forms::Label());
			this->lblWS12 = (gcnew System::Windows::Forms::Label());
			this->lblWS11 = (gcnew System::Windows::Forms::Label());
			this->lblWS10 = (gcnew System::Windows::Forms::Label());
			this->lblWS9 = (gcnew System::Windows::Forms::Label());
			this->lblWS8 = (gcnew System::Windows::Forms::Label());
			this->lblWS7 = (gcnew System::Windows::Forms::Label());
			this->lblWS6 = (gcnew System::Windows::Forms::Label());
			this->lblWS5 = (gcnew System::Windows::Forms::Label());
			this->lblWS4 = (gcnew System::Windows::Forms::Label());
			this->lblWS3 = (gcnew System::Windows::Forms::Label());
			this->lblWS2 = (gcnew System::Windows::Forms::Label());
			this->lblWS1 = (gcnew System::Windows::Forms::Label());
			this->tpAthena = (gcnew System::Windows::Forms::TabPage());
			this->lblAthClass = (gcnew System::Windows::Forms::Label());
			this->lblAtS34 = (gcnew System::Windows::Forms::Label());
			this->lblAtS33 = (gcnew System::Windows::Forms::Label());
			this->lblAtS32 = (gcnew System::Windows::Forms::Label());
			this->lblAtS31 = (gcnew System::Windows::Forms::Label());
			this->lblAtS30 = (gcnew System::Windows::Forms::Label());
			this->lblAtS29 = (gcnew System::Windows::Forms::Label());
			this->lblAtS27 = (gcnew System::Windows::Forms::Label());
			this->lblAtS26 = (gcnew System::Windows::Forms::Label());
			this->lblAtS28 = (gcnew System::Windows::Forms::Label());
			this->lblAtS25 = (gcnew System::Windows::Forms::Label());
			this->lblAtS24 = (gcnew System::Windows::Forms::Label());
			this->lblAtS23 = (gcnew System::Windows::Forms::Label());
			this->lblAtS22 = (gcnew System::Windows::Forms::Label());
			this->lblAtS21 = (gcnew System::Windows::Forms::Label());
			this->lblAtS20 = (gcnew System::Windows::Forms::Label());
			this->lblAtS19 = (gcnew System::Windows::Forms::Label());
			this->lblAtS18 = (gcnew System::Windows::Forms::Label());
			this->lblAtS17 = (gcnew System::Windows::Forms::Label());
			this->lblAtS16 = (gcnew System::Windows::Forms::Label());
			this->lblAtS15 = (gcnew System::Windows::Forms::Label());
			this->lblAtS14 = (gcnew System::Windows::Forms::Label());
			this->lblAtS13 = (gcnew System::Windows::Forms::Label());
			this->lblAtS12 = (gcnew System::Windows::Forms::Label());
			this->lblAtS11 = (gcnew System::Windows::Forms::Label());
			this->lblAtS10 = (gcnew System::Windows::Forms::Label());
			this->lblAtS9 = (gcnew System::Windows::Forms::Label());
			this->lblAtS8 = (gcnew System::Windows::Forms::Label());
			this->lblAtS7 = (gcnew System::Windows::Forms::Label());
			this->lblAtS6 = (gcnew System::Windows::Forms::Label());
			this->lblAtS5 = (gcnew System::Windows::Forms::Label());
			this->lblAtS4 = (gcnew System::Windows::Forms::Label());
			this->lblAtS3 = (gcnew System::Windows::Forms::Label());
			this->lblAtS2 = (gcnew System::Windows::Forms::Label());
			this->lblAtS1 = (gcnew System::Windows::Forms::Label());
			this->tpNisha = (gcnew System::Windows::Forms::TabPage());
			this->lblNClass = (gcnew System::Windows::Forms::Label());
			this->lblNS34 = (gcnew System::Windows::Forms::Label());
			this->lblNS33 = (gcnew System::Windows::Forms::Label());
			this->lblNS32 = (gcnew System::Windows::Forms::Label());
			this->lblNS31 = (gcnew System::Windows::Forms::Label());
			this->lblNS30 = (gcnew System::Windows::Forms::Label());
			this->lblNS29 = (gcnew System::Windows::Forms::Label());
			this->lblNS28 = (gcnew System::Windows::Forms::Label());
			this->lblNS27 = (gcnew System::Windows::Forms::Label());
			this->lblNS4 = (gcnew System::Windows::Forms::Label());
			this->lblNS26 = (gcnew System::Windows::Forms::Label());
			this->lblNS25 = (gcnew System::Windows::Forms::Label());
			this->lblNS24 = (gcnew System::Windows::Forms::Label());
			this->lblNS23 = (gcnew System::Windows::Forms::Label());
			this->lblNS22 = (gcnew System::Windows::Forms::Label());
			this->lblNS21 = (gcnew System::Windows::Forms::Label());
			this->lblNS20 = (gcnew System::Windows::Forms::Label());
			this->lblNS19 = (gcnew System::Windows::Forms::Label());
			this->lblNS18 = (gcnew System::Windows::Forms::Label());
			this->lblNS17 = (gcnew System::Windows::Forms::Label());
			this->lblNS16 = (gcnew System::Windows::Forms::Label());
			this->lblNS15 = (gcnew System::Windows::Forms::Label());
			this->lblNS14 = (gcnew System::Windows::Forms::Label());
			this->lblNS13 = (gcnew System::Windows::Forms::Label());
			this->lblNS12 = (gcnew System::Windows::Forms::Label());
			this->lblNS11 = (gcnew System::Windows::Forms::Label());
			this->lblNS10 = (gcnew System::Windows::Forms::Label());
			this->lblNS9 = (gcnew System::Windows::Forms::Label());
			this->lblNS8 = (gcnew System::Windows::Forms::Label());
			this->lblNS7 = (gcnew System::Windows::Forms::Label());
			this->lblNS6 = (gcnew System::Windows::Forms::Label());
			this->lblNS5 = (gcnew System::Windows::Forms::Label());
			this->lblNS3 = (gcnew System::Windows::Forms::Label());
			this->lblNS2 = (gcnew System::Windows::Forms::Label());
			this->lblNS1 = (gcnew System::Windows::Forms::Label());
			this->tpJack = (gcnew System::Windows::Forms::TabPage());
			this->lblJS24 = (gcnew System::Windows::Forms::Label());
			this->lblJS17 = (gcnew System::Windows::Forms::Label());
			this->lblJS7 = (gcnew System::Windows::Forms::Label());
			this->lblJS4 = (gcnew System::Windows::Forms::Label());
			this->lblJClass = (gcnew System::Windows::Forms::Label());
			this->lblJS38 = (gcnew System::Windows::Forms::Label());
			this->lblJS37 = (gcnew System::Windows::Forms::Label());
			this->lblJS35 = (gcnew System::Windows::Forms::Label());
			this->lblJS34 = (gcnew System::Windows::Forms::Label());
			this->lblJS33 = (gcnew System::Windows::Forms::Label());
			this->lblJS32 = (gcnew System::Windows::Forms::Label());
			this->lblJS31 = (gcnew System::Windows::Forms::Label());
			this->lblJS30 = (gcnew System::Windows::Forms::Label());
			this->lblJS36 = (gcnew System::Windows::Forms::Label());
			this->lblJS29 = (gcnew System::Windows::Forms::Label());
			this->lblJS28 = (gcnew System::Windows::Forms::Label());
			this->lblJS27 = (gcnew System::Windows::Forms::Label());
			this->lblJS26 = (gcnew System::Windows::Forms::Label());
			this->lblJS25 = (gcnew System::Windows::Forms::Label());
			this->lblJS23 = (gcnew System::Windows::Forms::Label());
			this->lblJS22 = (gcnew System::Windows::Forms::Label());
			this->lblJS21 = (gcnew System::Windows::Forms::Label());
			this->lblJS20 = (gcnew System::Windows::Forms::Label());
			this->lblJS19 = (gcnew System::Windows::Forms::Label());
			this->lblJS18 = (gcnew System::Windows::Forms::Label());
			this->lblJS16 = (gcnew System::Windows::Forms::Label());
			this->lblJS15 = (gcnew System::Windows::Forms::Label());
			this->lblJS14 = (gcnew System::Windows::Forms::Label());
			this->lblJS13 = (gcnew System::Windows::Forms::Label());
			this->lblJS12 = (gcnew System::Windows::Forms::Label());
			this->lblJS11 = (gcnew System::Windows::Forms::Label());
			this->lblJS10 = (gcnew System::Windows::Forms::Label());
			this->lblJS9 = (gcnew System::Windows::Forms::Label());
			this->lblJS8 = (gcnew System::Windows::Forms::Label());
			this->lblJS6 = (gcnew System::Windows::Forms::Label());
			this->lblJS5 = (gcnew System::Windows::Forms::Label());
			this->lblJS3 = (gcnew System::Windows::Forms::Label());
			this->lblJS2 = (gcnew System::Windows::Forms::Label());
			this->lblJS1 = (gcnew System::Windows::Forms::Label());
			this->tpAurelia = (gcnew System::Windows::Forms::TabPage());
			this->lblAuS4 = (gcnew System::Windows::Forms::Label());
			this->lblAuS16 = (gcnew System::Windows::Forms::Label());
			this->lblAuS26 = (gcnew System::Windows::Forms::Label());
			this->lblAurClass = (gcnew System::Windows::Forms::Label());
			this->lblAuS37 = (gcnew System::Windows::Forms::Label());
			this->lblAuS36 = (gcnew System::Windows::Forms::Label());
			this->lblAuS35 = (gcnew System::Windows::Forms::Label());
			this->lblAuS34 = (gcnew System::Windows::Forms::Label());
			this->lblAuS33 = (gcnew System::Windows::Forms::Label());
			this->lblAuS32 = (gcnew System::Windows::Forms::Label());
			this->lblAuS31 = (gcnew System::Windows::Forms::Label());
			this->lblAuS30 = (gcnew System::Windows::Forms::Label());
			this->lblAuS29 = (gcnew System::Windows::Forms::Label());
			this->lblAuS28 = (gcnew System::Windows::Forms::Label());
			this->lblAuS27 = (gcnew System::Windows::Forms::Label());
			this->lblAuS25 = (gcnew System::Windows::Forms::Label());
			this->lblAuS24 = (gcnew System::Windows::Forms::Label());
			this->lblAuS23 = (gcnew System::Windows::Forms::Label());
			this->lblAuS22 = (gcnew System::Windows::Forms::Label());
			this->lblAuS21 = (gcnew System::Windows::Forms::Label());
			this->lblAuS20 = (gcnew System::Windows::Forms::Label());
			this->lblAuS19 = (gcnew System::Windows::Forms::Label());
			this->lblAuS18 = (gcnew System::Windows::Forms::Label());
			this->lblAuS17 = (gcnew System::Windows::Forms::Label());
			this->lblAuS15 = (gcnew System::Windows::Forms::Label());
			this->lblAuS14 = (gcnew System::Windows::Forms::Label());
			this->lblAuS13 = (gcnew System::Windows::Forms::Label());
			this->lblAuS12 = (gcnew System::Windows::Forms::Label());
			this->lblAuS11 = (gcnew System::Windows::Forms::Label());
			this->lblAuS10 = (gcnew System::Windows::Forms::Label());
			this->lblAuS9 = (gcnew System::Windows::Forms::Label());
			this->lblAuS8 = (gcnew System::Windows::Forms::Label());
			this->lblAuS7 = (gcnew System::Windows::Forms::Label());
			this->lblAuS6 = (gcnew System::Windows::Forms::Label());
			this->lblAuS5 = (gcnew System::Windows::Forms::Label());
			this->lblAuS3 = (gcnew System::Windows::Forms::Label());
			this->lblAuS2 = (gcnew System::Windows::Forms::Label());
			this->lblAuS1 = (gcnew System::Windows::Forms::Label());
			this->tpCheats = (gcnew System::Windows::Forms::TabPage());
			this->ckbxGodMode = (gcnew System::Windows::Forms::CheckBox());
			this->ckbxuBkPk = (gcnew System::Windows::Forms::CheckBox());
			this->lblErrorMsg = (gcnew System::Windows::Forms::Label());
			this->LoadTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->bkpkTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->godmodeTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->tcMain->SuspendLayout();
			this->tpStats->SuspendLayout();
			this->gbSkills->SuspendLayout();
			this->gbGoldenKeys->SuspendLayout();
			this->gbInventory->SuspendLayout();
			this->gbCurrency->SuspendLayout();
			this->gbMain->SuspendLayout();
			this->tpSkills->SuspendLayout();
			this->tcClasses->SuspendLayout();
			this->tpClaptrap->SuspendLayout();
			this->tpWilhelm->SuspendLayout();
			this->tpAthena->SuspendLayout();
			this->tpNisha->SuspendLayout();
			this->tpJack->SuspendLayout();
			this->tpAurelia->SuspendLayout();
			this->tpCheats->SuspendLayout();
			this->SuspendLayout();
			// 
			// tcMain
			// 
			this->tcMain->Controls->Add(this->tpStats);
			this->tcMain->Controls->Add(this->tpSkills);
			this->tcMain->Controls->Add(this->tpCheats);
			this->tcMain->Location = System::Drawing::Point(12, 12);
			this->tcMain->Name = L"tcMain";
			this->tcMain->SelectedIndex = 0;
			this->tcMain->Size = System::Drawing::Size(552, 386);
			this->tcMain->TabIndex = 0;
			// 
			// tpStats
			// 
			this->tpStats->Controls->Add(this->gbSkills);
			this->tpStats->Controls->Add(this->gbGoldenKeys);
			this->tpStats->Controls->Add(this->gbInventory);
			this->tpStats->Controls->Add(this->gbCurrency);
			this->tpStats->Controls->Add(this->gbMain);
			this->tpStats->Location = System::Drawing::Point(4, 22);
			this->tpStats->Name = L"tpStats";
			this->tpStats->Padding = System::Windows::Forms::Padding(3);
			this->tpStats->Size = System::Drawing::Size(544, 360);
			this->tpStats->TabIndex = 0;
			this->tpStats->Text = L"Stats";
			this->tpStats->UseVisualStyleBackColor = true;
			// 
			// gbSkills
			// 
			this->gbSkills->Controls->Add(this->lblLoadCDTimer);
			this->gbSkills->Controls->Add(this->lblLoadSP);
			this->gbSkills->Controls->Add(this->lblCDTimer);
			this->gbSkills->Controls->Add(this->lblSkillPoints);
			this->gbSkills->Location = System::Drawing::Point(288, 229);
			this->gbSkills->Name = L"gbSkills";
			this->gbSkills->Size = System::Drawing::Size(240, 124);
			this->gbSkills->TabIndex = 4;
			this->gbSkills->TabStop = false;
			this->gbSkills->Text = L"Skills";
			// 
			// lblLoadCDTimer
			// 
			this->lblLoadCDTimer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadCDTimer->Location = System::Drawing::Point(155, 59);
			this->lblLoadCDTimer->Name = L"lblLoadCDTimer";
			this->lblLoadCDTimer->Size = System::Drawing::Size(65, 20);
			this->lblLoadCDTimer->TabIndex = 501;
			this->lblLoadCDTimer->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadCDTimer->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadSP
			// 
			this->lblLoadSP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadSP->Location = System::Drawing::Point(155, 35);
			this->lblLoadSP->Name = L"lblLoadSP";
			this->lblLoadSP->Size = System::Drawing::Size(65, 20);
			this->lblLoadSP->TabIndex = 500;
			this->lblLoadSP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadSP->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblCDTimer
			// 
			this->lblCDTimer->AutoSize = true;
			this->lblCDTimer->Location = System::Drawing::Point(32, 63);
			this->lblCDTimer->Name = L"lblCDTimer";
			this->lblCDTimer->Size = System::Drawing::Size(86, 13);
			this->lblCDTimer->TabIndex = 1;
			this->lblCDTimer->Text = L"Cooldown Timer:";
			// 
			// lblSkillPoints
			// 
			this->lblSkillPoints->AutoSize = true;
			this->lblSkillPoints->Location = System::Drawing::Point(30, 39);
			this->lblSkillPoints->Name = L"lblSkillPoints";
			this->lblSkillPoints->Size = System::Drawing::Size(61, 13);
			this->lblSkillPoints->TabIndex = 0;
			this->lblSkillPoints->Text = L"Skill Points:";
			// 
			// gbGoldenKeys
			// 
			this->gbGoldenKeys->Controls->Add(this->lblLoadShiftTotal);
			this->gbGoldenKeys->Controls->Add(this->lblShiftTotal);
			this->gbGoldenKeys->Controls->Add(this->lblLoadBaseTotal);
			this->gbGoldenKeys->Controls->Add(this->lblLoadShiftUsed);
			this->gbGoldenKeys->Controls->Add(this->lblLoadBaseUsed);
			this->gbGoldenKeys->Controls->Add(this->lblBaseTotal);
			this->gbGoldenKeys->Controls->Add(this->lblShiftUsed);
			this->gbGoldenKeys->Controls->Add(this->lblBaseUsed);
			this->gbGoldenKeys->Location = System::Drawing::Point(6, 218);
			this->gbGoldenKeys->Name = L"gbGoldenKeys";
			this->gbGoldenKeys->Size = System::Drawing::Size(240, 135);
			this->gbGoldenKeys->TabIndex = 3;
			this->gbGoldenKeys->TabStop = false;
			this->gbGoldenKeys->Text = L"Golden Keys";
			// 
			// lblLoadShiftTotal
			// 
			this->lblLoadShiftTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadShiftTotal->Location = System::Drawing::Point(148, 94);
			this->lblLoadShiftTotal->Name = L"lblLoadShiftTotal";
			this->lblLoadShiftTotal->Size = System::Drawing::Size(37, 20);
			this->lblLoadShiftTotal->TabIndex = 22;
			this->lblLoadShiftTotal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadShiftTotal->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblShiftTotal
			// 
			this->lblShiftTotal->AutoSize = true;
			this->lblShiftTotal->Location = System::Drawing::Point(10, 98);
			this->lblShiftTotal->Name = L"lblShiftTotal";
			this->lblShiftTotal->Size = System::Drawing::Size(58, 13);
			this->lblShiftTotal->TabIndex = 119;
			this->lblShiftTotal->Text = L"Shift Total:";
			// 
			// lblLoadBaseTotal
			// 
			this->lblLoadBaseTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadBaseTotal->Location = System::Drawing::Point(148, 70);
			this->lblLoadBaseTotal->Name = L"lblLoadBaseTotal";
			this->lblLoadBaseTotal->Size = System::Drawing::Size(37, 20);
			this->lblLoadBaseTotal->TabIndex = 21;
			this->lblLoadBaseTotal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadBaseTotal->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadShiftUsed
			// 
			this->lblLoadShiftUsed->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadShiftUsed->Location = System::Drawing::Point(148, 46);
			this->lblLoadShiftUsed->Name = L"lblLoadShiftUsed";
			this->lblLoadShiftUsed->Size = System::Drawing::Size(37, 20);
			this->lblLoadShiftUsed->TabIndex = 20;
			this->lblLoadShiftUsed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadShiftUsed->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadBaseUsed
			// 
			this->lblLoadBaseUsed->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadBaseUsed->Location = System::Drawing::Point(148, 22);
			this->lblLoadBaseUsed->Name = L"lblLoadBaseUsed";
			this->lblLoadBaseUsed->Size = System::Drawing::Size(37, 20);
			this->lblLoadBaseUsed->TabIndex = 19;
			this->lblLoadBaseUsed->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadBaseUsed->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblBaseTotal
			// 
			this->lblBaseTotal->AutoSize = true;
			this->lblBaseTotal->Location = System::Drawing::Point(7, 74);
			this->lblBaseTotal->Name = L"lblBaseTotal";
			this->lblBaseTotal->Size = System::Drawing::Size(61, 13);
			this->lblBaseTotal->TabIndex = 118;
			this->lblBaseTotal->Text = L"Base Total:";
			// 
			// lblShiftUsed
			// 
			this->lblShiftUsed->AutoSize = true;
			this->lblShiftUsed->Location = System::Drawing::Point(9, 50);
			this->lblShiftUsed->Name = L"lblShiftUsed";
			this->lblShiftUsed->Size = System::Drawing::Size(59, 13);
			this->lblShiftUsed->TabIndex = 117;
			this->lblShiftUsed->Text = L"Shift Used:";
			// 
			// lblBaseUsed
			// 
			this->lblBaseUsed->AutoSize = true;
			this->lblBaseUsed->Location = System::Drawing::Point(6, 26);
			this->lblBaseUsed->Name = L"lblBaseUsed";
			this->lblBaseUsed->Size = System::Drawing::Size(62, 13);
			this->lblBaseUsed->TabIndex = 116;
			this->lblBaseUsed->Text = L"Base Used:";
			// 
			// gbInventory
			// 
			this->gbInventory->Controls->Add(this->lblLoadBank);
			this->gbInventory->Controls->Add(this->lblLoadBkPk);
			this->gbInventory->Controls->Add(this->lblLoadWD);
			this->gbInventory->Controls->Add(this->lblBank);
			this->gbInventory->Controls->Add(this->lblBkPk);
			this->gbInventory->Controls->Add(this->lblWD);
			this->gbInventory->Location = System::Drawing::Point(288, 112);
			this->gbInventory->Name = L"gbInventory";
			this->gbInventory->Size = System::Drawing::Size(240, 100);
			this->gbInventory->TabIndex = 2;
			this->gbInventory->TabStop = false;
			this->gbInventory->Text = L"Inventory";
			// 
			// lblLoadBank
			// 
			this->lblLoadBank->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadBank->Location = System::Drawing::Point(153, 70);
			this->lblLoadBank->Name = L"lblLoadBank";
			this->lblLoadBank->Size = System::Drawing::Size(65, 20);
			this->lblLoadBank->TabIndex = 15;
			this->lblLoadBank->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadBank->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadBkPk
			// 
			this->lblLoadBkPk->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadBkPk->Location = System::Drawing::Point(153, 46);
			this->lblLoadBkPk->Name = L"lblLoadBkPk";
			this->lblLoadBkPk->Size = System::Drawing::Size(65, 20);
			this->lblLoadBkPk->TabIndex = 6;
			this->lblLoadBkPk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadBkPk->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadWD
			// 
			this->lblLoadWD->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadWD->Location = System::Drawing::Point(153, 22);
			this->lblLoadWD->Name = L"lblLoadWD";
			this->lblLoadWD->Size = System::Drawing::Size(65, 20);
			this->lblLoadWD->TabIndex = 5;
			this->lblLoadWD->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadWD->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblBank
			// 
			this->lblBank->AutoSize = true;
			this->lblBank->Location = System::Drawing::Point(32, 74);
			this->lblBank->Name = L"lblBank";
			this->lblBank->Size = System::Drawing::Size(35, 13);
			this->lblBank->TabIndex = 115;
			this->lblBank->Text = L"Bank:";
			// 
			// lblBkPk
			// 
			this->lblBkPk->AutoSize = true;
			this->lblBkPk->Location = System::Drawing::Point(32, 50);
			this->lblBkPk->Name = L"lblBkPk";
			this->lblBkPk->Size = System::Drawing::Size(59, 13);
			this->lblBkPk->TabIndex = 114;
			this->lblBkPk->Text = L"Backpack:";
			// 
			// lblWD
			// 
			this->lblWD->AutoSize = true;
			this->lblWD->Location = System::Drawing::Point(32, 26);
			this->lblWD->Name = L"lblWD";
			this->lblWD->Size = System::Drawing::Size(85, 13);
			this->lblWD->TabIndex = 113;
			this->lblWD->Text = L"Weapon Decks:";
			// 
			// gbCurrency
			// 
			this->gbCurrency->Controls->Add(this->lblLoadCredits);
			this->gbCurrency->Controls->Add(this->lblLoadMShards);
			this->gbCurrency->Controls->Add(this->lblLoadMoney);
			this->gbCurrency->Controls->Add(this->lblCredits);
			this->gbCurrency->Controls->Add(this->lblMShards);
			this->gbCurrency->Controls->Add(this->lblMoney);
			this->gbCurrency->Location = System::Drawing::Point(288, 6);
			this->gbCurrency->Name = L"gbCurrency";
			this->gbCurrency->Size = System::Drawing::Size(240, 100);
			this->gbCurrency->TabIndex = 1;
			this->gbCurrency->TabStop = false;
			this->gbCurrency->Text = L"Currency";
			// 
			// lblLoadCredits
			// 
			this->lblLoadCredits->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadCredits->Location = System::Drawing::Point(153, 70);
			this->lblLoadCredits->Name = L"lblLoadCredits";
			this->lblLoadCredits->Size = System::Drawing::Size(65, 20);
			this->lblLoadCredits->TabIndex = 3;
			this->lblLoadCredits->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadCredits->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadMShards
			// 
			this->lblLoadMShards->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadMShards->Location = System::Drawing::Point(153, 46);
			this->lblLoadMShards->Name = L"lblLoadMShards";
			this->lblLoadMShards->Size = System::Drawing::Size(65, 20);
			this->lblLoadMShards->TabIndex = 2;
			this->lblLoadMShards->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadMShards->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadMoney
			// 
			this->lblLoadMoney->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadMoney->Location = System::Drawing::Point(153, 22);
			this->lblLoadMoney->Name = L"lblLoadMoney";
			this->lblLoadMoney->Size = System::Drawing::Size(65, 20);
			this->lblLoadMoney->TabIndex = 1;
			this->lblLoadMoney->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadMoney->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblCredits
			// 
			this->lblCredits->AutoSize = true;
			this->lblCredits->Location = System::Drawing::Point(32, 74);
			this->lblCredits->Name = L"lblCredits";
			this->lblCredits->Size = System::Drawing::Size(42, 13);
			this->lblCredits->TabIndex = 109;
			this->lblCredits->Text = L"Credits:";
			// 
			// lblMShards
			// 
			this->lblMShards->AutoSize = true;
			this->lblMShards->Location = System::Drawing::Point(32, 50);
			this->lblMShards->Name = L"lblMShards";
			this->lblMShards->Size = System::Drawing::Size(73, 13);
			this->lblMShards->TabIndex = 108;
			this->lblMShards->Text = L"Moon Shards:";
			// 
			// lblMoney
			// 
			this->lblMoney->AutoSize = true;
			this->lblMoney->Location = System::Drawing::Point(32, 26);
			this->lblMoney->Name = L"lblMoney";
			this->lblMoney->Size = System::Drawing::Size(42, 13);
			this->lblMoney->TabIndex = 107;
			this->lblMoney->Text = L"Money:";
			// 
			// gbMain
			// 
			this->gbMain->Controls->Add(this->lblLoadExpMult);
			this->gbMain->Controls->Add(this->lblLoadNextLevel);
			this->gbMain->Controls->Add(this->lblLoadExp);
			this->gbMain->Controls->Add(this->lblLoadLevel);
			this->gbMain->Controls->Add(this->lblEXPMult);
			this->gbMain->Controls->Add(this->lblEXPNext);
			this->gbMain->Controls->Add(this->lblEXP);
			this->gbMain->Controls->Add(this->lblLevel);
			this->gbMain->Controls->Add(this->lblLoadOz);
			this->gbMain->Controls->Add(this->lblLoadShield);
			this->gbMain->Controls->Add(this->lblLoadHealth);
			this->gbMain->Controls->Add(this->lblOz);
			this->gbMain->Controls->Add(this->lblShield);
			this->gbMain->Controls->Add(this->lblHealth);
			this->gbMain->Location = System::Drawing::Point(6, 6);
			this->gbMain->Name = L"gbMain";
			this->gbMain->Size = System::Drawing::Size(240, 206);
			this->gbMain->TabIndex = 0;
			this->gbMain->TabStop = false;
			this->gbMain->Text = L"Main Stats";
			// 
			// lblLoadExpMult
			// 
			this->lblLoadExpMult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadExpMult->Location = System::Drawing::Point(158, 166);
			this->lblLoadExpMult->Name = L"lblLoadExpMult";
			this->lblLoadExpMult->Size = System::Drawing::Size(65, 20);
			this->lblLoadExpMult->TabIndex = 18;
			this->lblLoadExpMult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadExpMult->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadNextLevel
			// 
			this->lblLoadNextLevel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadNextLevel->Location = System::Drawing::Point(158, 142);
			this->lblLoadNextLevel->Name = L"lblLoadNextLevel";
			this->lblLoadNextLevel->Size = System::Drawing::Size(65, 20);
			this->lblLoadNextLevel->TabIndex = 4;
			this->lblLoadNextLevel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadNextLevel->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadExp
			// 
			this->lblLoadExp->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadExp->Location = System::Drawing::Point(158, 118);
			this->lblLoadExp->Name = L"lblLoadExp";
			this->lblLoadExp->Size = System::Drawing::Size(65, 20);
			this->lblLoadExp->TabIndex = 17;
			this->lblLoadExp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadExp->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadLevel
			// 
			this->lblLoadLevel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadLevel->Location = System::Drawing::Point(158, 94);
			this->lblLoadLevel->Name = L"lblLoadLevel";
			this->lblLoadLevel->Size = System::Drawing::Size(65, 20);
			this->lblLoadLevel->TabIndex = 16;
			this->lblLoadLevel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadLevel->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblEXPMult
			// 
			this->lblEXPMult->AutoSize = true;
			this->lblEXPMult->Location = System::Drawing::Point(20, 170);
			this->lblEXPMult->Name = L"lblEXPMult";
			this->lblEXPMult->Size = System::Drawing::Size(51, 13);
			this->lblEXPMult->TabIndex = 106;
			this->lblEXPMult->Text = L"Exp Mult:";
			// 
			// lblEXPNext
			// 
			this->lblEXPNext->AutoSize = true;
			this->lblEXPNext->Location = System::Drawing::Point(20, 146);
			this->lblEXPNext->Name = L"lblEXPNext";
			this->lblEXPNext->Size = System::Drawing::Size(69, 13);
			this->lblEXPNext->TabIndex = 105;
			this->lblEXPNext->Text = L"Exp to Level:";
			// 
			// lblEXP
			// 
			this->lblEXP->AutoSize = true;
			this->lblEXP->Location = System::Drawing::Point(20, 122);
			this->lblEXP->Name = L"lblEXP";
			this->lblEXP->Size = System::Drawing::Size(28, 13);
			this->lblEXP->TabIndex = 104;
			this->lblEXP->Text = L"Exp:";
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->Location = System::Drawing::Point(20, 98);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(36, 13);
			this->lblLevel->TabIndex = 103;
			this->lblLevel->Text = L"Level:";
			// 
			// lblLoadOz
			// 
			this->lblLoadOz->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadOz->Location = System::Drawing::Point(158, 70);
			this->lblLoadOz->Name = L"lblLoadOz";
			this->lblLoadOz->Size = System::Drawing::Size(65, 20);
			this->lblLoadOz->TabIndex = 13;
			this->lblLoadOz->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadOz->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadShield
			// 
			this->lblLoadShield->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadShield->Location = System::Drawing::Point(158, 46);
			this->lblLoadShield->Name = L"lblLoadShield";
			this->lblLoadShield->Size = System::Drawing::Size(65, 20);
			this->lblLoadShield->TabIndex = 11;
			this->lblLoadShield->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadShield->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblLoadHealth
			// 
			this->lblLoadHealth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoadHealth->Location = System::Drawing::Point(158, 22);
			this->lblLoadHealth->Name = L"lblLoadHealth";
			this->lblLoadHealth->Size = System::Drawing::Size(65, 20);
			this->lblLoadHealth->TabIndex = 9;
			this->lblLoadHealth->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblLoadHealth->Click += gcnew System::EventHandler(this, &Borderlands_TPS::writeMemory);
			// 
			// lblOz
			// 
			this->lblOz->AutoSize = true;
			this->lblOz->Location = System::Drawing::Point(20, 74);
			this->lblOz->Name = L"lblOz";
			this->lblOz->Size = System::Drawing::Size(23, 13);
			this->lblOz->TabIndex = 102;
			this->lblOz->Text = L"Oz:";
			// 
			// lblShield
			// 
			this->lblShield->AutoSize = true;
			this->lblShield->Location = System::Drawing::Point(20, 50);
			this->lblShield->Name = L"lblShield";
			this->lblShield->Size = System::Drawing::Size(39, 13);
			this->lblShield->TabIndex = 101;
			this->lblShield->Text = L"Shield:";
			// 
			// lblHealth
			// 
			this->lblHealth->AutoSize = true;
			this->lblHealth->Location = System::Drawing::Point(20, 26);
			this->lblHealth->Name = L"lblHealth";
			this->lblHealth->Size = System::Drawing::Size(41, 13);
			this->lblHealth->TabIndex = 100;
			this->lblHealth->Text = L"Health:";
			// 
			// tpSkills
			// 
			this->tpSkills->Controls->Add(this->tcClasses);
			this->tpSkills->Location = System::Drawing::Point(4, 22);
			this->tpSkills->Name = L"tpSkills";
			this->tpSkills->Padding = System::Windows::Forms::Padding(3);
			this->tpSkills->Size = System::Drawing::Size(544, 360);
			this->tpSkills->TabIndex = 1;
			this->tpSkills->Text = L"Skills";
			this->tpSkills->UseVisualStyleBackColor = true;
			// 
			// tcClasses
			// 
			this->tcClasses->Controls->Add(this->tpClaptrap);
			this->tcClasses->Controls->Add(this->tpWilhelm);
			this->tcClasses->Controls->Add(this->tpAthena);
			this->tcClasses->Controls->Add(this->tpNisha);
			this->tcClasses->Controls->Add(this->tpJack);
			this->tcClasses->Controls->Add(this->tpAurelia);
			this->tcClasses->Location = System::Drawing::Point(6, 6);
			this->tcClasses->Name = L"tcClasses";
			this->tcClasses->SelectedIndex = 0;
			this->tcClasses->Size = System::Drawing::Size(524, 348);
			this->tcClasses->TabIndex = 0;
			// 
			// tpClaptrap
			// 
			this->tpClaptrap->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpClaptrap.BackgroundImage")));
			this->tpClaptrap->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpClaptrap->Controls->Add(this->lblCTClass);
			this->tpClaptrap->Controls->Add(this->lblCS36);
			this->tpClaptrap->Controls->Add(this->lblCS35);
			this->tpClaptrap->Controls->Add(this->lblCS34);
			this->tpClaptrap->Controls->Add(this->lblCS33);
			this->tpClaptrap->Controls->Add(this->lblCS32);
			this->tpClaptrap->Controls->Add(this->lblCS31);
			this->tpClaptrap->Controls->Add(this->lblCS30);
			this->tpClaptrap->Controls->Add(this->lblCS29);
			this->tpClaptrap->Controls->Add(this->lblCS28);
			this->tpClaptrap->Controls->Add(this->lblCS27);
			this->tpClaptrap->Controls->Add(this->lblCS26);
			this->tpClaptrap->Controls->Add(this->lblCS25);
			this->tpClaptrap->Controls->Add(this->lblCS24);
			this->tpClaptrap->Controls->Add(this->lblCS23);
			this->tpClaptrap->Controls->Add(this->lblCS22);
			this->tpClaptrap->Controls->Add(this->lblCS21);
			this->tpClaptrap->Controls->Add(this->lblCS20);
			this->tpClaptrap->Controls->Add(this->lblCS19);
			this->tpClaptrap->Controls->Add(this->lblCS18);
			this->tpClaptrap->Controls->Add(this->lblCS17);
			this->tpClaptrap->Controls->Add(this->lblCS16);
			this->tpClaptrap->Controls->Add(this->lblCS15);
			this->tpClaptrap->Controls->Add(this->lblCS14);
			this->tpClaptrap->Controls->Add(this->lblCS13);
			this->tpClaptrap->Controls->Add(this->lblCS12);
			this->tpClaptrap->Controls->Add(this->lblCS11);
			this->tpClaptrap->Controls->Add(this->lblCS10);
			this->tpClaptrap->Controls->Add(this->lblCS9);
			this->tpClaptrap->Controls->Add(this->lblCS8);
			this->tpClaptrap->Controls->Add(this->lblCS7);
			this->tpClaptrap->Controls->Add(this->lblCS6);
			this->tpClaptrap->Controls->Add(this->lblCS5);
			this->tpClaptrap->Controls->Add(this->lblCS4);
			this->tpClaptrap->Controls->Add(this->lblCS3);
			this->tpClaptrap->Controls->Add(this->lblCS2);
			this->tpClaptrap->Controls->Add(this->lblCS1);
			this->tpClaptrap->Location = System::Drawing::Point(4, 22);
			this->tpClaptrap->Name = L"tpClaptrap";
			this->tpClaptrap->Padding = System::Windows::Forms::Padding(3);
			this->tpClaptrap->Size = System::Drawing::Size(516, 322);
			this->tpClaptrap->TabIndex = 0;
			this->tpClaptrap->Text = L"Claptrap";
			this->tpClaptrap->UseVisualStyleBackColor = true;
			// 
			// lblCTClass
			// 
			this->lblCTClass->BackColor = System::Drawing::Color::Transparent;
			this->lblCTClass->ForeColor = System::Drawing::Color::Lime;
			this->lblCTClass->Location = System::Drawing::Point(320, 41);
			this->lblCTClass->Name = L"lblCTClass";
			this->lblCTClass->Size = System::Drawing::Size(25, 16);
			this->lblCTClass->TabIndex = 39;
			this->lblCTClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblCS36
			// 
			this->lblCS36->ForeColor = System::Drawing::Color::Lime;
			this->lblCS36->Location = System::Drawing::Point(426, 296);
			this->lblCS36->Name = L"lblCS36";
			this->lblCS36->Size = System::Drawing::Size(25, 16);
			this->lblCS36->TabIndex = 35;
			this->lblCS36->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS36->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS35
			// 
			this->lblCS35->ForeColor = System::Drawing::Color::Lime;
			this->lblCS35->Location = System::Drawing::Point(473, 251);
			this->lblCS35->Name = L"lblCS35";
			this->lblCS35->Size = System::Drawing::Size(25, 16);
			this->lblCS35->TabIndex = 34;
			this->lblCS35->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS35->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS34
			// 
			this->lblCS34->ForeColor = System::Drawing::Color::Lime;
			this->lblCS34->Location = System::Drawing::Point(384, 253);
			this->lblCS34->Name = L"lblCS34";
			this->lblCS34->Size = System::Drawing::Size(25, 16);
			this->lblCS34->TabIndex = 33;
			this->lblCS34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS34->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS33
			// 
			this->lblCS33->ForeColor = System::Drawing::Color::Lime;
			this->lblCS33->Location = System::Drawing::Point(473, 213);
			this->lblCS33->Name = L"lblCS33";
			this->lblCS33->Size = System::Drawing::Size(25, 16);
			this->lblCS33->TabIndex = 32;
			this->lblCS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS32
			// 
			this->lblCS32->ForeColor = System::Drawing::Color::Lime;
			this->lblCS32->Location = System::Drawing::Point(426, 213);
			this->lblCS32->Name = L"lblCS32";
			this->lblCS32->Size = System::Drawing::Size(25, 16);
			this->lblCS32->TabIndex = 31;
			this->lblCS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS31
			// 
			this->lblCS31->ForeColor = System::Drawing::Color::Lime;
			this->lblCS31->Location = System::Drawing::Point(384, 213);
			this->lblCS31->Name = L"lblCS31";
			this->lblCS31->Size = System::Drawing::Size(25, 16);
			this->lblCS31->TabIndex = 30;
			this->lblCS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS30
			// 
			this->lblCS30->ForeColor = System::Drawing::Color::Lime;
			this->lblCS30->Location = System::Drawing::Point(426, 173);
			this->lblCS30->Name = L"lblCS30";
			this->lblCS30->Size = System::Drawing::Size(25, 16);
			this->lblCS30->TabIndex = 29;
			this->lblCS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS29
			// 
			this->lblCS29->ForeColor = System::Drawing::Color::Lime;
			this->lblCS29->Location = System::Drawing::Point(471, 132);
			this->lblCS29->Name = L"lblCS29";
			this->lblCS29->Size = System::Drawing::Size(25, 16);
			this->lblCS29->TabIndex = 28;
			this->lblCS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS28
			// 
			this->lblCS28->ForeColor = System::Drawing::Color::Lime;
			this->lblCS28->Location = System::Drawing::Point(426, 132);
			this->lblCS28->Name = L"lblCS28";
			this->lblCS28->Size = System::Drawing::Size(25, 16);
			this->lblCS28->TabIndex = 27;
			this->lblCS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS27
			// 
			this->lblCS27->ForeColor = System::Drawing::Color::Lime;
			this->lblCS27->Location = System::Drawing::Point(382, 132);
			this->lblCS27->Name = L"lblCS27";
			this->lblCS27->Size = System::Drawing::Size(25, 16);
			this->lblCS27->TabIndex = 26;
			this->lblCS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS26
			// 
			this->lblCS26->ForeColor = System::Drawing::Color::Lime;
			this->lblCS26->Location = System::Drawing::Point(471, 93);
			this->lblCS26->Name = L"lblCS26";
			this->lblCS26->Size = System::Drawing::Size(25, 16);
			this->lblCS26->TabIndex = 25;
			this->lblCS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS25
			// 
			this->lblCS25->ForeColor = System::Drawing::Color::Lime;
			this->lblCS25->Location = System::Drawing::Point(426, 93);
			this->lblCS25->Name = L"lblCS25";
			this->lblCS25->Size = System::Drawing::Size(25, 16);
			this->lblCS25->TabIndex = 24;
			this->lblCS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS24
			// 
			this->lblCS24->ForeColor = System::Drawing::Color::Lime;
			this->lblCS24->Location = System::Drawing::Point(382, 93);
			this->lblCS24->Name = L"lblCS24";
			this->lblCS24->Size = System::Drawing::Size(25, 16);
			this->lblCS24->TabIndex = 23;
			this->lblCS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS23
			// 
			this->lblCS23->ForeColor = System::Drawing::Color::Lime;
			this->lblCS23->Location = System::Drawing::Point(254, 296);
			this->lblCS23->Name = L"lblCS23";
			this->lblCS23->Size = System::Drawing::Size(25, 16);
			this->lblCS23->TabIndex = 22;
			this->lblCS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS22
			// 
			this->lblCS22->ForeColor = System::Drawing::Color::Lime;
			this->lblCS22->Location = System::Drawing::Point(301, 253);
			this->lblCS22->Name = L"lblCS22";
			this->lblCS22->Size = System::Drawing::Size(25, 16);
			this->lblCS22->TabIndex = 21;
			this->lblCS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS21
			// 
			this->lblCS21->ForeColor = System::Drawing::Color::Lime;
			this->lblCS21->Location = System::Drawing::Point(210, 253);
			this->lblCS21->Name = L"lblCS21";
			this->lblCS21->Size = System::Drawing::Size(25, 16);
			this->lblCS21->TabIndex = 20;
			this->lblCS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS20
			// 
			this->lblCS20->ForeColor = System::Drawing::Color::Lime;
			this->lblCS20->Location = System::Drawing::Point(301, 213);
			this->lblCS20->Name = L"lblCS20";
			this->lblCS20->Size = System::Drawing::Size(25, 16);
			this->lblCS20->TabIndex = 19;
			this->lblCS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS19
			// 
			this->lblCS19->ForeColor = System::Drawing::Color::Lime;
			this->lblCS19->Location = System::Drawing::Point(254, 213);
			this->lblCS19->Name = L"lblCS19";
			this->lblCS19->Size = System::Drawing::Size(25, 16);
			this->lblCS19->TabIndex = 18;
			this->lblCS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS18
			// 
			this->lblCS18->ForeColor = System::Drawing::Color::Lime;
			this->lblCS18->Location = System::Drawing::Point(210, 213);
			this->lblCS18->Name = L"lblCS18";
			this->lblCS18->Size = System::Drawing::Size(25, 16);
			this->lblCS18->TabIndex = 17;
			this->lblCS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS17
			// 
			this->lblCS17->ForeColor = System::Drawing::Color::Lime;
			this->lblCS17->Location = System::Drawing::Point(254, 173);
			this->lblCS17->Name = L"lblCS17";
			this->lblCS17->Size = System::Drawing::Size(25, 16);
			this->lblCS17->TabIndex = 16;
			this->lblCS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS16
			// 
			this->lblCS16->ForeColor = System::Drawing::Color::Lime;
			this->lblCS16->Location = System::Drawing::Point(299, 132);
			this->lblCS16->Name = L"lblCS16";
			this->lblCS16->Size = System::Drawing::Size(25, 16);
			this->lblCS16->TabIndex = 15;
			this->lblCS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS15
			// 
			this->lblCS15->ForeColor = System::Drawing::Color::Lime;
			this->lblCS15->Location = System::Drawing::Point(254, 132);
			this->lblCS15->Name = L"lblCS15";
			this->lblCS15->Size = System::Drawing::Size(25, 16);
			this->lblCS15->TabIndex = 14;
			this->lblCS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS14
			// 
			this->lblCS14->ForeColor = System::Drawing::Color::Lime;
			this->lblCS14->Location = System::Drawing::Point(208, 132);
			this->lblCS14->Name = L"lblCS14";
			this->lblCS14->Size = System::Drawing::Size(25, 16);
			this->lblCS14->TabIndex = 13;
			this->lblCS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS13
			// 
			this->lblCS13->ForeColor = System::Drawing::Color::Lime;
			this->lblCS13->Location = System::Drawing::Point(299, 93);
			this->lblCS13->Name = L"lblCS13";
			this->lblCS13->Size = System::Drawing::Size(25, 16);
			this->lblCS13->TabIndex = 12;
			this->lblCS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS12
			// 
			this->lblCS12->ForeColor = System::Drawing::Color::Lime;
			this->lblCS12->Location = System::Drawing::Point(208, 93);
			this->lblCS12->Name = L"lblCS12";
			this->lblCS12->Size = System::Drawing::Size(25, 16);
			this->lblCS12->TabIndex = 11;
			this->lblCS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS11
			// 
			this->lblCS11->ForeColor = System::Drawing::Color::Lime;
			this->lblCS11->Location = System::Drawing::Point(80, 296);
			this->lblCS11->Name = L"lblCS11";
			this->lblCS11->Size = System::Drawing::Size(25, 16);
			this->lblCS11->TabIndex = 10;
			this->lblCS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS10
			// 
			this->lblCS10->ForeColor = System::Drawing::Color::Lime;
			this->lblCS10->Location = System::Drawing::Point(126, 253);
			this->lblCS10->Name = L"lblCS10";
			this->lblCS10->Size = System::Drawing::Size(25, 16);
			this->lblCS10->TabIndex = 9;
			this->lblCS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS9
			// 
			this->lblCS9->ForeColor = System::Drawing::Color::Lime;
			this->lblCS9->Location = System::Drawing::Point(35, 253);
			this->lblCS9->Name = L"lblCS9";
			this->lblCS9->Size = System::Drawing::Size(25, 16);
			this->lblCS9->TabIndex = 8;
			this->lblCS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS8
			// 
			this->lblCS8->ForeColor = System::Drawing::Color::Lime;
			this->lblCS8->Location = System::Drawing::Point(126, 213);
			this->lblCS8->Name = L"lblCS8";
			this->lblCS8->Size = System::Drawing::Size(25, 16);
			this->lblCS8->TabIndex = 7;
			this->lblCS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS7
			// 
			this->lblCS7->ForeColor = System::Drawing::Color::Lime;
			this->lblCS7->Location = System::Drawing::Point(80, 213);
			this->lblCS7->Name = L"lblCS7";
			this->lblCS7->Size = System::Drawing::Size(25, 16);
			this->lblCS7->TabIndex = 6;
			this->lblCS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS6
			// 
			this->lblCS6->ForeColor = System::Drawing::Color::Lime;
			this->lblCS6->Location = System::Drawing::Point(35, 213);
			this->lblCS6->Name = L"lblCS6";
			this->lblCS6->Size = System::Drawing::Size(25, 16);
			this->lblCS6->TabIndex = 5;
			this->lblCS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS5
			// 
			this->lblCS5->ForeColor = System::Drawing::Color::Lime;
			this->lblCS5->Location = System::Drawing::Point(80, 173);
			this->lblCS5->Name = L"lblCS5";
			this->lblCS5->Size = System::Drawing::Size(25, 16);
			this->lblCS5->TabIndex = 4;
			this->lblCS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS4
			// 
			this->lblCS4->ForeColor = System::Drawing::Color::Lime;
			this->lblCS4->Location = System::Drawing::Point(124, 132);
			this->lblCS4->Name = L"lblCS4";
			this->lblCS4->Size = System::Drawing::Size(25, 16);
			this->lblCS4->TabIndex = 3;
			this->lblCS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS3
			// 
			this->lblCS3->ForeColor = System::Drawing::Color::Lime;
			this->lblCS3->Location = System::Drawing::Point(33, 132);
			this->lblCS3->Name = L"lblCS3";
			this->lblCS3->Size = System::Drawing::Size(25, 16);
			this->lblCS3->TabIndex = 2;
			this->lblCS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS2
			// 
			this->lblCS2->ForeColor = System::Drawing::Color::Lime;
			this->lblCS2->Location = System::Drawing::Point(124, 93);
			this->lblCS2->Name = L"lblCS2";
			this->lblCS2->Size = System::Drawing::Size(25, 16);
			this->lblCS2->TabIndex = 1;
			this->lblCS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblCS1
			// 
			this->lblCS1->BackColor = System::Drawing::Color::Transparent;
			this->lblCS1->ForeColor = System::Drawing::Color::Lime;
			this->lblCS1->Location = System::Drawing::Point(35, 93);
			this->lblCS1->Name = L"lblCS1";
			this->lblCS1->Size = System::Drawing::Size(25, 16);
			this->lblCS1->TabIndex = 0;
			this->lblCS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblCS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpWilhelm
			// 
			this->tpWilhelm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpWilhelm.BackgroundImage")));
			this->tpWilhelm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpWilhelm->Controls->Add(this->lblWilClass);
			this->tpWilhelm->Controls->Add(this->lblWS33);
			this->tpWilhelm->Controls->Add(this->lblWS32);
			this->tpWilhelm->Controls->Add(this->lblWS31);
			this->tpWilhelm->Controls->Add(this->lblWS30);
			this->tpWilhelm->Controls->Add(this->lblWS29);
			this->tpWilhelm->Controls->Add(this->lblWS28);
			this->tpWilhelm->Controls->Add(this->lblWS27);
			this->tpWilhelm->Controls->Add(this->lblWS26);
			this->tpWilhelm->Controls->Add(this->lblWS25);
			this->tpWilhelm->Controls->Add(this->lblWS24);
			this->tpWilhelm->Controls->Add(this->lblWS23);
			this->tpWilhelm->Controls->Add(this->lblWS22);
			this->tpWilhelm->Controls->Add(this->lblWS21);
			this->tpWilhelm->Controls->Add(this->lblWS20);
			this->tpWilhelm->Controls->Add(this->lblWS19);
			this->tpWilhelm->Controls->Add(this->lblWS18);
			this->tpWilhelm->Controls->Add(this->lblWS17);
			this->tpWilhelm->Controls->Add(this->lblWS16);
			this->tpWilhelm->Controls->Add(this->lblWS15);
			this->tpWilhelm->Controls->Add(this->lblWS14);
			this->tpWilhelm->Controls->Add(this->lblWS13);
			this->tpWilhelm->Controls->Add(this->lblWS12);
			this->tpWilhelm->Controls->Add(this->lblWS11);
			this->tpWilhelm->Controls->Add(this->lblWS10);
			this->tpWilhelm->Controls->Add(this->lblWS9);
			this->tpWilhelm->Controls->Add(this->lblWS8);
			this->tpWilhelm->Controls->Add(this->lblWS7);
			this->tpWilhelm->Controls->Add(this->lblWS6);
			this->tpWilhelm->Controls->Add(this->lblWS5);
			this->tpWilhelm->Controls->Add(this->lblWS4);
			this->tpWilhelm->Controls->Add(this->lblWS3);
			this->tpWilhelm->Controls->Add(this->lblWS2);
			this->tpWilhelm->Controls->Add(this->lblWS1);
			this->tpWilhelm->Location = System::Drawing::Point(4, 22);
			this->tpWilhelm->Name = L"tpWilhelm";
			this->tpWilhelm->Padding = System::Windows::Forms::Padding(3);
			this->tpWilhelm->Size = System::Drawing::Size(516, 322);
			this->tpWilhelm->TabIndex = 1;
			this->tpWilhelm->Text = L"Wilhelm";
			this->tpWilhelm->UseVisualStyleBackColor = true;
			// 
			// lblWilClass
			// 
			this->lblWilClass->BackColor = System::Drawing::Color::Transparent;
			this->lblWilClass->ForeColor = System::Drawing::Color::Lime;
			this->lblWilClass->Location = System::Drawing::Point(319, 43);
			this->lblWilClass->Name = L"lblWilClass";
			this->lblWilClass->Size = System::Drawing::Size(25, 16);
			this->lblWilClass->TabIndex = 39;
			this->lblWilClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblWS33
			// 
			this->lblWS33->ForeColor = System::Drawing::Color::Lime;
			this->lblWS33->Location = System::Drawing::Point(427, 290);
			this->lblWS33->Name = L"lblWS33";
			this->lblWS33->Size = System::Drawing::Size(25, 16);
			this->lblWS33->TabIndex = 32;
			this->lblWS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS32
			// 
			this->lblWS32->ForeColor = System::Drawing::Color::Lime;
			this->lblWS32->Location = System::Drawing::Point(471, 250);
			this->lblWS32->Name = L"lblWS32";
			this->lblWS32->Size = System::Drawing::Size(25, 16);
			this->lblWS32->TabIndex = 31;
			this->lblWS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS31
			// 
			this->lblWS31->ForeColor = System::Drawing::Color::Lime;
			this->lblWS31->Location = System::Drawing::Point(380, 250);
			this->lblWS31->Name = L"lblWS31";
			this->lblWS31->Size = System::Drawing::Size(25, 16);
			this->lblWS31->TabIndex = 30;
			this->lblWS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS30
			// 
			this->lblWS30->ForeColor = System::Drawing::Color::Lime;
			this->lblWS30->Location = System::Drawing::Point(471, 211);
			this->lblWS30->Name = L"lblWS30";
			this->lblWS30->Size = System::Drawing::Size(25, 16);
			this->lblWS30->TabIndex = 29;
			this->lblWS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS29
			// 
			this->lblWS29->ForeColor = System::Drawing::Color::Lime;
			this->lblWS29->Location = System::Drawing::Point(427, 211);
			this->lblWS29->Name = L"lblWS29";
			this->lblWS29->Size = System::Drawing::Size(25, 16);
			this->lblWS29->TabIndex = 28;
			this->lblWS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS28
			// 
			this->lblWS28->ForeColor = System::Drawing::Color::Lime;
			this->lblWS28->Location = System::Drawing::Point(380, 211);
			this->lblWS28->Name = L"lblWS28";
			this->lblWS28->Size = System::Drawing::Size(25, 16);
			this->lblWS28->TabIndex = 27;
			this->lblWS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS27
			// 
			this->lblWS27->ForeColor = System::Drawing::Color::Lime;
			this->lblWS27->Location = System::Drawing::Point(427, 171);
			this->lblWS27->Name = L"lblWS27";
			this->lblWS27->Size = System::Drawing::Size(25, 16);
			this->lblWS27->TabIndex = 26;
			this->lblWS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS26
			// 
			this->lblWS26->ForeColor = System::Drawing::Color::Lime;
			this->lblWS26->Location = System::Drawing::Point(471, 132);
			this->lblWS26->Name = L"lblWS26";
			this->lblWS26->Size = System::Drawing::Size(25, 16);
			this->lblWS26->TabIndex = 25;
			this->lblWS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS25
			// 
			this->lblWS25->ForeColor = System::Drawing::Color::Lime;
			this->lblWS25->Location = System::Drawing::Point(380, 132);
			this->lblWS25->Name = L"lblWS25";
			this->lblWS25->Size = System::Drawing::Size(25, 16);
			this->lblWS25->TabIndex = 24;
			this->lblWS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS24
			// 
			this->lblWS24->ForeColor = System::Drawing::Color::Lime;
			this->lblWS24->Location = System::Drawing::Point(471, 93);
			this->lblWS24->Name = L"lblWS24";
			this->lblWS24->Size = System::Drawing::Size(25, 16);
			this->lblWS24->TabIndex = 23;
			this->lblWS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS23
			// 
			this->lblWS23->ForeColor = System::Drawing::Color::Lime;
			this->lblWS23->Location = System::Drawing::Point(380, 93);
			this->lblWS23->Name = L"lblWS23";
			this->lblWS23->Size = System::Drawing::Size(25, 16);
			this->lblWS23->TabIndex = 22;
			this->lblWS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS22
			// 
			this->lblWS22->ForeColor = System::Drawing::Color::Lime;
			this->lblWS22->Location = System::Drawing::Point(252, 290);
			this->lblWS22->Name = L"lblWS22";
			this->lblWS22->Size = System::Drawing::Size(25, 16);
			this->lblWS22->TabIndex = 21;
			this->lblWS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS21
			// 
			this->lblWS21->ForeColor = System::Drawing::Color::Lime;
			this->lblWS21->Location = System::Drawing::Point(299, 250);
			this->lblWS21->Name = L"lblWS21";
			this->lblWS21->Size = System::Drawing::Size(25, 16);
			this->lblWS21->TabIndex = 20;
			this->lblWS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS20
			// 
			this->lblWS20->ForeColor = System::Drawing::Color::Lime;
			this->lblWS20->Location = System::Drawing::Point(206, 250);
			this->lblWS20->Name = L"lblWS20";
			this->lblWS20->Size = System::Drawing::Size(25, 16);
			this->lblWS20->TabIndex = 19;
			this->lblWS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS19
			// 
			this->lblWS19->ForeColor = System::Drawing::Color::Lime;
			this->lblWS19->Location = System::Drawing::Point(299, 211);
			this->lblWS19->Name = L"lblWS19";
			this->lblWS19->Size = System::Drawing::Size(25, 16);
			this->lblWS19->TabIndex = 18;
			this->lblWS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS18
			// 
			this->lblWS18->ForeColor = System::Drawing::Color::Lime;
			this->lblWS18->Location = System::Drawing::Point(252, 211);
			this->lblWS18->Name = L"lblWS18";
			this->lblWS18->Size = System::Drawing::Size(25, 16);
			this->lblWS18->TabIndex = 17;
			this->lblWS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS17
			// 
			this->lblWS17->ForeColor = System::Drawing::Color::Lime;
			this->lblWS17->Location = System::Drawing::Point(206, 211);
			this->lblWS17->Name = L"lblWS17";
			this->lblWS17->Size = System::Drawing::Size(25, 16);
			this->lblWS17->TabIndex = 16;
			this->lblWS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS16
			// 
			this->lblWS16->ForeColor = System::Drawing::Color::Lime;
			this->lblWS16->Location = System::Drawing::Point(252, 171);
			this->lblWS16->Name = L"lblWS16";
			this->lblWS16->Size = System::Drawing::Size(25, 16);
			this->lblWS16->TabIndex = 15;
			this->lblWS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS15
			// 
			this->lblWS15->ForeColor = System::Drawing::Color::Lime;
			this->lblWS15->Location = System::Drawing::Point(299, 132);
			this->lblWS15->Name = L"lblWS15";
			this->lblWS15->Size = System::Drawing::Size(25, 16);
			this->lblWS15->TabIndex = 14;
			this->lblWS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS14
			// 
			this->lblWS14->ForeColor = System::Drawing::Color::Lime;
			this->lblWS14->Location = System::Drawing::Point(206, 132);
			this->lblWS14->Name = L"lblWS14";
			this->lblWS14->Size = System::Drawing::Size(25, 16);
			this->lblWS14->TabIndex = 13;
			this->lblWS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS13
			// 
			this->lblWS13->ForeColor = System::Drawing::Color::Lime;
			this->lblWS13->Location = System::Drawing::Point(299, 93);
			this->lblWS13->Name = L"lblWS13";
			this->lblWS13->Size = System::Drawing::Size(25, 16);
			this->lblWS13->TabIndex = 12;
			this->lblWS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS12
			// 
			this->lblWS12->ForeColor = System::Drawing::Color::Lime;
			this->lblWS12->Location = System::Drawing::Point(206, 93);
			this->lblWS12->Name = L"lblWS12";
			this->lblWS12->Size = System::Drawing::Size(25, 16);
			this->lblWS12->TabIndex = 11;
			this->lblWS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS11
			// 
			this->lblWS11->ForeColor = System::Drawing::Color::Lime;
			this->lblWS11->Location = System::Drawing::Point(78, 290);
			this->lblWS11->Name = L"lblWS11";
			this->lblWS11->Size = System::Drawing::Size(25, 16);
			this->lblWS11->TabIndex = 10;
			this->lblWS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS10
			// 
			this->lblWS10->ForeColor = System::Drawing::Color::Lime;
			this->lblWS10->Location = System::Drawing::Point(122, 250);
			this->lblWS10->Name = L"lblWS10";
			this->lblWS10->Size = System::Drawing::Size(25, 16);
			this->lblWS10->TabIndex = 9;
			this->lblWS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS9
			// 
			this->lblWS9->ForeColor = System::Drawing::Color::Lime;
			this->lblWS9->Location = System::Drawing::Point(32, 250);
			this->lblWS9->Name = L"lblWS9";
			this->lblWS9->Size = System::Drawing::Size(25, 16);
			this->lblWS9->TabIndex = 8;
			this->lblWS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS8
			// 
			this->lblWS8->ForeColor = System::Drawing::Color::Lime;
			this->lblWS8->Location = System::Drawing::Point(122, 211);
			this->lblWS8->Name = L"lblWS8";
			this->lblWS8->Size = System::Drawing::Size(25, 16);
			this->lblWS8->TabIndex = 7;
			this->lblWS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS7
			// 
			this->lblWS7->ForeColor = System::Drawing::Color::Lime;
			this->lblWS7->Location = System::Drawing::Point(78, 211);
			this->lblWS7->Name = L"lblWS7";
			this->lblWS7->Size = System::Drawing::Size(25, 16);
			this->lblWS7->TabIndex = 6;
			this->lblWS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS6
			// 
			this->lblWS6->ForeColor = System::Drawing::Color::Lime;
			this->lblWS6->Location = System::Drawing::Point(32, 211);
			this->lblWS6->Name = L"lblWS6";
			this->lblWS6->Size = System::Drawing::Size(25, 16);
			this->lblWS6->TabIndex = 5;
			this->lblWS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS5
			// 
			this->lblWS5->ForeColor = System::Drawing::Color::Lime;
			this->lblWS5->Location = System::Drawing::Point(78, 171);
			this->lblWS5->Name = L"lblWS5";
			this->lblWS5->Size = System::Drawing::Size(25, 16);
			this->lblWS5->TabIndex = 4;
			this->lblWS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS4
			// 
			this->lblWS4->ForeColor = System::Drawing::Color::Lime;
			this->lblWS4->Location = System::Drawing::Point(122, 132);
			this->lblWS4->Name = L"lblWS4";
			this->lblWS4->Size = System::Drawing::Size(25, 16);
			this->lblWS4->TabIndex = 3;
			this->lblWS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS3
			// 
			this->lblWS3->ForeColor = System::Drawing::Color::Lime;
			this->lblWS3->Location = System::Drawing::Point(32, 132);
			this->lblWS3->Name = L"lblWS3";
			this->lblWS3->Size = System::Drawing::Size(25, 16);
			this->lblWS3->TabIndex = 2;
			this->lblWS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS2
			// 
			this->lblWS2->ForeColor = System::Drawing::Color::Lime;
			this->lblWS2->Location = System::Drawing::Point(122, 93);
			this->lblWS2->Name = L"lblWS2";
			this->lblWS2->Size = System::Drawing::Size(25, 16);
			this->lblWS2->TabIndex = 1;
			this->lblWS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblWS1
			// 
			this->lblWS1->ForeColor = System::Drawing::Color::Lime;
			this->lblWS1->Location = System::Drawing::Point(32, 93);
			this->lblWS1->Name = L"lblWS1";
			this->lblWS1->Size = System::Drawing::Size(25, 16);
			this->lblWS1->TabIndex = 0;
			this->lblWS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblWS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpAthena
			// 
			this->tpAthena->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpAthena.BackgroundImage")));
			this->tpAthena->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpAthena->Controls->Add(this->lblAthClass);
			this->tpAthena->Controls->Add(this->lblAtS34);
			this->tpAthena->Controls->Add(this->lblAtS33);
			this->tpAthena->Controls->Add(this->lblAtS32);
			this->tpAthena->Controls->Add(this->lblAtS31);
			this->tpAthena->Controls->Add(this->lblAtS30);
			this->tpAthena->Controls->Add(this->lblAtS29);
			this->tpAthena->Controls->Add(this->lblAtS27);
			this->tpAthena->Controls->Add(this->lblAtS26);
			this->tpAthena->Controls->Add(this->lblAtS28);
			this->tpAthena->Controls->Add(this->lblAtS25);
			this->tpAthena->Controls->Add(this->lblAtS24);
			this->tpAthena->Controls->Add(this->lblAtS23);
			this->tpAthena->Controls->Add(this->lblAtS22);
			this->tpAthena->Controls->Add(this->lblAtS21);
			this->tpAthena->Controls->Add(this->lblAtS20);
			this->tpAthena->Controls->Add(this->lblAtS19);
			this->tpAthena->Controls->Add(this->lblAtS18);
			this->tpAthena->Controls->Add(this->lblAtS17);
			this->tpAthena->Controls->Add(this->lblAtS16);
			this->tpAthena->Controls->Add(this->lblAtS15);
			this->tpAthena->Controls->Add(this->lblAtS14);
			this->tpAthena->Controls->Add(this->lblAtS13);
			this->tpAthena->Controls->Add(this->lblAtS12);
			this->tpAthena->Controls->Add(this->lblAtS11);
			this->tpAthena->Controls->Add(this->lblAtS10);
			this->tpAthena->Controls->Add(this->lblAtS9);
			this->tpAthena->Controls->Add(this->lblAtS8);
			this->tpAthena->Controls->Add(this->lblAtS7);
			this->tpAthena->Controls->Add(this->lblAtS6);
			this->tpAthena->Controls->Add(this->lblAtS5);
			this->tpAthena->Controls->Add(this->lblAtS4);
			this->tpAthena->Controls->Add(this->lblAtS3);
			this->tpAthena->Controls->Add(this->lblAtS2);
			this->tpAthena->Controls->Add(this->lblAtS1);
			this->tpAthena->Location = System::Drawing::Point(4, 22);
			this->tpAthena->Name = L"tpAthena";
			this->tpAthena->Size = System::Drawing::Size(516, 322);
			this->tpAthena->TabIndex = 2;
			this->tpAthena->Text = L"Athena";
			this->tpAthena->UseVisualStyleBackColor = true;
			// 
			// lblAthClass
			// 
			this->lblAthClass->BackColor = System::Drawing::Color::Transparent;
			this->lblAthClass->ForeColor = System::Drawing::Color::Lime;
			this->lblAthClass->Location = System::Drawing::Point(318, 38);
			this->lblAthClass->Name = L"lblAthClass";
			this->lblAthClass->Size = System::Drawing::Size(25, 16);
			this->lblAthClass->TabIndex = 39;
			this->lblAthClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblAtS34
			// 
			this->lblAtS34->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS34->Location = System::Drawing::Point(424, 292);
			this->lblAtS34->Name = L"lblAtS34";
			this->lblAtS34->Size = System::Drawing::Size(25, 16);
			this->lblAtS34->TabIndex = 33;
			this->lblAtS34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS34->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS33
			// 
			this->lblAtS33->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS33->Location = System::Drawing::Point(469, 251);
			this->lblAtS33->Name = L"lblAtS33";
			this->lblAtS33->Size = System::Drawing::Size(25, 16);
			this->lblAtS33->TabIndex = 32;
			this->lblAtS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS32
			// 
			this->lblAtS32->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS32->Location = System::Drawing::Point(382, 251);
			this->lblAtS32->Name = L"lblAtS32";
			this->lblAtS32->Size = System::Drawing::Size(25, 16);
			this->lblAtS32->TabIndex = 31;
			this->lblAtS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS31
			// 
			this->lblAtS31->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS31->Location = System::Drawing::Point(469, 211);
			this->lblAtS31->Name = L"lblAtS31";
			this->lblAtS31->Size = System::Drawing::Size(25, 16);
			this->lblAtS31->TabIndex = 30;
			this->lblAtS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS30
			// 
			this->lblAtS30->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS30->Location = System::Drawing::Point(424, 211);
			this->lblAtS30->Name = L"lblAtS30";
			this->lblAtS30->Size = System::Drawing::Size(25, 16);
			this->lblAtS30->TabIndex = 29;
			this->lblAtS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS29
			// 
			this->lblAtS29->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS29->Location = System::Drawing::Point(382, 211);
			this->lblAtS29->Name = L"lblAtS29";
			this->lblAtS29->Size = System::Drawing::Size(25, 16);
			this->lblAtS29->TabIndex = 28;
			this->lblAtS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS27
			// 
			this->lblAtS27->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS27->Location = System::Drawing::Point(424, 170);
			this->lblAtS27->Name = L"lblAtS27";
			this->lblAtS27->Size = System::Drawing::Size(25, 16);
			this->lblAtS27->TabIndex = 26;
			this->lblAtS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS26
			// 
			this->lblAtS26->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS26->Location = System::Drawing::Point(469, 129);
			this->lblAtS26->Name = L"lblAtS26";
			this->lblAtS26->Size = System::Drawing::Size(25, 16);
			this->lblAtS26->TabIndex = 25;
			this->lblAtS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS28
			// 
			this->lblAtS28->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS28->Location = System::Drawing::Point(469, 170);
			this->lblAtS28->Name = L"lblAtS28";
			this->lblAtS28->Size = System::Drawing::Size(25, 16);
			this->lblAtS28->TabIndex = 27;
			this->lblAtS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS25
			// 
			this->lblAtS25->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS25->Location = System::Drawing::Point(380, 129);
			this->lblAtS25->Name = L"lblAtS25";
			this->lblAtS25->Size = System::Drawing::Size(25, 16);
			this->lblAtS25->TabIndex = 24;
			this->lblAtS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS24
			// 
			this->lblAtS24->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS24->Location = System::Drawing::Point(469, 90);
			this->lblAtS24->Name = L"lblAtS24";
			this->lblAtS24->Size = System::Drawing::Size(25, 16);
			this->lblAtS24->TabIndex = 23;
			this->lblAtS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS23
			// 
			this->lblAtS23->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS23->Location = System::Drawing::Point(380, 90);
			this->lblAtS23->Name = L"lblAtS23";
			this->lblAtS23->Size = System::Drawing::Size(25, 16);
			this->lblAtS23->TabIndex = 22;
			this->lblAtS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS22
			// 
			this->lblAtS22->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS22->Location = System::Drawing::Point(252, 292);
			this->lblAtS22->Name = L"lblAtS22";
			this->lblAtS22->Size = System::Drawing::Size(25, 16);
			this->lblAtS22->TabIndex = 21;
			this->lblAtS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS21
			// 
			this->lblAtS21->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS21->Location = System::Drawing::Point(299, 251);
			this->lblAtS21->Name = L"lblAtS21";
			this->lblAtS21->Size = System::Drawing::Size(25, 16);
			this->lblAtS21->TabIndex = 20;
			this->lblAtS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS20
			// 
			this->lblAtS20->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS20->Location = System::Drawing::Point(208, 251);
			this->lblAtS20->Name = L"lblAtS20";
			this->lblAtS20->Size = System::Drawing::Size(25, 16);
			this->lblAtS20->TabIndex = 19;
			this->lblAtS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS19
			// 
			this->lblAtS19->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS19->Location = System::Drawing::Point(299, 211);
			this->lblAtS19->Name = L"lblAtS19";
			this->lblAtS19->Size = System::Drawing::Size(25, 16);
			this->lblAtS19->TabIndex = 18;
			this->lblAtS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS18
			// 
			this->lblAtS18->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS18->Location = System::Drawing::Point(252, 211);
			this->lblAtS18->Name = L"lblAtS18";
			this->lblAtS18->Size = System::Drawing::Size(25, 16);
			this->lblAtS18->TabIndex = 17;
			this->lblAtS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS17
			// 
			this->lblAtS17->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS17->Location = System::Drawing::Point(208, 211);
			this->lblAtS17->Name = L"lblAtS17";
			this->lblAtS17->Size = System::Drawing::Size(25, 16);
			this->lblAtS17->TabIndex = 16;
			this->lblAtS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS16
			// 
			this->lblAtS16->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS16->Location = System::Drawing::Point(252, 170);
			this->lblAtS16->Name = L"lblAtS16";
			this->lblAtS16->Size = System::Drawing::Size(25, 16);
			this->lblAtS16->TabIndex = 15;
			this->lblAtS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS15
			// 
			this->lblAtS15->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS15->Location = System::Drawing::Point(297, 129);
			this->lblAtS15->Name = L"lblAtS15";
			this->lblAtS15->Size = System::Drawing::Size(25, 16);
			this->lblAtS15->TabIndex = 14;
			this->lblAtS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS14
			// 
			this->lblAtS14->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS14->Location = System::Drawing::Point(206, 129);
			this->lblAtS14->Name = L"lblAtS14";
			this->lblAtS14->Size = System::Drawing::Size(25, 16);
			this->lblAtS14->TabIndex = 13;
			this->lblAtS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS13
			// 
			this->lblAtS13->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS13->Location = System::Drawing::Point(297, 90);
			this->lblAtS13->Name = L"lblAtS13";
			this->lblAtS13->Size = System::Drawing::Size(25, 16);
			this->lblAtS13->TabIndex = 12;
			this->lblAtS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS12
			// 
			this->lblAtS12->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS12->Location = System::Drawing::Point(206, 90);
			this->lblAtS12->Name = L"lblAtS12";
			this->lblAtS12->Size = System::Drawing::Size(25, 16);
			this->lblAtS12->TabIndex = 11;
			this->lblAtS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS11
			// 
			this->lblAtS11->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS11->Location = System::Drawing::Point(78, 292);
			this->lblAtS11->Name = L"lblAtS11";
			this->lblAtS11->Size = System::Drawing::Size(25, 16);
			this->lblAtS11->TabIndex = 10;
			this->lblAtS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS10
			// 
			this->lblAtS10->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS10->Location = System::Drawing::Point(124, 251);
			this->lblAtS10->Name = L"lblAtS10";
			this->lblAtS10->Size = System::Drawing::Size(25, 16);
			this->lblAtS10->TabIndex = 9;
			this->lblAtS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS9
			// 
			this->lblAtS9->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS9->Location = System::Drawing::Point(33, 251);
			this->lblAtS9->Name = L"lblAtS9";
			this->lblAtS9->Size = System::Drawing::Size(25, 16);
			this->lblAtS9->TabIndex = 8;
			this->lblAtS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS8
			// 
			this->lblAtS8->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS8->Location = System::Drawing::Point(124, 211);
			this->lblAtS8->Name = L"lblAtS8";
			this->lblAtS8->Size = System::Drawing::Size(25, 16);
			this->lblAtS8->TabIndex = 7;
			this->lblAtS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS7
			// 
			this->lblAtS7->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS7->Location = System::Drawing::Point(78, 211);
			this->lblAtS7->Name = L"lblAtS7";
			this->lblAtS7->Size = System::Drawing::Size(25, 16);
			this->lblAtS7->TabIndex = 6;
			this->lblAtS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS6
			// 
			this->lblAtS6->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS6->Location = System::Drawing::Point(33, 211);
			this->lblAtS6->Name = L"lblAtS6";
			this->lblAtS6->Size = System::Drawing::Size(25, 16);
			this->lblAtS6->TabIndex = 5;
			this->lblAtS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS5
			// 
			this->lblAtS5->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS5->Location = System::Drawing::Point(78, 170);
			this->lblAtS5->Name = L"lblAtS5";
			this->lblAtS5->Size = System::Drawing::Size(25, 16);
			this->lblAtS5->TabIndex = 4;
			this->lblAtS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS4
			// 
			this->lblAtS4->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS4->Location = System::Drawing::Point(122, 129);
			this->lblAtS4->Name = L"lblAtS4";
			this->lblAtS4->Size = System::Drawing::Size(25, 16);
			this->lblAtS4->TabIndex = 3;
			this->lblAtS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS3
			// 
			this->lblAtS3->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS3->Location = System::Drawing::Point(31, 129);
			this->lblAtS3->Name = L"lblAtS3";
			this->lblAtS3->Size = System::Drawing::Size(25, 16);
			this->lblAtS3->TabIndex = 2;
			this->lblAtS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS2
			// 
			this->lblAtS2->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS2->Location = System::Drawing::Point(122, 90);
			this->lblAtS2->Name = L"lblAtS2";
			this->lblAtS2->Size = System::Drawing::Size(25, 16);
			this->lblAtS2->TabIndex = 1;
			this->lblAtS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAtS1
			// 
			this->lblAtS1->BackColor = System::Drawing::Color::Transparent;
			this->lblAtS1->ForeColor = System::Drawing::Color::Lime;
			this->lblAtS1->Location = System::Drawing::Point(33, 90);
			this->lblAtS1->Name = L"lblAtS1";
			this->lblAtS1->Size = System::Drawing::Size(25, 16);
			this->lblAtS1->TabIndex = 0;
			this->lblAtS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAtS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpNisha
			// 
			this->tpNisha->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpNisha.BackgroundImage")));
			this->tpNisha->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpNisha->Controls->Add(this->lblNClass);
			this->tpNisha->Controls->Add(this->lblNS34);
			this->tpNisha->Controls->Add(this->lblNS33);
			this->tpNisha->Controls->Add(this->lblNS32);
			this->tpNisha->Controls->Add(this->lblNS31);
			this->tpNisha->Controls->Add(this->lblNS30);
			this->tpNisha->Controls->Add(this->lblNS29);
			this->tpNisha->Controls->Add(this->lblNS28);
			this->tpNisha->Controls->Add(this->lblNS27);
			this->tpNisha->Controls->Add(this->lblNS4);
			this->tpNisha->Controls->Add(this->lblNS26);
			this->tpNisha->Controls->Add(this->lblNS25);
			this->tpNisha->Controls->Add(this->lblNS24);
			this->tpNisha->Controls->Add(this->lblNS23);
			this->tpNisha->Controls->Add(this->lblNS22);
			this->tpNisha->Controls->Add(this->lblNS21);
			this->tpNisha->Controls->Add(this->lblNS20);
			this->tpNisha->Controls->Add(this->lblNS19);
			this->tpNisha->Controls->Add(this->lblNS18);
			this->tpNisha->Controls->Add(this->lblNS17);
			this->tpNisha->Controls->Add(this->lblNS16);
			this->tpNisha->Controls->Add(this->lblNS15);
			this->tpNisha->Controls->Add(this->lblNS14);
			this->tpNisha->Controls->Add(this->lblNS13);
			this->tpNisha->Controls->Add(this->lblNS12);
			this->tpNisha->Controls->Add(this->lblNS11);
			this->tpNisha->Controls->Add(this->lblNS10);
			this->tpNisha->Controls->Add(this->lblNS9);
			this->tpNisha->Controls->Add(this->lblNS8);
			this->tpNisha->Controls->Add(this->lblNS7);
			this->tpNisha->Controls->Add(this->lblNS6);
			this->tpNisha->Controls->Add(this->lblNS5);
			this->tpNisha->Controls->Add(this->lblNS3);
			this->tpNisha->Controls->Add(this->lblNS2);
			this->tpNisha->Controls->Add(this->lblNS1);
			this->tpNisha->Location = System::Drawing::Point(4, 22);
			this->tpNisha->Name = L"tpNisha";
			this->tpNisha->Size = System::Drawing::Size(516, 322);
			this->tpNisha->TabIndex = 3;
			this->tpNisha->Text = L"Nisha";
			this->tpNisha->UseVisualStyleBackColor = true;
			// 
			// lblNClass
			// 
			this->lblNClass->BackColor = System::Drawing::Color::Transparent;
			this->lblNClass->ForeColor = System::Drawing::Color::Lime;
			this->lblNClass->Location = System::Drawing::Point(317, 40);
			this->lblNClass->Name = L"lblNClass";
			this->lblNClass->Size = System::Drawing::Size(25, 16);
			this->lblNClass->TabIndex = 39;
			this->lblNClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblNS34
			// 
			this->lblNS34->ForeColor = System::Drawing::Color::Lime;
			this->lblNS34->Location = System::Drawing::Point(423, 294);
			this->lblNS34->Name = L"lblNS34";
			this->lblNS34->Size = System::Drawing::Size(25, 16);
			this->lblNS34->TabIndex = 33;
			this->lblNS34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS34->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS33
			// 
			this->lblNS33->ForeColor = System::Drawing::Color::Lime;
			this->lblNS33->Location = System::Drawing::Point(468, 253);
			this->lblNS33->Name = L"lblNS33";
			this->lblNS33->Size = System::Drawing::Size(25, 16);
			this->lblNS33->TabIndex = 32;
			this->lblNS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS32
			// 
			this->lblNS32->ForeColor = System::Drawing::Color::Lime;
			this->lblNS32->Location = System::Drawing::Point(381, 253);
			this->lblNS32->Name = L"lblNS32";
			this->lblNS32->Size = System::Drawing::Size(25, 16);
			this->lblNS32->TabIndex = 31;
			this->lblNS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS31
			// 
			this->lblNS31->ForeColor = System::Drawing::Color::Lime;
			this->lblNS31->Location = System::Drawing::Point(468, 213);
			this->lblNS31->Name = L"lblNS31";
			this->lblNS31->Size = System::Drawing::Size(25, 16);
			this->lblNS31->TabIndex = 30;
			this->lblNS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS30
			// 
			this->lblNS30->ForeColor = System::Drawing::Color::Lime;
			this->lblNS30->Location = System::Drawing::Point(423, 213);
			this->lblNS30->Name = L"lblNS30";
			this->lblNS30->Size = System::Drawing::Size(25, 16);
			this->lblNS30->TabIndex = 29;
			this->lblNS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS29
			// 
			this->lblNS29->ForeColor = System::Drawing::Color::Lime;
			this->lblNS29->Location = System::Drawing::Point(381, 213);
			this->lblNS29->Name = L"lblNS29";
			this->lblNS29->Size = System::Drawing::Size(25, 16);
			this->lblNS29->TabIndex = 28;
			this->lblNS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS28
			// 
			this->lblNS28->ForeColor = System::Drawing::Color::Lime;
			this->lblNS28->Location = System::Drawing::Point(423, 172);
			this->lblNS28->Name = L"lblNS28";
			this->lblNS28->Size = System::Drawing::Size(25, 16);
			this->lblNS28->TabIndex = 27;
			this->lblNS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS27
			// 
			this->lblNS27->ForeColor = System::Drawing::Color::Lime;
			this->lblNS27->Location = System::Drawing::Point(468, 131);
			this->lblNS27->Name = L"lblNS27";
			this->lblNS27->Size = System::Drawing::Size(25, 16);
			this->lblNS27->TabIndex = 26;
			this->lblNS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS4
			// 
			this->lblNS4->ForeColor = System::Drawing::Color::Lime;
			this->lblNS4->Location = System::Drawing::Point(77, 131);
			this->lblNS4->Name = L"lblNS4";
			this->lblNS4->Size = System::Drawing::Size(25, 16);
			this->lblNS4->TabIndex = 3;
			this->lblNS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS26
			// 
			this->lblNS26->ForeColor = System::Drawing::Color::Lime;
			this->lblNS26->Location = System::Drawing::Point(379, 131);
			this->lblNS26->Name = L"lblNS26";
			this->lblNS26->Size = System::Drawing::Size(25, 16);
			this->lblNS26->TabIndex = 25;
			this->lblNS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS25
			// 
			this->lblNS25->ForeColor = System::Drawing::Color::Lime;
			this->lblNS25->Location = System::Drawing::Point(468, 92);
			this->lblNS25->Name = L"lblNS25";
			this->lblNS25->Size = System::Drawing::Size(25, 16);
			this->lblNS25->TabIndex = 24;
			this->lblNS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS24
			// 
			this->lblNS24->ForeColor = System::Drawing::Color::Lime;
			this->lblNS24->Location = System::Drawing::Point(379, 92);
			this->lblNS24->Name = L"lblNS24";
			this->lblNS24->Size = System::Drawing::Size(25, 16);
			this->lblNS24->TabIndex = 23;
			this->lblNS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS23
			// 
			this->lblNS23->ForeColor = System::Drawing::Color::Lime;
			this->lblNS23->Location = System::Drawing::Point(251, 294);
			this->lblNS23->Name = L"lblNS23";
			this->lblNS23->Size = System::Drawing::Size(25, 16);
			this->lblNS23->TabIndex = 22;
			this->lblNS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS22
			// 
			this->lblNS22->ForeColor = System::Drawing::Color::Lime;
			this->lblNS22->Location = System::Drawing::Point(298, 253);
			this->lblNS22->Name = L"lblNS22";
			this->lblNS22->Size = System::Drawing::Size(25, 16);
			this->lblNS22->TabIndex = 21;
			this->lblNS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS21
			// 
			this->lblNS21->ForeColor = System::Drawing::Color::Lime;
			this->lblNS21->Location = System::Drawing::Point(207, 253);
			this->lblNS21->Name = L"lblNS21";
			this->lblNS21->Size = System::Drawing::Size(25, 16);
			this->lblNS21->TabIndex = 20;
			this->lblNS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS20
			// 
			this->lblNS20->ForeColor = System::Drawing::Color::Lime;
			this->lblNS20->Location = System::Drawing::Point(298, 213);
			this->lblNS20->Name = L"lblNS20";
			this->lblNS20->Size = System::Drawing::Size(25, 16);
			this->lblNS20->TabIndex = 19;
			this->lblNS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS19
			// 
			this->lblNS19->ForeColor = System::Drawing::Color::Lime;
			this->lblNS19->Location = System::Drawing::Point(251, 213);
			this->lblNS19->Name = L"lblNS19";
			this->lblNS19->Size = System::Drawing::Size(25, 16);
			this->lblNS19->TabIndex = 18;
			this->lblNS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS18
			// 
			this->lblNS18->ForeColor = System::Drawing::Color::Lime;
			this->lblNS18->Location = System::Drawing::Point(207, 213);
			this->lblNS18->Name = L"lblNS18";
			this->lblNS18->Size = System::Drawing::Size(25, 16);
			this->lblNS18->TabIndex = 17;
			this->lblNS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS17
			// 
			this->lblNS17->ForeColor = System::Drawing::Color::Lime;
			this->lblNS17->Location = System::Drawing::Point(251, 172);
			this->lblNS17->Name = L"lblNS17";
			this->lblNS17->Size = System::Drawing::Size(25, 16);
			this->lblNS17->TabIndex = 16;
			this->lblNS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS16
			// 
			this->lblNS16->ForeColor = System::Drawing::Color::Lime;
			this->lblNS16->Location = System::Drawing::Point(296, 131);
			this->lblNS16->Name = L"lblNS16";
			this->lblNS16->Size = System::Drawing::Size(25, 16);
			this->lblNS16->TabIndex = 15;
			this->lblNS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS15
			// 
			this->lblNS15->ForeColor = System::Drawing::Color::Lime;
			this->lblNS15->Location = System::Drawing::Point(205, 131);
			this->lblNS15->Name = L"lblNS15";
			this->lblNS15->Size = System::Drawing::Size(25, 16);
			this->lblNS15->TabIndex = 14;
			this->lblNS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS14
			// 
			this->lblNS14->ForeColor = System::Drawing::Color::Lime;
			this->lblNS14->Location = System::Drawing::Point(296, 92);
			this->lblNS14->Name = L"lblNS14";
			this->lblNS14->Size = System::Drawing::Size(25, 16);
			this->lblNS14->TabIndex = 13;
			this->lblNS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS13
			// 
			this->lblNS13->ForeColor = System::Drawing::Color::Lime;
			this->lblNS13->Location = System::Drawing::Point(205, 92);
			this->lblNS13->Name = L"lblNS13";
			this->lblNS13->Size = System::Drawing::Size(25, 16);
			this->lblNS13->TabIndex = 12;
			this->lblNS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS12
			// 
			this->lblNS12->ForeColor = System::Drawing::Color::Lime;
			this->lblNS12->Location = System::Drawing::Point(77, 294);
			this->lblNS12->Name = L"lblNS12";
			this->lblNS12->Size = System::Drawing::Size(25, 16);
			this->lblNS12->TabIndex = 11;
			this->lblNS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS11
			// 
			this->lblNS11->ForeColor = System::Drawing::Color::Lime;
			this->lblNS11->Location = System::Drawing::Point(123, 253);
			this->lblNS11->Name = L"lblNS11";
			this->lblNS11->Size = System::Drawing::Size(25, 16);
			this->lblNS11->TabIndex = 10;
			this->lblNS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS10
			// 
			this->lblNS10->ForeColor = System::Drawing::Color::Lime;
			this->lblNS10->Location = System::Drawing::Point(32, 253);
			this->lblNS10->Name = L"lblNS10";
			this->lblNS10->Size = System::Drawing::Size(25, 16);
			this->lblNS10->TabIndex = 9;
			this->lblNS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS9
			// 
			this->lblNS9->ForeColor = System::Drawing::Color::Lime;
			this->lblNS9->Location = System::Drawing::Point(123, 213);
			this->lblNS9->Name = L"lblNS9";
			this->lblNS9->Size = System::Drawing::Size(25, 16);
			this->lblNS9->TabIndex = 8;
			this->lblNS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS8
			// 
			this->lblNS8->ForeColor = System::Drawing::Color::Lime;
			this->lblNS8->Location = System::Drawing::Point(77, 213);
			this->lblNS8->Name = L"lblNS8";
			this->lblNS8->Size = System::Drawing::Size(25, 16);
			this->lblNS8->TabIndex = 7;
			this->lblNS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS7
			// 
			this->lblNS7->ForeColor = System::Drawing::Color::Lime;
			this->lblNS7->Location = System::Drawing::Point(32, 213);
			this->lblNS7->Name = L"lblNS7";
			this->lblNS7->Size = System::Drawing::Size(25, 16);
			this->lblNS7->TabIndex = 6;
			this->lblNS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS6
			// 
			this->lblNS6->ForeColor = System::Drawing::Color::Lime;
			this->lblNS6->Location = System::Drawing::Point(77, 172);
			this->lblNS6->Name = L"lblNS6";
			this->lblNS6->Size = System::Drawing::Size(25, 16);
			this->lblNS6->TabIndex = 5;
			this->lblNS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS5
			// 
			this->lblNS5->ForeColor = System::Drawing::Color::Lime;
			this->lblNS5->Location = System::Drawing::Point(121, 131);
			this->lblNS5->Name = L"lblNS5";
			this->lblNS5->Size = System::Drawing::Size(25, 16);
			this->lblNS5->TabIndex = 4;
			this->lblNS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS3
			// 
			this->lblNS3->ForeColor = System::Drawing::Color::Lime;
			this->lblNS3->Location = System::Drawing::Point(30, 131);
			this->lblNS3->Name = L"lblNS3";
			this->lblNS3->Size = System::Drawing::Size(25, 16);
			this->lblNS3->TabIndex = 2;
			this->lblNS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS2
			// 
			this->lblNS2->ForeColor = System::Drawing::Color::Lime;
			this->lblNS2->Location = System::Drawing::Point(121, 92);
			this->lblNS2->Name = L"lblNS2";
			this->lblNS2->Size = System::Drawing::Size(25, 16);
			this->lblNS2->TabIndex = 1;
			this->lblNS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblNS1
			// 
			this->lblNS1->BackColor = System::Drawing::Color::Transparent;
			this->lblNS1->ForeColor = System::Drawing::Color::Lime;
			this->lblNS1->Location = System::Drawing::Point(32, 92);
			this->lblNS1->Name = L"lblNS1";
			this->lblNS1->Size = System::Drawing::Size(25, 16);
			this->lblNS1->TabIndex = 0;
			this->lblNS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblNS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpJack
			// 
			this->tpJack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpJack.BackgroundImage")));
			this->tpJack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpJack->Controls->Add(this->lblJS24);
			this->tpJack->Controls->Add(this->lblJS17);
			this->tpJack->Controls->Add(this->lblJS7);
			this->tpJack->Controls->Add(this->lblJS4);
			this->tpJack->Controls->Add(this->lblJClass);
			this->tpJack->Controls->Add(this->lblJS38);
			this->tpJack->Controls->Add(this->lblJS37);
			this->tpJack->Controls->Add(this->lblJS35);
			this->tpJack->Controls->Add(this->lblJS34);
			this->tpJack->Controls->Add(this->lblJS33);
			this->tpJack->Controls->Add(this->lblJS32);
			this->tpJack->Controls->Add(this->lblJS31);
			this->tpJack->Controls->Add(this->lblJS30);
			this->tpJack->Controls->Add(this->lblJS36);
			this->tpJack->Controls->Add(this->lblJS29);
			this->tpJack->Controls->Add(this->lblJS28);
			this->tpJack->Controls->Add(this->lblJS27);
			this->tpJack->Controls->Add(this->lblJS26);
			this->tpJack->Controls->Add(this->lblJS25);
			this->tpJack->Controls->Add(this->lblJS23);
			this->tpJack->Controls->Add(this->lblJS22);
			this->tpJack->Controls->Add(this->lblJS21);
			this->tpJack->Controls->Add(this->lblJS20);
			this->tpJack->Controls->Add(this->lblJS19);
			this->tpJack->Controls->Add(this->lblJS18);
			this->tpJack->Controls->Add(this->lblJS16);
			this->tpJack->Controls->Add(this->lblJS15);
			this->tpJack->Controls->Add(this->lblJS14);
			this->tpJack->Controls->Add(this->lblJS13);
			this->tpJack->Controls->Add(this->lblJS12);
			this->tpJack->Controls->Add(this->lblJS11);
			this->tpJack->Controls->Add(this->lblJS10);
			this->tpJack->Controls->Add(this->lblJS9);
			this->tpJack->Controls->Add(this->lblJS8);
			this->tpJack->Controls->Add(this->lblJS6);
			this->tpJack->Controls->Add(this->lblJS5);
			this->tpJack->Controls->Add(this->lblJS3);
			this->tpJack->Controls->Add(this->lblJS2);
			this->tpJack->Controls->Add(this->lblJS1);
			this->tpJack->Location = System::Drawing::Point(4, 22);
			this->tpJack->Name = L"tpJack";
			this->tpJack->Size = System::Drawing::Size(516, 322);
			this->tpJack->TabIndex = 4;
			this->tpJack->Text = L"Jack";
			this->tpJack->UseVisualStyleBackColor = true;
			// 
			// lblJS24
			// 
			this->lblJS24->BackColor = System::Drawing::Color::Transparent;
			this->lblJS24->ForeColor = System::Drawing::Color::Lime;
			this->lblJS24->Location = System::Drawing::Point(254, 251);
			this->lblJS24->Name = L"lblJS24";
			this->lblJS24->Size = System::Drawing::Size(25, 16);
			this->lblJS24->TabIndex = 23;
			this->lblJS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS17
			// 
			this->lblJS17->BackColor = System::Drawing::Color::Transparent;
			this->lblJS17->ForeColor = System::Drawing::Color::Lime;
			this->lblJS17->Location = System::Drawing::Point(254, 129);
			this->lblJS17->Name = L"lblJS17";
			this->lblJS17->Size = System::Drawing::Size(25, 16);
			this->lblJS17->TabIndex = 16;
			this->lblJS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS7
			// 
			this->lblJS7->BackColor = System::Drawing::Color::Transparent;
			this->lblJS7->ForeColor = System::Drawing::Color::Lime;
			this->lblJS7->Location = System::Drawing::Point(118, 170);
			this->lblJS7->Name = L"lblJS7";
			this->lblJS7->Size = System::Drawing::Size(25, 16);
			this->lblJS7->TabIndex = 6;
			this->lblJS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS4
			// 
			this->lblJS4->BackColor = System::Drawing::Color::Transparent;
			this->lblJS4->ForeColor = System::Drawing::Color::Lime;
			this->lblJS4->Location = System::Drawing::Point(72, 129);
			this->lblJS4->Name = L"lblJS4";
			this->lblJS4->Size = System::Drawing::Size(25, 16);
			this->lblJS4->TabIndex = 3;
			this->lblJS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJClass
			// 
			this->lblJClass->BackColor = System::Drawing::Color::Transparent;
			this->lblJClass->ForeColor = System::Drawing::Color::Lime;
			this->lblJClass->Location = System::Drawing::Point(320, 41);
			this->lblJClass->Name = L"lblJClass";
			this->lblJClass->Size = System::Drawing::Size(25, 16);
			this->lblJClass->TabIndex = 39;
			this->lblJClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblJS38
			// 
			this->lblJS38->ForeColor = System::Drawing::Color::Lime;
			this->lblJS38->Location = System::Drawing::Point(434, 292);
			this->lblJS38->Name = L"lblJS38";
			this->lblJS38->Size = System::Drawing::Size(25, 16);
			this->lblJS38->TabIndex = 37;
			this->lblJS38->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS38->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS37
			// 
			this->lblJS37->ForeColor = System::Drawing::Color::Lime;
			this->lblJS37->Location = System::Drawing::Point(479, 251);
			this->lblJS37->Name = L"lblJS37";
			this->lblJS37->Size = System::Drawing::Size(25, 16);
			this->lblJS37->TabIndex = 36;
			this->lblJS37->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS37->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS35
			// 
			this->lblJS35->ForeColor = System::Drawing::Color::Lime;
			this->lblJS35->Location = System::Drawing::Point(392, 251);
			this->lblJS35->Name = L"lblJS35";
			this->lblJS35->Size = System::Drawing::Size(25, 16);
			this->lblJS35->TabIndex = 34;
			this->lblJS35->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS35->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS34
			// 
			this->lblJS34->ForeColor = System::Drawing::Color::Lime;
			this->lblJS34->Location = System::Drawing::Point(479, 211);
			this->lblJS34->Name = L"lblJS34";
			this->lblJS34->Size = System::Drawing::Size(25, 16);
			this->lblJS34->TabIndex = 33;
			this->lblJS34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS34->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS33
			// 
			this->lblJS33->ForeColor = System::Drawing::Color::Lime;
			this->lblJS33->Location = System::Drawing::Point(434, 211);
			this->lblJS33->Name = L"lblJS33";
			this->lblJS33->Size = System::Drawing::Size(25, 16);
			this->lblJS33->TabIndex = 32;
			this->lblJS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS32
			// 
			this->lblJS32->ForeColor = System::Drawing::Color::Lime;
			this->lblJS32->Location = System::Drawing::Point(392, 211);
			this->lblJS32->Name = L"lblJS32";
			this->lblJS32->Size = System::Drawing::Size(25, 16);
			this->lblJS32->TabIndex = 31;
			this->lblJS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS31
			// 
			this->lblJS31->ForeColor = System::Drawing::Color::Lime;
			this->lblJS31->Location = System::Drawing::Point(434, 170);
			this->lblJS31->Name = L"lblJS31";
			this->lblJS31->Size = System::Drawing::Size(25, 16);
			this->lblJS31->TabIndex = 30;
			this->lblJS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS30
			// 
			this->lblJS30->ForeColor = System::Drawing::Color::Lime;
			this->lblJS30->Location = System::Drawing::Point(479, 129);
			this->lblJS30->Name = L"lblJS30";
			this->lblJS30->Size = System::Drawing::Size(25, 16);
			this->lblJS30->TabIndex = 29;
			this->lblJS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS36
			// 
			this->lblJS36->ForeColor = System::Drawing::Color::Lime;
			this->lblJS36->Location = System::Drawing::Point(434, 251);
			this->lblJS36->Name = L"lblJS36";
			this->lblJS36->Size = System::Drawing::Size(25, 16);
			this->lblJS36->TabIndex = 35;
			this->lblJS36->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS36->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS29
			// 
			this->lblJS29->ForeColor = System::Drawing::Color::Lime;
			this->lblJS29->Location = System::Drawing::Point(390, 129);
			this->lblJS29->Name = L"lblJS29";
			this->lblJS29->Size = System::Drawing::Size(25, 16);
			this->lblJS29->TabIndex = 28;
			this->lblJS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS28
			// 
			this->lblJS28->ForeColor = System::Drawing::Color::Lime;
			this->lblJS28->Location = System::Drawing::Point(479, 90);
			this->lblJS28->Name = L"lblJS28";
			this->lblJS28->Size = System::Drawing::Size(25, 16);
			this->lblJS28->TabIndex = 27;
			this->lblJS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS27
			// 
			this->lblJS27->ForeColor = System::Drawing::Color::Lime;
			this->lblJS27->Location = System::Drawing::Point(390, 90);
			this->lblJS27->Name = L"lblJS27";
			this->lblJS27->Size = System::Drawing::Size(25, 16);
			this->lblJS27->TabIndex = 26;
			this->lblJS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS26
			// 
			this->lblJS26->ForeColor = System::Drawing::Color::Lime;
			this->lblJS26->Location = System::Drawing::Point(254, 292);
			this->lblJS26->Name = L"lblJS26";
			this->lblJS26->Size = System::Drawing::Size(25, 16);
			this->lblJS26->TabIndex = 25;
			this->lblJS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS25
			// 
			this->lblJS25->ForeColor = System::Drawing::Color::Lime;
			this->lblJS25->Location = System::Drawing::Point(298, 251);
			this->lblJS25->Name = L"lblJS25";
			this->lblJS25->Size = System::Drawing::Size(25, 16);
			this->lblJS25->TabIndex = 24;
			this->lblJS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS23
			// 
			this->lblJS23->ForeColor = System::Drawing::Color::Lime;
			this->lblJS23->Location = System::Drawing::Point(210, 251);
			this->lblJS23->Name = L"lblJS23";
			this->lblJS23->Size = System::Drawing::Size(25, 16);
			this->lblJS23->TabIndex = 22;
			this->lblJS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS22
			// 
			this->lblJS22->ForeColor = System::Drawing::Color::Lime;
			this->lblJS22->Location = System::Drawing::Point(298, 211);
			this->lblJS22->Name = L"lblJS22";
			this->lblJS22->Size = System::Drawing::Size(25, 16);
			this->lblJS22->TabIndex = 21;
			this->lblJS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS21
			// 
			this->lblJS21->ForeColor = System::Drawing::Color::Lime;
			this->lblJS21->Location = System::Drawing::Point(254, 211);
			this->lblJS21->Name = L"lblJS21";
			this->lblJS21->Size = System::Drawing::Size(25, 16);
			this->lblJS21->TabIndex = 20;
			this->lblJS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS20
			// 
			this->lblJS20->ForeColor = System::Drawing::Color::Lime;
			this->lblJS20->Location = System::Drawing::Point(210, 211);
			this->lblJS20->Name = L"lblJS20";
			this->lblJS20->Size = System::Drawing::Size(25, 16);
			this->lblJS20->TabIndex = 19;
			this->lblJS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS19
			// 
			this->lblJS19->ForeColor = System::Drawing::Color::Lime;
			this->lblJS19->Location = System::Drawing::Point(254, 170);
			this->lblJS19->Name = L"lblJS19";
			this->lblJS19->Size = System::Drawing::Size(25, 16);
			this->lblJS19->TabIndex = 18;
			this->lblJS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS18
			// 
			this->lblJS18->ForeColor = System::Drawing::Color::Lime;
			this->lblJS18->Location = System::Drawing::Point(298, 129);
			this->lblJS18->Name = L"lblJS18";
			this->lblJS18->Size = System::Drawing::Size(25, 16);
			this->lblJS18->TabIndex = 17;
			this->lblJS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS16
			// 
			this->lblJS16->ForeColor = System::Drawing::Color::Lime;
			this->lblJS16->Location = System::Drawing::Point(210, 129);
			this->lblJS16->Name = L"lblJS16";
			this->lblJS16->Size = System::Drawing::Size(25, 16);
			this->lblJS16->TabIndex = 15;
			this->lblJS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS15
			// 
			this->lblJS15->ForeColor = System::Drawing::Color::Lime;
			this->lblJS15->Location = System::Drawing::Point(298, 88);
			this->lblJS15->Name = L"lblJS15";
			this->lblJS15->Size = System::Drawing::Size(25, 16);
			this->lblJS15->TabIndex = 14;
			this->lblJS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS14
			// 
			this->lblJS14->ForeColor = System::Drawing::Color::Lime;
			this->lblJS14->Location = System::Drawing::Point(210, 88);
			this->lblJS14->Name = L"lblJS14";
			this->lblJS14->Size = System::Drawing::Size(25, 16);
			this->lblJS14->TabIndex = 13;
			this->lblJS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS13
			// 
			this->lblJS13->ForeColor = System::Drawing::Color::Lime;
			this->lblJS13->Location = System::Drawing::Point(72, 292);
			this->lblJS13->Name = L"lblJS13";
			this->lblJS13->Size = System::Drawing::Size(25, 16);
			this->lblJS13->TabIndex = 12;
			this->lblJS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS12
			// 
			this->lblJS12->ForeColor = System::Drawing::Color::Lime;
			this->lblJS12->Location = System::Drawing::Point(118, 251);
			this->lblJS12->Name = L"lblJS12";
			this->lblJS12->Size = System::Drawing::Size(25, 16);
			this->lblJS12->TabIndex = 11;
			this->lblJS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS11
			// 
			this->lblJS11->ForeColor = System::Drawing::Color::Lime;
			this->lblJS11->Location = System::Drawing::Point(28, 251);
			this->lblJS11->Name = L"lblJS11";
			this->lblJS11->Size = System::Drawing::Size(25, 16);
			this->lblJS11->TabIndex = 10;
			this->lblJS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS10
			// 
			this->lblJS10->ForeColor = System::Drawing::Color::Lime;
			this->lblJS10->Location = System::Drawing::Point(118, 211);
			this->lblJS10->Name = L"lblJS10";
			this->lblJS10->Size = System::Drawing::Size(25, 16);
			this->lblJS10->TabIndex = 9;
			this->lblJS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS9
			// 
			this->lblJS9->ForeColor = System::Drawing::Color::Lime;
			this->lblJS9->Location = System::Drawing::Point(72, 211);
			this->lblJS9->Name = L"lblJS9";
			this->lblJS9->Size = System::Drawing::Size(25, 16);
			this->lblJS9->TabIndex = 8;
			this->lblJS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS8
			// 
			this->lblJS8->ForeColor = System::Drawing::Color::Lime;
			this->lblJS8->Location = System::Drawing::Point(28, 211);
			this->lblJS8->Name = L"lblJS8";
			this->lblJS8->Size = System::Drawing::Size(25, 16);
			this->lblJS8->TabIndex = 7;
			this->lblJS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS6
			// 
			this->lblJS6->ForeColor = System::Drawing::Color::Lime;
			this->lblJS6->Location = System::Drawing::Point(72, 170);
			this->lblJS6->Name = L"lblJS6";
			this->lblJS6->Size = System::Drawing::Size(25, 16);
			this->lblJS6->TabIndex = 5;
			this->lblJS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS5
			// 
			this->lblJS5->ForeColor = System::Drawing::Color::Lime;
			this->lblJS5->Location = System::Drawing::Point(118, 129);
			this->lblJS5->Name = L"lblJS5";
			this->lblJS5->Size = System::Drawing::Size(25, 16);
			this->lblJS5->TabIndex = 4;
			this->lblJS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS3
			// 
			this->lblJS3->ForeColor = System::Drawing::Color::Lime;
			this->lblJS3->Location = System::Drawing::Point(28, 129);
			this->lblJS3->Name = L"lblJS3";
			this->lblJS3->Size = System::Drawing::Size(25, 16);
			this->lblJS3->TabIndex = 2;
			this->lblJS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS2
			// 
			this->lblJS2->ForeColor = System::Drawing::Color::Lime;
			this->lblJS2->Location = System::Drawing::Point(118, 88);
			this->lblJS2->Name = L"lblJS2";
			this->lblJS2->Size = System::Drawing::Size(25, 16);
			this->lblJS2->TabIndex = 1;
			this->lblJS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblJS1
			// 
			this->lblJS1->BackColor = System::Drawing::Color::Transparent;
			this->lblJS1->ForeColor = System::Drawing::Color::Lime;
			this->lblJS1->Location = System::Drawing::Point(28, 90);
			this->lblJS1->Name = L"lblJS1";
			this->lblJS1->Size = System::Drawing::Size(25, 16);
			this->lblJS1->TabIndex = 0;
			this->lblJS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblJS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpAurelia
			// 
			this->tpAurelia->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tpAurelia.BackgroundImage")));
			this->tpAurelia->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tpAurelia->Controls->Add(this->lblAuS4);
			this->tpAurelia->Controls->Add(this->lblAuS16);
			this->tpAurelia->Controls->Add(this->lblAuS26);
			this->tpAurelia->Controls->Add(this->lblAurClass);
			this->tpAurelia->Controls->Add(this->lblAuS37);
			this->tpAurelia->Controls->Add(this->lblAuS36);
			this->tpAurelia->Controls->Add(this->lblAuS35);
			this->tpAurelia->Controls->Add(this->lblAuS34);
			this->tpAurelia->Controls->Add(this->lblAuS33);
			this->tpAurelia->Controls->Add(this->lblAuS32);
			this->tpAurelia->Controls->Add(this->lblAuS31);
			this->tpAurelia->Controls->Add(this->lblAuS30);
			this->tpAurelia->Controls->Add(this->lblAuS29);
			this->tpAurelia->Controls->Add(this->lblAuS28);
			this->tpAurelia->Controls->Add(this->lblAuS27);
			this->tpAurelia->Controls->Add(this->lblAuS25);
			this->tpAurelia->Controls->Add(this->lblAuS24);
			this->tpAurelia->Controls->Add(this->lblAuS23);
			this->tpAurelia->Controls->Add(this->lblAuS22);
			this->tpAurelia->Controls->Add(this->lblAuS21);
			this->tpAurelia->Controls->Add(this->lblAuS20);
			this->tpAurelia->Controls->Add(this->lblAuS19);
			this->tpAurelia->Controls->Add(this->lblAuS18);
			this->tpAurelia->Controls->Add(this->lblAuS17);
			this->tpAurelia->Controls->Add(this->lblAuS15);
			this->tpAurelia->Controls->Add(this->lblAuS14);
			this->tpAurelia->Controls->Add(this->lblAuS13);
			this->tpAurelia->Controls->Add(this->lblAuS12);
			this->tpAurelia->Controls->Add(this->lblAuS11);
			this->tpAurelia->Controls->Add(this->lblAuS10);
			this->tpAurelia->Controls->Add(this->lblAuS9);
			this->tpAurelia->Controls->Add(this->lblAuS8);
			this->tpAurelia->Controls->Add(this->lblAuS7);
			this->tpAurelia->Controls->Add(this->lblAuS6);
			this->tpAurelia->Controls->Add(this->lblAuS5);
			this->tpAurelia->Controls->Add(this->lblAuS3);
			this->tpAurelia->Controls->Add(this->lblAuS2);
			this->tpAurelia->Controls->Add(this->lblAuS1);
			this->tpAurelia->Location = System::Drawing::Point(4, 22);
			this->tpAurelia->Name = L"tpAurelia";
			this->tpAurelia->Size = System::Drawing::Size(516, 322);
			this->tpAurelia->TabIndex = 5;
			this->tpAurelia->Text = L"Aurelia";
			this->tpAurelia->UseVisualStyleBackColor = true;
			// 
			// lblAuS4
			// 
			this->lblAuS4->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS4->Location = System::Drawing::Point(78, 129);
			this->lblAuS4->Name = L"lblAuS4";
			this->lblAuS4->Size = System::Drawing::Size(25, 16);
			this->lblAuS4->TabIndex = 3;
			this->lblAuS4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS16
			// 
			this->lblAuS16->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS16->Location = System::Drawing::Point(253, 129);
			this->lblAuS16->Name = L"lblAuS16";
			this->lblAuS16->Size = System::Drawing::Size(25, 16);
			this->lblAuS16->TabIndex = 15;
			this->lblAuS16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS26
			// 
			this->lblAuS26->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS26->Location = System::Drawing::Point(428, 88);
			this->lblAuS26->Name = L"lblAuS26";
			this->lblAuS26->Size = System::Drawing::Size(25, 16);
			this->lblAuS26->TabIndex = 25;
			this->lblAuS26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAurClass
			// 
			this->lblAurClass->BackColor = System::Drawing::Color::Transparent;
			this->lblAurClass->ForeColor = System::Drawing::Color::Lime;
			this->lblAurClass->Location = System::Drawing::Point(318, 36);
			this->lblAurClass->Name = L"lblAurClass";
			this->lblAurClass->Size = System::Drawing::Size(25, 16);
			this->lblAurClass->TabIndex = 39;
			this->lblAurClass->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblAuS37
			// 
			this->lblAuS37->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS37->Location = System::Drawing::Point(428, 294);
			this->lblAuS37->Name = L"lblAuS37";
			this->lblAuS37->Size = System::Drawing::Size(25, 16);
			this->lblAuS37->TabIndex = 36;
			this->lblAuS37->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS37->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS36
			// 
			this->lblAuS36->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS36->Location = System::Drawing::Point(473, 252);
			this->lblAuS36->Name = L"lblAuS36";
			this->lblAuS36->Size = System::Drawing::Size(25, 16);
			this->lblAuS36->TabIndex = 35;
			this->lblAuS36->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS36->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS35
			// 
			this->lblAuS35->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS35->Location = System::Drawing::Point(382, 252);
			this->lblAuS35->Name = L"lblAuS35";
			this->lblAuS35->Size = System::Drawing::Size(25, 16);
			this->lblAuS35->TabIndex = 34;
			this->lblAuS35->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS35->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS34
			// 
			this->lblAuS34->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS34->Location = System::Drawing::Point(473, 211);
			this->lblAuS34->Name = L"lblAuS34";
			this->lblAuS34->Size = System::Drawing::Size(25, 16);
			this->lblAuS34->TabIndex = 33;
			this->lblAuS34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS34->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS33
			// 
			this->lblAuS33->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS33->Location = System::Drawing::Point(428, 211);
			this->lblAuS33->Name = L"lblAuS33";
			this->lblAuS33->Size = System::Drawing::Size(25, 16);
			this->lblAuS33->TabIndex = 32;
			this->lblAuS33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS32
			// 
			this->lblAuS32->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS32->Location = System::Drawing::Point(382, 211);
			this->lblAuS32->Name = L"lblAuS32";
			this->lblAuS32->Size = System::Drawing::Size(25, 16);
			this->lblAuS32->TabIndex = 31;
			this->lblAuS32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS32->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS31
			// 
			this->lblAuS31->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS31->Location = System::Drawing::Point(428, 170);
			this->lblAuS31->Name = L"lblAuS31";
			this->lblAuS31->Size = System::Drawing::Size(25, 16);
			this->lblAuS31->TabIndex = 30;
			this->lblAuS31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS30
			// 
			this->lblAuS30->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS30->Location = System::Drawing::Point(473, 129);
			this->lblAuS30->Name = L"lblAuS30";
			this->lblAuS30->Size = System::Drawing::Size(25, 16);
			this->lblAuS30->TabIndex = 29;
			this->lblAuS30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS29
			// 
			this->lblAuS29->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS29->Location = System::Drawing::Point(428, 129);
			this->lblAuS29->Name = L"lblAuS29";
			this->lblAuS29->Size = System::Drawing::Size(25, 16);
			this->lblAuS29->TabIndex = 28;
			this->lblAuS29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS29->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS28
			// 
			this->lblAuS28->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS28->Location = System::Drawing::Point(380, 129);
			this->lblAuS28->Name = L"lblAuS28";
			this->lblAuS28->Size = System::Drawing::Size(25, 16);
			this->lblAuS28->TabIndex = 27;
			this->lblAuS28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS28->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS27
			// 
			this->lblAuS27->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS27->Location = System::Drawing::Point(473, 88);
			this->lblAuS27->Name = L"lblAuS27";
			this->lblAuS27->Size = System::Drawing::Size(25, 16);
			this->lblAuS27->TabIndex = 26;
			this->lblAuS27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS25
			// 
			this->lblAuS25->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS25->Location = System::Drawing::Point(380, 88);
			this->lblAuS25->Name = L"lblAuS25";
			this->lblAuS25->Size = System::Drawing::Size(25, 16);
			this->lblAuS25->TabIndex = 24;
			this->lblAuS25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS24
			// 
			this->lblAuS24->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS24->Location = System::Drawing::Point(253, 294);
			this->lblAuS24->Name = L"lblAuS24";
			this->lblAuS24->Size = System::Drawing::Size(25, 16);
			this->lblAuS24->TabIndex = 23;
			this->lblAuS24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS23
			// 
			this->lblAuS23->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS23->Location = System::Drawing::Point(299, 252);
			this->lblAuS23->Name = L"lblAuS23";
			this->lblAuS23->Size = System::Drawing::Size(25, 16);
			this->lblAuS23->TabIndex = 22;
			this->lblAuS23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS22
			// 
			this->lblAuS22->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS22->Location = System::Drawing::Point(208, 252);
			this->lblAuS22->Name = L"lblAuS22";
			this->lblAuS22->Size = System::Drawing::Size(25, 16);
			this->lblAuS22->TabIndex = 21;
			this->lblAuS22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS21
			// 
			this->lblAuS21->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS21->Location = System::Drawing::Point(299, 211);
			this->lblAuS21->Name = L"lblAuS21";
			this->lblAuS21->Size = System::Drawing::Size(25, 16);
			this->lblAuS21->TabIndex = 20;
			this->lblAuS21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS20
			// 
			this->lblAuS20->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS20->Location = System::Drawing::Point(253, 211);
			this->lblAuS20->Name = L"lblAuS20";
			this->lblAuS20->Size = System::Drawing::Size(25, 16);
			this->lblAuS20->TabIndex = 19;
			this->lblAuS20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS19
			// 
			this->lblAuS19->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS19->Location = System::Drawing::Point(208, 211);
			this->lblAuS19->Name = L"lblAuS19";
			this->lblAuS19->Size = System::Drawing::Size(25, 16);
			this->lblAuS19->TabIndex = 18;
			this->lblAuS19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS19->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS18
			// 
			this->lblAuS18->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS18->Location = System::Drawing::Point(253, 170);
			this->lblAuS18->Name = L"lblAuS18";
			this->lblAuS18->Size = System::Drawing::Size(25, 16);
			this->lblAuS18->TabIndex = 17;
			this->lblAuS18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS18->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS17
			// 
			this->lblAuS17->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS17->Location = System::Drawing::Point(297, 129);
			this->lblAuS17->Name = L"lblAuS17";
			this->lblAuS17->Size = System::Drawing::Size(25, 16);
			this->lblAuS17->TabIndex = 16;
			this->lblAuS17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS15
			// 
			this->lblAuS15->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS15->Location = System::Drawing::Point(206, 129);
			this->lblAuS15->Name = L"lblAuS15";
			this->lblAuS15->Size = System::Drawing::Size(25, 16);
			this->lblAuS15->TabIndex = 14;
			this->lblAuS15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS14
			// 
			this->lblAuS14->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS14->Location = System::Drawing::Point(297, 88);
			this->lblAuS14->Name = L"lblAuS14";
			this->lblAuS14->Size = System::Drawing::Size(25, 16);
			this->lblAuS14->TabIndex = 13;
			this->lblAuS14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS13
			// 
			this->lblAuS13->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS13->Location = System::Drawing::Point(206, 88);
			this->lblAuS13->Name = L"lblAuS13";
			this->lblAuS13->Size = System::Drawing::Size(25, 16);
			this->lblAuS13->TabIndex = 12;
			this->lblAuS13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS12
			// 
			this->lblAuS12->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS12->Location = System::Drawing::Point(78, 294);
			this->lblAuS12->Name = L"lblAuS12";
			this->lblAuS12->Size = System::Drawing::Size(25, 16);
			this->lblAuS12->TabIndex = 11;
			this->lblAuS12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS11
			// 
			this->lblAuS11->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS11->Location = System::Drawing::Point(124, 252);
			this->lblAuS11->Name = L"lblAuS11";
			this->lblAuS11->Size = System::Drawing::Size(25, 16);
			this->lblAuS11->TabIndex = 10;
			this->lblAuS11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS10
			// 
			this->lblAuS10->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS10->Location = System::Drawing::Point(33, 252);
			this->lblAuS10->Name = L"lblAuS10";
			this->lblAuS10->Size = System::Drawing::Size(25, 16);
			this->lblAuS10->TabIndex = 9;
			this->lblAuS10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS9
			// 
			this->lblAuS9->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS9->Location = System::Drawing::Point(124, 211);
			this->lblAuS9->Name = L"lblAuS9";
			this->lblAuS9->Size = System::Drawing::Size(25, 16);
			this->lblAuS9->TabIndex = 8;
			this->lblAuS9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS8
			// 
			this->lblAuS8->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS8->Location = System::Drawing::Point(78, 211);
			this->lblAuS8->Name = L"lblAuS8";
			this->lblAuS8->Size = System::Drawing::Size(25, 16);
			this->lblAuS8->TabIndex = 7;
			this->lblAuS8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS7
			// 
			this->lblAuS7->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS7->Location = System::Drawing::Point(33, 211);
			this->lblAuS7->Name = L"lblAuS7";
			this->lblAuS7->Size = System::Drawing::Size(25, 16);
			this->lblAuS7->TabIndex = 6;
			this->lblAuS7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS6
			// 
			this->lblAuS6->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS6->Location = System::Drawing::Point(78, 170);
			this->lblAuS6->Name = L"lblAuS6";
			this->lblAuS6->Size = System::Drawing::Size(25, 16);
			this->lblAuS6->TabIndex = 5;
			this->lblAuS6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS5
			// 
			this->lblAuS5->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS5->Location = System::Drawing::Point(122, 129);
			this->lblAuS5->Name = L"lblAuS5";
			this->lblAuS5->Size = System::Drawing::Size(25, 16);
			this->lblAuS5->TabIndex = 4;
			this->lblAuS5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS3
			// 
			this->lblAuS3->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS3->Location = System::Drawing::Point(31, 129);
			this->lblAuS3->Name = L"lblAuS3";
			this->lblAuS3->Size = System::Drawing::Size(25, 16);
			this->lblAuS3->TabIndex = 2;
			this->lblAuS3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS2
			// 
			this->lblAuS2->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS2->Location = System::Drawing::Point(122, 88);
			this->lblAuS2->Name = L"lblAuS2";
			this->lblAuS2->Size = System::Drawing::Size(25, 16);
			this->lblAuS2->TabIndex = 1;
			this->lblAuS2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// lblAuS1
			// 
			this->lblAuS1->BackColor = System::Drawing::Color::Transparent;
			this->lblAuS1->ForeColor = System::Drawing::Color::Lime;
			this->lblAuS1->Location = System::Drawing::Point(33, 88);
			this->lblAuS1->Name = L"lblAuS1";
			this->lblAuS1->Size = System::Drawing::Size(25, 16);
			this->lblAuS1->TabIndex = 0;
			this->lblAuS1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblAuS1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Borderlands_TPS::clickSkill);
			// 
			// tpCheats
			// 
			this->tpCheats->Controls->Add(this->ckbxGodMode);
			this->tpCheats->Controls->Add(this->ckbxuBkPk);
			this->tpCheats->Location = System::Drawing::Point(4, 22);
			this->tpCheats->Name = L"tpCheats";
			this->tpCheats->Size = System::Drawing::Size(544, 360);
			this->tpCheats->TabIndex = 2;
			this->tpCheats->Text = L"Cheats";
			this->tpCheats->UseVisualStyleBackColor = true;
			// 
			// ckbxGodMode
			// 
			this->ckbxGodMode->AutoSize = true;
			this->ckbxGodMode->Location = System::Drawing::Point(31, 66);
			this->ckbxGodMode->Name = L"ckbxGodMode";
			this->ckbxGodMode->Size = System::Drawing::Size(76, 17);
			this->ckbxGodMode->TabIndex = 1;
			this->ckbxGodMode->Text = L"God Mode";
			this->ckbxGodMode->UseVisualStyleBackColor = true;
			this->ckbxGodMode->CheckedChanged += gcnew System::EventHandler(this, &Borderlands_TPS::ckbxGodMode_CheckedChanged);
			// 
			// ckbxuBkPk
			// 
			this->ckbxuBkPk->AutoSize = true;
			this->ckbxuBkPk->Location = System::Drawing::Point(31, 33);
			this->ckbxuBkPk->Name = L"ckbxuBkPk";
			this->ckbxuBkPk->Size = System::Drawing::Size(121, 17);
			this->ckbxuBkPk->TabIndex = 0;
			this->ckbxuBkPk->Text = L"Unlimited Backpack";
			this->ckbxuBkPk->UseVisualStyleBackColor = true;
			this->ckbxuBkPk->CheckedChanged += gcnew System::EventHandler(this, &Borderlands_TPS::ckbxuBkPk_CheckedChanged);
			// 
			// lblErrorMsg
			// 
			this->lblErrorMsg->AutoSize = true;
			this->lblErrorMsg->Location = System::Drawing::Point(13, 401);
			this->lblErrorMsg->Name = L"lblErrorMsg";
			this->lblErrorMsg->Size = System::Drawing::Size(0, 13);
			this->lblErrorMsg->TabIndex = 1;
			// 
			// LoadTimer
			// 
			this->LoadTimer->Tick += gcnew System::EventHandler(this, &Borderlands_TPS::LoadTimer_Tick);
			// 
			// bkpkTimer
			// 
			this->bkpkTimer->Tick += gcnew System::EventHandler(this, &Borderlands_TPS::bkpkTimer_Tick);
			// 
			// godmodeTimer
			// 
			this->godmodeTimer->Tick += gcnew System::EventHandler(this, &Borderlands_TPS::godmodeTimer_Tick);
			// 
			// Borderlands_TPS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 423);
			this->Controls->Add(this->lblErrorMsg);
			this->Controls->Add(this->tcMain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Borderlands_TPS";
			this->Text = L"Borderlands: The PreSequel";
			this->Load += gcnew System::EventHandler(this, &Borderlands_TPS::Borderlands_TPS_Load);
			this->tcMain->ResumeLayout(false);
			this->tpStats->ResumeLayout(false);
			this->gbSkills->ResumeLayout(false);
			this->gbSkills->PerformLayout();
			this->gbGoldenKeys->ResumeLayout(false);
			this->gbGoldenKeys->PerformLayout();
			this->gbInventory->ResumeLayout(false);
			this->gbInventory->PerformLayout();
			this->gbCurrency->ResumeLayout(false);
			this->gbCurrency->PerformLayout();
			this->gbMain->ResumeLayout(false);
			this->gbMain->PerformLayout();
			this->tpSkills->ResumeLayout(false);
			this->tcClasses->ResumeLayout(false);
			this->tpClaptrap->ResumeLayout(false);
			this->tpWilhelm->ResumeLayout(false);
			this->tpAthena->ResumeLayout(false);
			this->tpNisha->ResumeLayout(false);
			this->tpJack->ResumeLayout(false);
			this->tpAurelia->ResumeLayout(false);
			this->tpCheats->ResumeLayout(false);
			this->tpCheats->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Borderlands_TPS_Load(System::Object^  sender, System::EventArgs^  e);
private: System::Void loadMemory();
//Function to load the skills
//allows reusablitiy for all of the tabs instead of having to load each one individually
private: System::Void displaySkills(System::String^ Name, System::String^ tabPage, int noOfSkills);
//FUnction to get input from the user to write to memory
private: System::Void writeMemory(System::Object^  sender, System::EventArgs^  e);
private: System::Void getInput(System::Object^  sender);
private: System::Void LoadTimer_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void clickSkill(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void godmodeTimer_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void bkpkTimer_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void ckbxuBkPk_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void ckbxGodMode_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
};
}

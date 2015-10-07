#pragma once

namespace BorderlandsThePreSequel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for inputBox
	/// </summary>
	public ref class inputBox : public System::Windows::Forms::Form
	{
	public:
		inputBox(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		System::Windows::Forms::TextBox^  textBox1;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~inputBox()
		{
			if (components)
			{
				delete components;
			}
		}
		//private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(inputBox::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &inputBox::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &inputBox::textBox1_KeyPress);
			// 
			// inputBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 47);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"inputBox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Enter Value";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		//Only accepts numbers
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
		else
		{
			e->Handled = false;
		}
	}
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyCode == Keys::Enter)
		{
			this->Close();
		}
	}
	};
}

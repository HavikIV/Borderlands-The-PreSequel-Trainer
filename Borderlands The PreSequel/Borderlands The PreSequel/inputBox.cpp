#include "inputBox.h"

namespace BorderlandsThePreSequel {
	//default constructor
	inputBox::inputBox(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}	//end inputBox

	//destructor
	inputBox::~inputBox()
	{
		if (components)
		{
			delete components;
		}
	}	//end ~inputBox

	//member functions

	//The input box only accepts numberical values
	//Will not allow the user to enter any text into the text box
	System::Void inputBox::textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		//Only accepts numbers
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
		else
		{
			e->Handled = false;
		}
	}	//end textBox1_KeyPress

	//Only accept the input if user press ENTER key
	//After acepting the input close the input box
	System::Void inputBox::textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyCode == Keys::Enter)
		{
			this->Close();
		}
	}	//end textBox1_KeyDown
}	//end namespace BorderlandsThePreSequel


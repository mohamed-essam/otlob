#pragma once
#include "RestaurantsForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OtlobCLR {

	/// <summary>
	/// Summary for CatIteam
	/// </summary>
	public ref class CatIteam : public System::Windows::Forms::UserControl
	{
	public:
		property int UID;
		property int CID;
		property String^ G;
		property String^ A;
		CatIteam(int usrId,int catId,String^ Name,String^ gov,String^ area)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UID = usrId;
			CID = catId;
			G = gov;
			A = area;
			button1->Text = Name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CatIteam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Name";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CatIteam::button1_Click);
			// 
			// CatIteam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Name = L"CatIteam";
			this->Size = System::Drawing::Size(150, 38);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		RestaurantsForm^m = gcnew RestaurantsForm(UID,G ,A, CID);
		m->Show();
	}
	};
}

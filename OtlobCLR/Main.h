#pragma once
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "ObjectsGetter.h"
#include "MyForm.h"
#include "Adminlogin.h"
#include "Userlogin.h"


namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			ObjectsGetter::InitAll();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*ObjectsGetter::InitAll();
			Admin x;
			x.setEmail("ghazouly");
			x.setAddress("Nasr");
			x.setBirthdate("19999");
			x.setName("ghazouly");
			x.setPassword("a7a");
			x.setPhone("010");
			
			ObjectsGetter::AddAdmin(x);
			ObjectsGetter::saveAll();*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 254);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"signUp";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 171);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"UserLogin";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(143, 209);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"AdminLogin";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 322);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm^ mf = gcnew MyForm();
		mf->Show();
		this->Hide();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Adminlogin^ mf = gcnew Adminlogin();
		mf->Show();
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Userlogin^ mf = gcnew Userlogin();
		//mf->Close();
		mf->Show();
		this->Hide();
		
	}
	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

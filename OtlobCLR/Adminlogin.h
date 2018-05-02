#pragma once
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "ObjectsGetter.h"
#include "AdminMain.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Adminlogin
	/// </summary>
	public ref class Adminlogin : public System::Windows::Forms::Form
	{
	public:
		Adminlogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  login;
	protected:
	private: System::Windows::Forms::Label^  email;
	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::TextBox^  emailtext;
	private: System::Windows::Forms::TextBox^  passtext;

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
			this->login = (gcnew System::Windows::Forms::Button());
			this->email = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->emailtext = (gcnew System::Windows::Forms::TextBox());
			this->passtext = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(93, 279);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(212, 49);
			this->login->TabIndex = 0;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Adminlogin::login_Click);
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Location = System::Drawing::Point(13, 37);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(42, 17);
			this->email->TabIndex = 1;
			this->email->Text = L"Email";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Location = System::Drawing::Point(12, 94);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(69, 17);
			this->password->TabIndex = 2;
			this->password->Text = L"Password";
			// 
			// emailtext
			// 
			this->emailtext->Location = System::Drawing::Point(122, 31);
			this->emailtext->Name = L"emailtext";
			this->emailtext->Size = System::Drawing::Size(288, 22);
			this->emailtext->TabIndex = 3;
			// 
			// passtext
			// 
			this->passtext->Location = System::Drawing::Point(122, 89);
			this->passtext->Name = L"passtext";
			this->passtext->Size = System::Drawing::Size(288, 22);
			this->passtext->TabIndex = 4;
			// 
			// Adminlogin
			// 
			this->ClientSize = System::Drawing::Size(422, 340);
			this->Controls->Add(this->passtext);
			this->Controls->Add(this->emailtext);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->login);
			this->Name = L"Adminlogin";
			this->ResumeLayout(false);
			this->PerformLayout();
			  
		}
#pragma endregion
	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ t1 = emailtext->Text;
		String^ t2 = passtext->Text;
		ObjectsGetter::initAdmins();
		string email = msclr::interop::marshal_as<std::string>(t1);
		string password = msclr::interop::marshal_as<std::string>(t2);
		try
		{
			Admin admin = ObjectsGetter::GetAdminByEmailAndPassword(email, password);
			AdminMain^ F = gcnew AdminMain();
			F -> Show();
			this -> Hide();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Invalid Email or Password");
		}
	}
};
}

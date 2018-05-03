#pragma once
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "ObjectsGetter.h"
#include "GetAddress.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Userlogin
	/// </summary>
	public ref class Userlogin : public System::Windows::Forms::Form
	{
	public:
		Userlogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			email->BackColor = Color::Transparent;
			password->BackColor = Color::Transparent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Userlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  passtext;
	protected:
	private: System::Windows::Forms::TextBox^  emailtext;
	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::Label^  email;
	private: System::Windows::Forms::Button^  login;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Userlogin::typeid));
			this->passtext = (gcnew System::Windows::Forms::TextBox());
			this->emailtext = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// passtext
			// 
			this->passtext->Location = System::Drawing::Point(123, 82);
			this->passtext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passtext->Name = L"passtext";
			this->passtext->Size = System::Drawing::Size(288, 22);
			this->passtext->TabIndex = 9;
			// 
			// emailtext
			// 
			this->emailtext->Location = System::Drawing::Point(123, 25);
			this->emailtext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->emailtext->Name = L"emailtext";
			this->emailtext->Size = System::Drawing::Size(288, 22);
			this->emailtext->TabIndex = 8;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->BackColor = System::Drawing::SystemColors::ControlText;
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(12, 87);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(69, 17);
			this->password->TabIndex = 7;
			this->password->Text = L"Password";
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->BackColor = System::Drawing::SystemColors::ControlText;
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(13, 30);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(42, 17);
			this->email->TabIndex = 6;
			this->email->Text = L"Email";
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(93, 272);
			this->login->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(212, 49);
			this->login->TabIndex = 5;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Userlogin::login_Click);
			// 
			// Userlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(423, 345);
			this->Controls->Add(this->passtext);
			this->Controls->Add(this->emailtext);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->login);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Userlogin";
			this->Text = L"Userlogin";
			this->Load += gcnew System::EventHandler(this, &Userlogin::Userlogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ t1 = emailtext->Text;
		String^ t2 = passtext->Text;
		ObjectsGetter::initUsers();
		std::string username = msclr::interop::marshal_as<std::string>(t1);
		std::string password = msclr::interop::marshal_as<std::string>(t2);
		try
		{
			User user = ObjectsGetter::GetUserByEmailAndPassword(username, password);
			GetAddress^ mf = gcnew GetAddress(user.getId());
			mf->Show();
			this->Hide();
		}
		catch (exception *e)
		{
			String^ x = gcnew String((*e).what());
			MessageBox::Show(x);
		}
	}
private: System::Void Userlogin_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

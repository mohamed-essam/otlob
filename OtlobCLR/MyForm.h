#pragma once
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "ObjectsGetter.h"
#include "Userlogin.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Address->BackColor = Color::Transparent;
			username->BackColor = Color::Transparent;
			password->BackColor = Color::Transparent;
			email->BackColor = Color::Transparent;
			Phone->BackColor = Color::Transparent;
			Birthdate->BackColor = Color::Transparent;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  signupButton;
	protected:

	private: System::Windows::Forms::Label^  username;

	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::TextBox^  usernameText;
	private: System::Windows::Forms::TextBox^  passwordtext;



	private: System::Windows::Forms::Label^  email;
	private: System::Windows::Forms::TextBox^  emailtext;

	private: System::Windows::Forms::Label^  Phone;
	private: System::Windows::Forms::TextBox^  Phonetext;
	
	private: System::Windows::Forms::Label^  Birthdate;
	private: System::Windows::Forms::TextBox^  Birthdatetext;

	private: System::Windows::Forms::Label^  Address;
	private: System::Windows::Forms::TextBox^  Addresstext;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->signupButton = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->usernameText = (gcnew System::Windows::Forms::TextBox());
			this->passwordtext = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->emailtext = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->Phonetext = (gcnew System::Windows::Forms::TextBox());
			this->Birthdate = (gcnew System::Windows::Forms::Label());
			this->Birthdatetext = (gcnew System::Windows::Forms::TextBox());
			this->Address = (gcnew System::Windows::Forms::Label());
			this->Addresstext = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// signupButton
			// 
			this->signupButton->Location = System::Drawing::Point(152, 313);
			this->signupButton->Name = L"signupButton";
			this->signupButton->Size = System::Drawing::Size(164, 35);
			this->signupButton->TabIndex = 0;
			this->signupButton->Text = L"Signup";
			this->signupButton->UseVisualStyleBackColor = true;
			this->signupButton->Click += gcnew System::EventHandler(this, &MyForm::signupButton_Click);
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->ForeColor = System::Drawing::Color::White;
			this->username->Location = System::Drawing::Point(12, 23);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(55, 13);
			this->username->TabIndex = 1;
			this->username->Text = L"Username";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(12, 74);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(53, 13);
			this->password->TabIndex = 2;
			this->password->Text = L"Password";
			// 
			// usernameText
			// 
			this->usernameText->Location = System::Drawing::Point(91, 23);
			this->usernameText->Name = L"usernameText";
			this->usernameText->Size = System::Drawing::Size(357, 20);
			this->usernameText->TabIndex = 3;
			// 
			// passwordtext
			// 
			this->passwordtext->Location = System::Drawing::Point(91, 69);
			this->passwordtext->Name = L"passwordtext";
			this->passwordtext->Size = System::Drawing::Size(357, 20);
			this->passwordtext->TabIndex = 4;
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(12, 123);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(32, 13);
			this->email->TabIndex = 5;
			this->email->Text = L"Email";
			// 
			// emailtext
			// 
			this->emailtext->Location = System::Drawing::Point(91, 120);
			this->emailtext->Name = L"emailtext";
			this->emailtext->Size = System::Drawing::Size(357, 20);
			this->emailtext->TabIndex = 6;
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->ForeColor = System::Drawing::Color::White;
			this->Phone->Location = System::Drawing::Point(12, 173);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(38, 13);
			this->Phone->TabIndex = 5;
			this->Phone->Text = L"Phone";
			// 
			// Phonetext
			// 
			this->Phonetext->Location = System::Drawing::Point(91, 173);
			this->Phonetext->Name = L"Phonetext";
			this->Phonetext->Size = System::Drawing::Size(357, 20);
			this->Phonetext->TabIndex = 6;
			// 
			// Birthdate
			// 
			this->Birthdate->AutoSize = true;
			this->Birthdate->ForeColor = System::Drawing::Color::White;
			this->Birthdate->Location = System::Drawing::Point(12, 223);
			this->Birthdate->Name = L"Birthdate";
			this->Birthdate->Size = System::Drawing::Size(49, 13);
			this->Birthdate->TabIndex = 5;
			this->Birthdate->Text = L"Birthdate";
			// 
			// Birthdatetext
			// 
			this->Birthdatetext->Location = System::Drawing::Point(91, 223);
			this->Birthdatetext->Name = L"Birthdatetext";
			this->Birthdatetext->Size = System::Drawing::Size(357, 20);
			this->Birthdatetext->TabIndex = 6;
			// 
			// Address
			// 
			this->Address->AutoSize = true;
			this->Address->ForeColor = System::Drawing::Color::White;
			this->Address->Location = System::Drawing::Point(12, 273);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(45, 13);
			this->Address->TabIndex = 5;
			this->Address->Text = L"Address";
			// 
			// Addresstext
			// 
			this->Addresstext->Location = System::Drawing::Point(91, 273);
			this->Addresstext->Name = L"Addresstext";
			this->Addresstext->Size = System::Drawing::Size(357, 20);
			this->Addresstext->TabIndex = 6;
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(460, 360);
			this->Controls->Add(this->emailtext);
			this->Controls->Add(this->email);
			this->Controls->Add(this->Phonetext);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Addresstext);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Birthdatetext);
			this->Controls->Add(this->Birthdate);
			this->Controls->Add(this->passwordtext);
			this->Controls->Add(this->usernameText);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->signupButton);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signupButton_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ username = usernameText->Text;
		String^ password = passwordtext->Text;
		String^ email = emailtext->Text;
		String^ Birthdate = Birthdatetext->Text;
		String^ Phone = Phonetext->Text;
		String^ Address = Addresstext->Text;
		ObjectsGetter::initUsers();
		std::string em = msclr::interop::marshal_as<std::string>(email);
		std::string pass = msclr::interop::marshal_as<std::string>(password);
		std::string name = msclr::interop::marshal_as<std::string>(username);
		std::string address = msclr::interop::marshal_as<std::string>(Address);
		std::string birthdate = msclr::interop::marshal_as<std::string>(Birthdate);
		std::string phone = msclr::interop::marshal_as<std::string>(Phone);
		try
		{
			User user = ObjectsGetter::GetUserByEmailAndPassword(em, pass);
			MessageBox::Show("already exist");
		}
		catch (exception *e)
		{
			int id = 2; 
			User user; 
			user.setEmail(em); 
			user.setId(id); 
			user.setName(name); 
			user.setAddress(address); 
			user.setBirthdate(birthdate);
			user.setPhone(phone); 
			user.setPassword(pass); 
			ObjectsGetter::AddUser(user); 
			ObjectsGetter::saveUsers(); 
			Userlogin^ mf = gcnew Userlogin();
			mf->Show();
			this->Hide();
		}

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

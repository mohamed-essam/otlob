#pragma once
#include "CategoryForm.h";
#include "ViewOrders.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePage
	/// </summary> 
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		property int userId ; 
		property String ^ G;
		property String ^ A;
		HomePage(int id,String^ gov,String^ area)
		{
			InitializeComponent();
			userId = id; 
			G = gov;
			A = area;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show All Cat.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HomePage::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(49, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(308, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Show All Rest.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HomePage::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(49, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(308, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View My Order";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &HomePage::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(49, 256);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(308, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"UnRegister";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &HomePage::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(49, 297);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(308, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"LogOut";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &HomePage::button6_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(308, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"View Special Offers";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HomePage::button4_Click);
			// 
			// HomePage
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(425, 349);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Name = L"HomePage";
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void HomePage_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		CategoryForm^ m = gcnew CategoryForm(userId, G, A);
		m->Show();
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	ObjectsGetter::DeleteUser(userId); 
	Application::Restart();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Restart(); 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	RestaurantsForm^ mf = gcnew RestaurantsForm(userId,G,A,-1);
	mf->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ViewOrders ^ mf = gcnew ViewOrders(userId);
	mf->Show();
	this->Hide();
}
};
}

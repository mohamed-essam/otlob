#pragma once
#include "ObjectsGetter.h"
#include "EmpData.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminEmp
	/// </summary>
	public ref class AdminEmp : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ prev;
		AdminEmp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminEmp(System::Windows::Forms::Form^ f)
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
		~AdminEmp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  idbox;
	protected:
	private: System::Windows::Forms::Button^  srch;
	private: System::Windows::Forms::Button^  neww;


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
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->srch = (gcnew System::Windows::Forms::Button());
			this->neww = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// idbox
			// 
			this->idbox->Location = System::Drawing::Point(75, 72);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(100, 20);
			this->idbox->TabIndex = 0;
			// 
			// srch
			// 
			this->srch->Location = System::Drawing::Point(88, 98);
			this->srch->Name = L"srch";
			this->srch->Size = System::Drawing::Size(75, 23);
			this->srch->TabIndex = 1;
			this->srch->Text = L"Search";
			this->srch->UseVisualStyleBackColor = true;
			this->srch->Click += gcnew System::EventHandler(this, &AdminEmp::srch_Click);
			// 
			// neww
			// 
			this->neww->Location = System::Drawing::Point(88, 187);
			this->neww->Name = L"neww";
			this->neww->Size = System::Drawing::Size(75, 23);
			this->neww->TabIndex = 2;
			this->neww->Text = L"New Employee";
			this->neww->UseVisualStyleBackColor = true;
			this->neww->Click += gcnew System::EventHandler(this, &AdminEmp::neww_Click);
			// 
			// AdminEmp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->neww);
			this->Controls->Add(this->srch);
			this->Controls->Add(this->idbox);
			this->Name = L"AdminEmp";
			this->Text = L"AdminEmp";
			this->Load += gcnew System::EventHandler(this, &AdminEmp::AdminEmp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminEmp_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void srch_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ s = idbox->Text;
		int id =Int32::Parse(s);
		EmpData^ F = gcnew EmpData(id);
		F->Show();
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		prev->Show();
	}
private: System::Void neww_Click(System::Object^  sender, System::EventArgs^  e) {
	bool w = 1;
	EmpData^ F = gcnew EmpData(w);
	F->Show();
	this->Hide();
}
};
}

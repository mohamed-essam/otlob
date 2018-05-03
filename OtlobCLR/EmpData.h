#pragma once
#include "ObjectsGetter.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmpData
	/// </summary>
	public ref class EmpData : public System::Windows::Forms::Form
	{
	public:
		int id;
		bool s = 0;
		EmpData(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		EmpData(int idxx)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			id = idxx;
		}
		EmpData(bool b)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			s = b;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmpData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  IDBox;
	private: System::Windows::Forms::TextBox^  NameBox;
	private: System::Windows::Forms::TextBox^  VehicleBox;
	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  Del;
	private: System::Windows::Forms::Button^  Done;
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
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->VehicleBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->Done = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// IDBox
			// 
			this->IDBox->Location = System::Drawing::Point(41, 67);
			this->IDBox->Name = L"IDBox";
			this->IDBox->ReadOnly = true;
			this->IDBox->Size = System::Drawing::Size(188, 20);
			this->IDBox->TabIndex = 0;
			// 
			// NameBox
			// 
			this->NameBox->Location = System::Drawing::Point(41, 116);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(188, 20);
			this->NameBox->TabIndex = 1;
			// 
			// VehicleBox
			// 
			this->VehicleBox->Location = System::Drawing::Point(41, 158);
			this->VehicleBox->Name = L"VehicleBox";
			this->VehicleBox->Size = System::Drawing::Size(188, 20);
			this->VehicleBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Vehicle Number";
			// 
			// Del
			// 
			this->Del->Location = System::Drawing::Point(48, 201);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(75, 23);
			this->Del->TabIndex = 6;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &EmpData::Del_Click);
			// 
			// Done
			// 
			this->Done->Location = System::Drawing::Point(129, 201);
			this->Done->Name = L"Done";
			this->Done->Size = System::Drawing::Size(75, 23);
			this->Done->TabIndex = 7;
			this->Done->Text = L"Done";
			this->Done->UseVisualStyleBackColor = true;
			this->Done->Click += gcnew System::EventHandler(this, &EmpData::Done_Click);
			// 
			// EmpData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Done);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->VehicleBox);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->IDBox);
			this->Name = L"EmpData";
			this->Text = L"EmpData";
			this->Load += gcnew System::EventHandler(this, &EmpData::EmpData_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Del_Click(System::Object^  sender, System::EventArgs^  e) {
		ObjectsGetter::DeleteEmployee(id);
	}
private: System::Void EmpData_Load(System::Object^  sender, System::EventArgs^  e) {

	if (!s)
	{
		ObjectsGetter::initEmployees();
		Employee em = ObjectsGetter::GetEmployee(id);
		IDBox->Text = Convert::ToString(id);
		NameBox->Text = gcnew String(em.getName().c_str());
		VehicleBox->Text = gcnew String(em.getVehicleNumber().c_str());
	}
}
private: System::Void Done_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ x = NameBox->Text;
	string neww;
	for (int i = 0; i < x->Length; i++)
		neww += x[i];
	Employee ems = ObjectsGetter::GetEmployee(id);
	ems.setName(neww);
	x = VehicleBox->Text;
	neww = "";
	for (int i = 0; i < x->Length; i++)
		neww += x[i];
	ems.setVehicleNumber(neww);
	if(!s)ObjectsGetter::AddEmployeeById(ems);
	else ObjectsGetter::AddEmployee(ems);
}
};
}

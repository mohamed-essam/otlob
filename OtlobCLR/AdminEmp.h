#pragma once
#include "ObjectsGetter.h"

namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for AdminEmp
	/// </summary>
	public ref class AdminEmp : public System::Windows::Forms::Form
	{
	public:
		List<String^>^ list = gcnew List<String^>();
		AdminEmp(void)
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(53, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(564, 376);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminEmp::dataGridView1_CellContentClick);
			// 
			// AdminEmp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 479);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AdminEmp";
			this->Text = L"AdminEmp";
			this->Load += gcnew System::EventHandler(this, &AdminEmp::AdminEmp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminEmp_Load(System::Object^  sender, System::EventArgs^  e) {
		
		DataTable^ dt = gcnew DataTable();
		dt->Columns->Add("Names");
		for (int i = 0;i < ObjectsGetter::GetAllEmployee().size();i++)
		{
			string s = ObjectsGetter::GetAllEmployee()[i].getName();

			String^ ss = gcnew String(s.c_str()); 
			dt->Rows->Add(ss);
		}
		string s = "Abc";
		String^ ss = gcnew String(s.c_str());
		list->Add(ss);
		dt->Rows->Add(list);
		list->Clear();
		s = "Basdsa";
		ss = gcnew String(s.c_str());
		list->Add(ss);
		dt->Rows->Add(list);
		dataGridView1->DataSource = list;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	};
}

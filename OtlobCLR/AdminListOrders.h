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
	/// Summary for AdminListOrders
	/// </summary>
	public ref class AdminListOrders : public System::Windows::Forms::Form
	{
	public:
		property vector<Order> *v;
		AdminListOrders(vector<Order> *_v)
		{
			InitializeComponent();
			v = _v;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminListOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 105);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(435, 289);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminListOrders::dataGridView1_CellContentClick);
			// 
			// AdminListOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 442);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AdminListOrders";
			this->Text = L"AdminListOrders";
			this->Load += gcnew System::EventHandler(this, &AdminListOrders::AdminListOrders_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void AdminListOrders_Load(System::Object^  sender, System::EventArgs^  e) {
		//List<String^>^ items = gcnew List<String^>();
		//items->Add(Convert::ToString((*v)[0].getId()));
		//String^ S = "ID";
		//dataGridView1->Columns->Add();
		DataGridViewColumn^ C0 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C1 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C2 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C3 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C4 = gcnew DataGridViewColumn();
		DataGridViewCell^ Cell = gcnew DataGridViewTextBoxCell();

		C0->CellTemplate = Cell;
		C0->HeaderText = "ID";
		dataGridView1->Columns->Add(C0);

		C1->CellTemplate = Cell;
		C1->HeaderText = "User ID";
		dataGridView1->Columns->Add(C1);

		C2->CellTemplate = Cell;
		C2->HeaderText = "Restaurant ID";
		dataGridView1->Columns->Add(C2);

		C3->CellTemplate = Cell;
		C3->HeaderText = "Employee ID";
		dataGridView1->Columns->Add(C3);

		C4->CellTemplate = Cell;
		C4->HeaderText = "Canceled";
		dataGridView1->Columns->Add(C4);
		for (int i = 0; i < (*v).size(); i++)
		{
			cli::array<String^>^ aa = gcnew cli::array<String^>(5);
			aa[0] = Convert::ToString((*v)[i].getId());
			aa[1] = Convert::ToString((*v)[i].getUserid());
			aa[2] = Convert::ToString((*v)[i].getRestaurantid());
			aa[3] = Convert::ToString((*v)[i].getEmployeeid());
			aa[4] = Convert::ToString((*v)[i].getIscancelled());
			dataGridView1->Rows->Add(aa);
		}
	}
	};
}

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
		//ArrayList^ vv = gcnew ArrayList();
		DataTable^ t = gcnew DataTable();
		t->Columns->Add("ID");
		/*t->Columns->Add("User ID");
		t->Columns->Add("Restaurant ID");
		t->Columns->Add("Employee ID");
		t->Columns->Add("Is Cancelled");*/
		//dataGridView1->DataSource = v;
		*v = ObjectsGetter::GetAllOrders();
		for (int i = 0; i < v->size(); i++)
		{
			ArrayList ^r = gcnew ArrayList();
			String^ S = Convert::ToString((*v)[i].getId());
			r->Add(S);
			//r->Add((*v)[i].getId());
			/*r->Add((*v)[i].getUserid());
			r->Add((*v)[i].getRestaurantid());
			r->Add((*v)[i].getEmployeeid());
			r->Add((*v)[i].getIscancelled());
			t->Rows->Add(r);*/
		}
		ArrayList ^r = gcnew ArrayList();		
	}
	};
}

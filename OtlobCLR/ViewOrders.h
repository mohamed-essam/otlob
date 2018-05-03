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
	/// Summary for ViewOrders
	/// </summary>
	public ref class ViewOrders : public System::Windows::Forms::Form
	{
	public:
		property int userId; 
		ViewOrders(int id)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userId = id; 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewOrders()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewOrders::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(704, 438);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewOrders::dataGridView1_CellContentClick);
			// 
			// ViewOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(728, 462);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewOrders";
			this->Text = L"ViewOrders";
			this->Load += gcnew System::EventHandler(this, &ViewOrders::ViewOrders_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
	}
	private: System::Void ViewOrders_Load(System::Object^  sender, System::EventArgs^  e) {
		DataGridViewColumn^ C0 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C1 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C2 = gcnew DataGridViewColumn();
		DataGridViewCell^ Cell = gcnew DataGridViewTextBoxCell();
		//ObjectsGetter::initOrders(); 
		vector<Order> v =  ObjectsGetter::GetOrderByUser(ObjectsGetter::GetUser(userId)); 
		C0->CellTemplate = Cell;
		C0->HeaderText = "Name";
		dataGridView1->Columns->Add(C0);

		C1->CellTemplate = Cell;
		C1->HeaderText = "Amount of";
		dataGridView1->Columns->Add(C1);

		C2->CellTemplate = Cell;
		C2->HeaderText = "IsCanceled";
		dataGridView1->Columns->Add(C2);

		for (int i = 0; i < (v).size(); i++)
		{
			cli::array<String^>^ aa = gcnew cli::array<String^>(3);
			aa[0] = Convert::ToString((v)[i].getRestaurantid());
			aa[1] = Convert::ToString((v)[i].getAmountoff());
			aa[2] = Convert::ToString((v)[i].getIscancelled());
			
			dataGridView1->Rows->Add(aa);
		}
	}
};
}

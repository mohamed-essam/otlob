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
	/// Summary for AdminCheckItemsQuantity
	/// </summary>
	public ref class AdminCheckItemsQuantity : public System::Windows::Forms::Form
	{
	public:
		property vector<MenuItemM> *v;
		AdminCheckItemsQuantity(vector<MenuItemM> *_v)
		{
			InitializeComponent();
			v = _v;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminCheckItemsQuantity()
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
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(503, 415);
			this->dataGridView1->TabIndex = 0;
			// 
			// AdminCheckItemsQuantity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 439);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AdminCheckItemsQuantity";
			this->Text = L"AdminCheckItemsQuantity";
			this->Load += gcnew System::EventHandler(this, &AdminCheckItemsQuantity::AdminCheckItemsQuantity_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminCheckItemsQuantity_Load(System::Object^  sender, System::EventArgs^  e) {
		DataGridViewColumn^ C0 = gcnew DataGridViewColumn();
		DataGridViewColumn^ C1 = gcnew DataGridViewColumn();
		DataGridViewCell^ Cell = gcnew DataGridViewTextBoxCell();

		C0->CellTemplate = Cell;
		C0->HeaderText = "Name";
		dataGridView1->Columns->Add(C0);

		C1->CellTemplate = Cell;
		C1->HeaderText = "Quantity";
		dataGridView1->Columns->Add(C1);

		for (int i = 0; i < (*v).size(); i++)
		{
			cli::array<String^>^ aa = gcnew cli::array<String^>(2);
			aa[0] = gcnew String(((*v)[i].getName().c_str()));
			aa[1] = Convert::ToString((*v)[i].getQuantity());
			dataGridView1->Rows->Add(aa);
		}
	}
	};
}

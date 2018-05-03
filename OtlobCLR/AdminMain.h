#pragma once
#include "AdminShowOrders.h"
#include "AdminCheckItemsQuantity.h"
#include "AdminEmp.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMain
	/// </summary>
	public ref class AdminMain : public System::Windows::Forms::Form
	{
	public:
		AdminMain(void)
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
		~AdminMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ShowAllOrders;
	private: System::Windows::Forms::Button^  employeeButton;
	private: System::Windows::Forms::Button^  itemsButton;
	protected:

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
			this->ShowAllOrders = (gcnew System::Windows::Forms::Button());
			this->employeeButton = (gcnew System::Windows::Forms::Button());
			this->itemsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ShowAllOrders
			// 
			this->ShowAllOrders->Location = System::Drawing::Point(82, 76);
			this->ShowAllOrders->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ShowAllOrders->Name = L"ShowAllOrders";
			this->ShowAllOrders->Size = System::Drawing::Size(116, 42);
			this->ShowAllOrders->TabIndex = 0;
			this->ShowAllOrders->Text = L"Show All Orders";
			this->ShowAllOrders->UseVisualStyleBackColor = true;
			this->ShowAllOrders->Click += gcnew System::EventHandler(this, &AdminMain::ShowAllOrders_Click);
			// 
			// employeeButton
			// 
			this->employeeButton->Location = System::Drawing::Point(82, 145);
			this->employeeButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->employeeButton->Name = L"employeeButton";
			this->employeeButton->Size = System::Drawing::Size(116, 42);
			this->employeeButton->TabIndex = 1;
			this->employeeButton->Text = L"Show/Add/Remove Employee";
			this->employeeButton->UseVisualStyleBackColor = true;
			this->employeeButton->Click += gcnew System::EventHandler(this, &AdminMain::employeeButton_Click);
			// 
			// itemsButton
			// 
			this->itemsButton->Location = System::Drawing::Point(82, 218);
			this->itemsButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->itemsButton->Name = L"itemsButton";
			this->itemsButton->Size = System::Drawing::Size(116, 42);
			this->itemsButton->TabIndex = 2;
			this->itemsButton->Text = L"Check Items Quantity";
			this->itemsButton->UseVisualStyleBackColor = true;
			this->itemsButton->Click += gcnew System::EventHandler(this, &AdminMain::itemsButton_Click);
			// 
			// AdminMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 340);
			this->Controls->Add(this->itemsButton);
			this->Controls->Add(this->employeeButton);
			this->Controls->Add(this->ShowAllOrders);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AdminMain";
			this->Text = L"AdminMain";
			this->Load += gcnew System::EventHandler(this, &AdminMain::AdminMain_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ShowAllOrders_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminShowOrders^ F = gcnew AdminShowOrders();
		F->Show();
		this->Hide();
	}
	private: System::Void itemsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		vector<MenuItemM> v = ObjectsGetter::GetAllMenuITems();
		AdminCheckItemsQuantity ^F = gcnew AdminCheckItemsQuantity(&v);
		F->Show();
		this->Hide();
	}
	};
	private: System::Void employeeButton_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminEmp^ F = gcnew AdminEmp(this);
		F->Show();
		//this->Hide();
	}
};
}

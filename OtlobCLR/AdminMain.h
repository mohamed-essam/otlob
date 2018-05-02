#pragma once
#include "AdminShowOrders.h"
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
			this->ShowAllOrders->Location = System::Drawing::Point(109, 93);
			this->ShowAllOrders->Name = L"ShowAllOrders";
			this->ShowAllOrders->Size = System::Drawing::Size(155, 52);
			this->ShowAllOrders->TabIndex = 0;
			this->ShowAllOrders->Text = L"Show All Orders";
			this->ShowAllOrders->UseVisualStyleBackColor = true;
			this->ShowAllOrders->Click += gcnew System::EventHandler(this, &AdminMain::ShowAllOrders_Click);
			// 
			// employeeButton
			// 
			this->employeeButton->Location = System::Drawing::Point(109, 178);
			this->employeeButton->Name = L"employeeButton";
			this->employeeButton->Size = System::Drawing::Size(155, 52);
			this->employeeButton->TabIndex = 1;
			this->employeeButton->Text = L"Show/Add/Remove Employee";
			this->employeeButton->UseVisualStyleBackColor = true;
			// 
			// itemsButton
			// 
			this->itemsButton->Location = System::Drawing::Point(109, 268);
			this->itemsButton->Name = L"itemsButton";
			this->itemsButton->Size = System::Drawing::Size(155, 52);
			this->itemsButton->TabIndex = 2;
			this->itemsButton->Text = L"Check Items Quantity";
			this->itemsButton->UseVisualStyleBackColor = true;
			// 
			// AdminMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 419);
			this->Controls->Add(this->itemsButton);
			this->Controls->Add(this->employeeButton);
			this->Controls->Add(this->ShowAllOrders);
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
	};
}

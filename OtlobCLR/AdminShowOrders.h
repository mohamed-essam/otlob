#pragma once
#include <time.h>
#include "ObjectsGetter.h"
#include "AdminListOrders.h"

namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminShowOrders
	/// </summary>
	public ref class AdminShowOrders : public System::Windows::Forms::Form
	{
	public:
		AdminShowOrders(void)
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
		~AdminShowOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  dateButton;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;








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
			this->dateButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// dateButton
			// 
			this->dateButton->Location = System::Drawing::Point(128, 87);
			this->dateButton->Name = L"dateButton";
			this->dateButton->Size = System::Drawing::Size(200, 79);
			this->dateButton->TabIndex = 0;
			this->dateButton->Text = L"List Orders By Date";
			this->dateButton->UseVisualStyleBackColor = true;
			this->dateButton->Click += gcnew System::EventHandler(this, &AdminShowOrders::dateButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 79);
			this->button2->TabIndex = 1;
			this->button2->Text = L"List Order By User";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminShowOrders::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 208);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(128, 41);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// AdminShowOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 370);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateButton);
			this->Name = L"AdminShowOrders";
			this->Text = L"AdminShowOrders";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		ObjectsGetter::InitAll();
		String^ s = textBox1->Text;
		int id = Convert::ToInt32(s);
		User u = ObjectsGetter::GetUser(id);
		vector<Order> v = ObjectsGetter::GetOrderByUser(u);
		AdminListOrders^ F = gcnew AdminListOrders(&v);
		F->Show();
		this->Hide();
	}
	private: System::Void dateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime^ T = dateTimePicker1->Value;
		struct tm t = { 0 };
		t.tm_year = T->Year - 1900;
		t.tm_hour = T->Hour;
		t.tm_mday = T->Day;
		t.tm_min = T->Minute;
		t.tm_mon = T->Month - 1;
		t.tm_sec = T->Second;
		long long tt = mktime(&t);
		vector<Order> v = ObjectsGetter::GetOrderByRange(tt);
		AdminListOrders^ F = gcnew AdminListOrders(&v);
		F->Show();
		this->Hide();
	}
	};
}

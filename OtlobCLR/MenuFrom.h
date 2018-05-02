#pragma once
#include <msclr\marshal_cppstd.h>
#include "ObjectsGetter.h"
#include "listitem.h"

namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuFrom
	/// </summary>
	public ref class MenuFrom : public System::Windows::Forms::Form
	{
	public:
		MenuFrom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			loadMenu();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 67);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(610, 383);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuFrom::button1_Click);
			// 
			// MenuFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 462);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"MenuFrom";
			this->Text = L"MenuFrom";
			this->ResumeLayout(false);

		}

		void loadMenu()
		{
			listitem^ item = gcnew listitem("a",15,"C:\\Users\\MOody\\Desktop\\file\\a.jpg",10,1);
			listitem^ item2 = gcnew listitem("b", 25, "C:\\Users\\MOody\\Desktop\\file\\b.jpg", 10, 2);
			listitem^ item3 = gcnew listitem("c", 35, "C:\\Users\\MOody\\Desktop\\file\\a.jpg", 10, 3);
			listitem^ item1 = gcnew listitem("a", 15, "C:\\Users\\MOody\\Desktop\\file\\a.jpg", 10, 4);
			listitem^ item12 = gcnew listitem("b", 25, "C:\\Users\\MOody\\Desktop\\file\\b.jpg", 10, 5);
			listitem^ item13 = gcnew listitem("c", 35, "C:\\Users\\MOody\\Desktop\\file\\a.jpg", 10, 6);
			listitem^ item22 = gcnew listitem("a", 15, "C:\\Users\\MOody\\Desktop\\file\\a.jpg", 10, 7);
			listitem^ item222 = gcnew listitem("b", 25, "C:\\Users\\MOody\\Desktop\\file\\b.jpg", 10, 8);
			listitem^ item2223 = gcnew listitem("c", 35, "C:\\Users\\MOody\\Desktop\\file\\a.jpg", 10, 9);

			flowLayoutPanel1->Controls->Add(item);
			flowLayoutPanel1->Controls->Add(item2);
			flowLayoutPanel1->Controls->Add(item3);
			flowLayoutPanel1->Controls->Add(item1);
			flowLayoutPanel1->Controls->Add(item12);
			flowLayoutPanel1->Controls->Add(item13);
			flowLayoutPanel1->Controls->Add(item22);
			flowLayoutPanel1->Controls->Add(item222);
			flowLayoutPanel1->Controls->Add(item2223);
			//listView1->Items->Add(gcnew item);
		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		vector<CartItem> vec = Cart::getItems();
	}
	};
}

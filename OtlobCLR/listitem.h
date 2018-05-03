#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <string>
#include "Cart.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace std;
using namespace System::Drawing;

namespace OtlobCLR {

	/// <summary>
	/// Summary for listitem
	/// </summary>
	public ref class listitem : public System::Windows::Forms::UserControl
	{
	public:
		property int i;
		listitem(std::string name, int price, std::string picPath,int quantity,int id)
		{
			InitializeComponent();
			String ^ n = gcnew String(name.c_str());
			String ^ pic = gcnew String(picPath.c_str());
			load(n, pic, price,quantity);
			i = id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~listitem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Lname;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  Lprice;

	private: System::Windows::Forms::NumericUpDown^  count;
	private: System::Windows::Forms::Button^  add;



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
			this->Lname = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Lprice = (gcnew System::Windows::Forms::Label());
			this->count = (gcnew System::Windows::Forms::NumericUpDown());
			this->add = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count))->BeginInit();
			this->SuspendLayout();
			// 
			// Lname
			// 
			this->Lname->BackColor = System::Drawing::Color::White;
			this->Lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lname->Location = System::Drawing::Point(0, 0);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(168, 30);
			this->Lname->TabIndex = 0;
			this->Lname->Text = L"label1";
			this->Lname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Location = System::Drawing::Point(0, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Lprice
			// 
			this->Lprice->Location = System::Drawing::Point(0, 179);
			this->Lprice->Name = L"Lprice";
			this->Lprice->Size = System::Drawing::Size(46, 33);
			this->Lprice->TabIndex = 2;
			this->Lprice->Text = L"label2";
			this->Lprice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// count
			// 
			this->count->Location = System::Drawing::Point(52, 182);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(49, 20);
			this->count->TabIndex = 3;
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(118, 179);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(47, 30);
			this->add->TabIndex = 4;
			this->add->Text = L"add";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &listitem::On_Click);
			// 
			// listitem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->add);
			this->Controls->Add(this->count);
			this->Controls->Add(this->Lprice);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Lname);
			this->Name = L"listitem";
			this->Size = System::Drawing::Size(168, 212);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count))->EndInit();
			this->ResumeLayout(false);

		}
		void load(String ^ n, String ^ pic, int cost,int mx)
		{
			Lname->Text = n;
			pictureBox1->ImageLocation = pic;
			Lprice->Text = cost.ToString();
			count->Maximum = mx;
		}
#pragma endregion
	private: System::Void On_Click(System::Object^  sender, System::EventArgs^  e) {
		CartItem item;
		String^ x = count->Text;
		int q = Int32::Parse(x);
		item.setquantity(q);
		item.setVariationId(i);
		Cart::addItem(item);
	}
};
}

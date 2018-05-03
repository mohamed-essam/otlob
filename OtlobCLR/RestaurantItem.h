#pragma once
#include "MenuFrom.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OtlobCLR {

	/// <summary>
	/// Summary for RestaurantItem
	/// </summary>
	public ref class RestaurantItem : public System::Windows::Forms::UserControl
	{
	public:
		property int UID;
		property int RID;
		RestaurantItem(int rid,int uid,String^ name,String^ path)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UID = uid;
			RID = rid;
			load(name, path);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RestaurantItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Select";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RestaurantItem::button1_Click);
			// 
			// label1
			// 
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RestaurantItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"RestaurantItem";
			this->Size = System::Drawing::Size(161, 169);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		void load(String ^ Name, String ^ Pic)
		{
			label1->Text = Name;
			pictureBox1->ImageLocation = Pic;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MenuFrom^ m = gcnew MenuFrom(ObjectsGetter::GetRestaurant(RID),UID);
		m->Show();
	}
	};
}

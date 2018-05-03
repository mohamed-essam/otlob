#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OtlobCLR {

	/// <summary>
	/// Summary for OrderItems
	/// </summary>
	public ref class OrderItems : public System::Windows::Forms::UserControl
	{
	public:
		OrderItems(String ^ Name,String ^ Pic,String^ pric)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			label1->Text = Name;
			pictureBox1->ImageLocation = Pic;
			label2->Text = pric;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderItems()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 97);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OrderItems
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"OrderItems";
			this->Size = System::Drawing::Size(150, 161);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

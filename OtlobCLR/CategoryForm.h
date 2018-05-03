#pragma once
#include "CatIteam.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CategoryForm
	/// </summary>
	public ref class CategoryForm : public System::Windows::Forms::Form
	{
	public:
		CategoryForm(int usrId,String^ gov,String^ area)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			load(usrId,gov,area);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
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
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(728, 462);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// CategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 462);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"CategoryForm";
			this->Text = L"CategoryForm";
			this->ResumeLayout(false);

		}
		void load(int usrId, String^ gov, String^ area)
		{
			std::string x = msclr::interop::marshal_as<std::string>(gov);
			std::string y = msclr::interop::marshal_as<std::string>(area);
			vector<Category> vec = ObjectsGetter::GetAllCategories(x,y);
			for (auto i : vec)
			{
				String ^ nn = gcnew String(i.getName().c_str());
				CatIteam^ item = gcnew CatIteam(usrId, i.getId(), nn, gov, area);
				flowLayoutPanel1->Controls->Add(item);
			}
		
		}
#pragma endregion
	};
}

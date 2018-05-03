#pragma once
#include <msclr\marshal_cppstd.h>
#include "ObjectsGetter.h"
#include "RestaurantItem.h"

namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RestaurantsForm
	/// </summary>
	public ref class RestaurantsForm : public System::Windows::Forms::Form
	{
	public:
		RestaurantsForm(int usrId,String^ gov,String^ area,int cat)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			load(usrId, gov, area,cat);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RestaurantsForm()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RestaurantsForm::typeid));
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
			// RestaurantsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(728, 462);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"RestaurantsForm";
			this->Text = L"RestaurantsForm";
			this->ResumeLayout(false);

		}
		void load(int usrId, String ^ gov, String^ area,int cat)
		{
			std::string x = msclr::interop::marshal_as<std::string>(gov);
			std::string y = msclr::interop::marshal_as<std::string>(area);
			vector<Restaurant> vec = ObjectsGetter::GetAllRestaurants(x, y);
			for (auto i : vec)
			{
				if (cat != -1)
				{
					bool f = 0;
					for (auto j : i.getCategoriesIds())
						if (j == cat)f = 1;
					if (!f)continue;
				}
				String^ pp = gcnew String(i.getPicturePath().c_str());
				String^ nn = gcnew String(i.getName().c_str());
				RestaurantItem^ item = gcnew RestaurantItem(i.getId(), usrId, nn, pp);
				flowLayoutPanel1->Controls->Add(item);
			}
		}
#pragma endregion
	};
}

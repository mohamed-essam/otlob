#pragma once
#include <msclr\marshal_cppstd.h>
#include "CreatOrderForm.h"
#include "listitem.h"
#include <set>

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
		property int UID;
		property int RID;
		MenuFrom(Restaurant r,int uid)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UID = uid;
			RID = r.getId();
			Menuu u = ObjectsGetter::GetMenu(r.getMenuId());
			loadMenu(u);
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuFrom::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 67);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(704, 383);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuFrom::button1_Click);
			// 
			// MenuFrom
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(728, 462);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"MenuFrom";
			this->Text = L"MenuFrom";
			this->ResumeLayout(false);

		}

		void loadMenu(Menuu u)
		{
			vector<int> v = u.getMenucategoriesids();
			vector<MenuCategory> m;
			for (auto i : v)
				m.push_back(ObjectsGetter::GetMenuCategory(i));
			set<int> st;
			for (auto i : m)
				for (auto j : i.getMenuitemsids())
					st.insert(j);
			vector<MenuItemM> items;
			for (auto i : st)
				items.push_back(ObjectsGetter::GetMenuIteam(i));
			for (auto i : items)
			{
				vector<int> var = i.getVariationsids();
				for (auto j : var) 
				{
					Variation variation = ObjectsGetter::GetVaritation(j);
					listitem^ item = gcnew listitem(i.getName()+" "+variation.getName(), variation.getPrice(), i.getPicturepath(), i.getQuantity(), variation.getId());
					flowLayoutPanel1->Controls->Add(item);
				}
			}
		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//vector<CartItem> vec = Cart::getItems();
		CreatOrderForm^ m = gcnew CreatOrderForm(UID,RID);
		m->Show();
		this->Hide();
	}
			
	};
}

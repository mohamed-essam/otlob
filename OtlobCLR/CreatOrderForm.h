#pragma once
#include "ObjectsGetter.h"
#include "Cart.h"
#include "OrderItems.h"
namespace OtlobCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreatOrderForm
	/// </summary>
	public ref class CreatOrderForm : public System::Windows::Forms::Form
	{
	public:
		property int UID;
		property int RID;
		CreatOrderForm(int usrId,int rid)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UID = usrId;
			RID = rid;
			load();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreatOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatOrderForm::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(599, 347);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Visa";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatOrderForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(382, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cash";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreatOrderForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(247, 366);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Price";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CreatOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(623, 413);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"CreatOrderForm";
			this->Text = L"CreatOrderForm";
			this->ResumeLayout(false);

		}
		void load()
		{
			vector<CartItem> vec = Cart::getItems();
			int total = 0;
			for (auto i : vec)
			{
				Variation v = ObjectsGetter::GetVaritation(i.getVariationId());
				int q = i.getquantity();
				int price = v.getPrice();
				int tot = q*price;
				total += tot;
				MenuItemM m = ObjectsGetter::GetMenuIteam(v.getMenuitemid());
				String^ name = gcnew String(m.getName().c_str());
				String^ pic = gcnew String(m.getPicturepath().c_str());
				String^ x = gcnew String(tot.ToString());
				OrderItems^ item = gcnew OrderItems(name, pic, x);
				flowLayoutPanel1->Controls->Add(item);
			}
			String^ pp = gcnew String(total.ToString());
			label1->Text = pp;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		vector<Employee> vec = ObjectsGetter::GetAllEmployee();
		Order o;
		vector<Order> ord = ObjectsGetter::GetAllOrders();
		int idd = ord.size() + 1;
		o.setId(idd);
		o.setUserid(UID);
		o.setRestaurantid(RID);
		o.setTime(45);
		vector<CartItem> vecc = Cart::getItems();
		vector<int>items;
		for (auto i : vecc)
		{
			Variation v = ObjectsGetter::GetVaritation(i.getVariationId());
			MenuItemM m = ObjectsGetter::GetMenuIteam(v.getMenuitemid());
			items.push_back(m.getId());
		}
		o.setOrderitemsids(items);
		bool ff = 0;
		for (auto i : vec)
		{
			if (i.canTakeOrder())
			{
				o.setEmployeeid(i.getId());
				ObjectsGetter::AddOrder(o);
				i.addOrderId(idd);
				MessageBox::Show("Yout order will arive in at most 45 min.");
				ff = 1;
				break;
			}
		}
		if (!ff)
			MessageBox::Show("Sorry We have no employees right now!");
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	vector<Employee> vec = ObjectsGetter::GetAllEmployee();
	Order o;
	vector<Order> ord = ObjectsGetter::GetAllOrders();
	int idd = ord.size() + 1;
	o.setId(idd);
	o.setUserid(UID);
	o.setRestaurantid(RID);
	o.setTime(45);
	vector<CartItem> vecc = Cart::getItems();
	vector<int>items;
	for (auto i : vecc)
	{
		Variation v = ObjectsGetter::GetVaritation(i.getVariationId());
		MenuItemM m = ObjectsGetter::GetMenuIteam(v.getMenuitemid());
		items.push_back(m.getId());
	}
	o.setOrderitemsids(items);
	bool ff = 0;
	for (auto i : vec)
	{
		if (i.canTakeOrder())
		{
			o.setEmployeeid(i.getId());
			ObjectsGetter::AddOrder(o);
			i.addOrderId(idd);
			MessageBox::Show("Yout order will arive in at most 45 min.");
			ff = 1;
			break;
		}
	}
	if (!ff)
		MessageBox::Show("Sorry We have no employees right now!");
}
};
}

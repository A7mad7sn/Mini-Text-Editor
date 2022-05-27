#pragma once
//#include "Text File.h"

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();


			//
			//TODO: Add the constructor code here
			//

		}
		/*MyForm(String^dir)
		{
			InitializeComponent();

			label2->Text = dir;


		}*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel_title_bar;
	private: System::Windows::Forms::Panel^ panel_container;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pl_home;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ pl_opentxt;
	private: System::Windows::Forms::Panel^ pl_createtxt;
	private: System::Windows::Forms::Panel^ pl_info;
	private: System::Windows::Forms::Panel^ pl_op;
	private: System::Windows::Forms::Panel^ pl_addline;
	private: System::Windows::Forms::Panel^ pl_show;
	private: System::Windows::Forms::Panel^ pl_f_a_r;
	private: System::Windows::Forms::Panel^ pl_delete;













	private: System::Windows::Forms::Button^ button7;
		   Stream^ mystream;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ pl_update;


	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::Panel^ pl_insert;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ pl_findall;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button20;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ pl_pop;

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label20;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel_title_bar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel_container = (gcnew System::Windows::Forms::Panel());
			this->pl_op = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pl_home = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pl_f_a_r = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pl_show = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pl_insert = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pl_addline = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pl_createtxt = (gcnew System::Windows::Forms::Panel());
			this->pl_info = (gcnew System::Windows::Forms::Panel());
			this->pl_opentxt = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pl_update = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pl_delete = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pl_findall = (gcnew System::Windows::Forms::Panel());
			this->pl_pop = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel_title_bar->SuspendLayout();
			this->panel_container->SuspendLayout();
			this->pl_op->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pl_home->SuspendLayout();
			this->pl_f_a_r->SuspendLayout();
			this->pl_show->SuspendLayout();
			this->pl_insert->SuspendLayout();
			this->pl_addline->SuspendLayout();
			this->pl_opentxt->SuspendLayout();
			this->pl_update->SuspendLayout();
			this->panel9->SuspendLayout();
			this->pl_delete->SuspendLayout();
			this->pl_findall->SuspendLayout();
			this->pl_pop->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_title_bar
			// 
			this->panel_title_bar->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel_title_bar->Controls->Add(this->label1);
			this->panel_title_bar->Controls->Add(this->button6);
			this->panel_title_bar->Controls->Add(this->button4);
			this->panel_title_bar->Controls->Add(this->button3);
			this->panel_title_bar->Controls->Add(this->button5);
			this->panel_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title_bar->Location = System::Drawing::Point(0, 0);
			this->panel_title_bar->Name = L"panel_title_bar";
			this->panel_title_bar->Size = System::Drawing::Size(746, 44);
			this->panel_title_bar->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::NavajoWhite;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 44);
			this->label1->TabIndex = 3;
			this->label1->Text = L"MINI Text Editor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 44);
			this->button6->TabIndex = 2;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(570, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 44);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(628, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 44);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(687, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 44);
			this->button5->TabIndex = 2;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel_container
			// 
			this->panel_container->BackColor = System::Drawing::Color::MediumPurple;
			this->panel_container->Controls->Add(this->pl_home);
			this->panel_container->Controls->Add(this->pl_op);
			this->panel_container->Controls->Add(this->pl_f_a_r);
			this->panel_container->Controls->Add(this->pl_show);
			this->panel_container->Controls->Add(this->pl_insert);
			this->panel_container->Controls->Add(this->pl_addline);
			this->panel_container->Controls->Add(this->pl_createtxt);
			this->panel_container->Controls->Add(this->pl_info);
			this->panel_container->Controls->Add(this->pl_opentxt);
			this->panel_container->Controls->Add(this->pl_update);
			this->panel_container->Controls->Add(this->panel9);
			this->panel_container->Controls->Add(this->pl_delete);
			this->panel_container->Controls->Add(this->pl_findall);
			this->panel_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_container->Location = System::Drawing::Point(0, 0);
			this->panel_container->Name = L"panel_container";
			this->panel_container->Size = System::Drawing::Size(746, 480);
			this->panel_container->TabIndex = 4;
			// 
			// pl_op
			// 
			this->pl_op->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_op->Controls->Add(this->panel1);
			this->pl_op->Controls->Add(this->button15);
			this->pl_op->Controls->Add(this->button14);
			this->pl_op->Controls->Add(this->button13);
			this->pl_op->Controls->Add(this->button12);
			this->pl_op->Controls->Add(this->button11);
			this->pl_op->Controls->Add(this->button10);
			this->pl_op->Controls->Add(this->button9);
			this->pl_op->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_op->Location = System::Drawing::Point(0, 0);
			this->pl_op->Name = L"pl_op";
			this->pl_op->Size = System::Drawing::Size(746, 480);
			this->pl_op->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(0, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 104);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ink Free", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(226, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(294, 104);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Operations";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Location = System::Drawing::Point(46, 273);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(165, 49);
			this->button15->TabIndex = 1;
			this->button15->Text = L"Find And Replace";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Location = System::Drawing::Point(384, 380);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(165, 49);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Delete Line";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->Location = System::Drawing::Point(511, 273);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(165, 49);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Find All";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Location = System::Drawing::Point(162, 380);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(165, 49);
			this->button12->TabIndex = 1;
			this->button12->Text = L"Update Line";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Location = System::Drawing::Point(265, 224);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(199, 75);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Show Text";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Location = System::Drawing::Point(548, 181);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(165, 49);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Insert Line";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Location = System::Drawing::Point(22, 179);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 49);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Add Line";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pl_home
			// 
			this->pl_home->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_home->Controls->Add(this->button1);
			this->pl_home->Controls->Add(this->button2);
			this->pl_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_home->Location = System::Drawing::Point(0, 0);
			this->pl_home->Name = L"pl_home";
			this->pl_home->Size = System::Drawing::Size(746, 480);
			this->pl_home->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(71, 276);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 120);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Edit Text";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(387, 276);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 120);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Create a New Text";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pl_f_a_r
			// 
			this->pl_f_a_r->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_f_a_r->Controls->Add(this->button19);
			this->pl_f_a_r->Controls->Add(this->textBox5);
			this->pl_f_a_r->Controls->Add(this->textBox4);
			this->pl_f_a_r->Controls->Add(this->label17);
			this->pl_f_a_r->Controls->Add(this->label16);
			this->pl_f_a_r->Controls->Add(this->label6);
			this->pl_f_a_r->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_f_a_r->Location = System::Drawing::Point(0, 0);
			this->pl_f_a_r->Name = L"pl_f_a_r";
			this->pl_f_a_r->Size = System::Drawing::Size(746, 480);
			this->pl_f_a_r->TabIndex = 9;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(557, 404);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(157, 49);
			this->button19->TabIndex = 3;
			this->button19->Text = L"Replace";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(346, 210);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(270, 32);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(346, 288);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(270, 32);
			this->textBox4->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(24, 273);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(231, 59);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Replace With";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(93, 190);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 59);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Find";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(168, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(411, 59);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Find And Replace";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_show
			// 
			this->pl_show->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_show->Controls->Add(this->button18);
			this->pl_show->Controls->Add(this->richTextBox1);
			this->pl_show->Controls->Add(this->label5);
			this->pl_show->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_show->Location = System::Drawing::Point(0, 0);
			this->pl_show->Name = L"pl_show";
			this->pl_show->Size = System::Drawing::Size(746, 480);
			this->pl_show->TabIndex = 8;
			this->pl_show->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pl_show_Paint);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(576, 409);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(138, 47);
			this->button18->TabIndex = 2;
			this->button18->Text = L"Close";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(72, 143);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(615, 231);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->Font = (gcnew System::Drawing::Font(L"Ink Free", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(268, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 60);
			this->label5->TabIndex = 0;
			this->label5->Text = L"The Text";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_insert
			// 
			this->pl_insert->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_insert->Controls->Add(this->textBox3);
			this->pl_insert->Controls->Add(this->label15);
			this->pl_insert->Controls->Add(this->label14);
			this->pl_insert->Controls->Add(this->button17);
			this->pl_insert->Controls->Add(this->textBox2);
			this->pl_insert->Controls->Add(this->label8);
			this->pl_insert->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_insert->Location = System::Drawing::Point(0, 0);
			this->pl_insert->Name = L"pl_insert";
			this->pl_insert->Size = System::Drawing::Size(746, 480);
			this->pl_insert->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(369, 300);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 32);
			this->textBox3->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(12, 298);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(276, 34);
			this->label15->TabIndex = 4;
			this->label15->Text = L"The Number Of Line";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 218);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 34);
			this->label14->TabIndex = 4;
			this->label14->Text = L"The Line";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(596, 391);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(118, 62);
			this->button17->TabIndex = 3;
			this->button17->Text = L"Insert";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(512, 32);
			this->textBox2->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(226, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(294, 59);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Insert Line";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_addline
			// 
			this->pl_addline->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_addline->Controls->Add(this->button16);
			this->pl_addline->Controls->Add(this->textBox1);
			this->pl_addline->Controls->Add(this->label4);
			this->pl_addline->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_addline->Location = System::Drawing::Point(0, 0);
			this->pl_addline->Name = L"pl_addline";
			this->pl_addline->Size = System::Drawing::Size(746, 480);
			this->pl_addline->TabIndex = 7;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(271, 285);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(205, 58);
			this->button16->TabIndex = 2;
			this->button16->Text = L"Add";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Location = System::Drawing::Point(109, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(528, 32);
			this->textBox1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(255, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 59);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Add Line";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_createtxt
			// 
			this->pl_createtxt->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_createtxt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_createtxt->Location = System::Drawing::Point(0, 0);
			this->pl_createtxt->Name = L"pl_createtxt";
			this->pl_createtxt->Size = System::Drawing::Size(746, 480);
			this->pl_createtxt->TabIndex = 4;
			// 
			// pl_info
			// 
			this->pl_info->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_info->Location = System::Drawing::Point(0, 0);
			this->pl_info->Name = L"pl_info";
			this->pl_info->Size = System::Drawing::Size(746, 480);
			this->pl_info->TabIndex = 5;
			// 
			// pl_opentxt
			// 
			this->pl_opentxt->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_opentxt->Controls->Add(this->button8);
			this->pl_opentxt->Controls->Add(this->label2);
			this->pl_opentxt->Controls->Add(this->button7);
			this->pl_opentxt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_opentxt->Location = System::Drawing::Point(0, 0);
			this->pl_opentxt->Name = L"pl_opentxt";
			this->pl_opentxt->Size = System::Drawing::Size(746, 480);
			this->pl_opentxt->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Location = System::Drawing::Point(240, 285);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(242, 89);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Next";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(311, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(389, 31);
			this->label2->TabIndex = 2;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Location = System::Drawing::Point(81, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(188, 77);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Open";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pl_update
			// 
			this->pl_update->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_update->Controls->Add(this->button20);
			this->pl_update->Controls->Add(this->textBox7);
			this->pl_update->Controls->Add(this->textBox6);
			this->pl_update->Controls->Add(this->label9);
			this->pl_update->Controls->Add(this->label10);
			this->pl_update->Controls->Add(this->label13);
			this->pl_update->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_update->Location = System::Drawing::Point(0, 0);
			this->pl_update->Name = L"pl_update";
			this->pl_update->Size = System::Drawing::Size(746, 480);
			this->pl_update->TabIndex = 16;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(570, 397);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(129, 55);
			this->button20->TabIndex = 3;
			this->button20->Text = L"Update";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(136, 210);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(577, 32);
			this->textBox7->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(137, 321);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(577, 32);
			this->textBox6->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(236, 59);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Updated Line";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(38, 139);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(167, 59);
			this->label10->TabIndex = 1;
			this->label10->Text = L"New Line";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(216, 64);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(314, 59);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Update Line";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::MediumPurple;
			this->panel9->Controls->Add(this->label12);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(746, 480);
			this->panel9->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(255, 211);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(237, 59);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Add Line";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_delete
			// 
			this->pl_delete->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_delete->Controls->Add(this->button21);
			this->pl_delete->Controls->Add(this->textBox8);
			this->pl_delete->Controls->Add(this->label18);
			this->pl_delete->Controls->Add(this->label7);
			this->pl_delete->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_delete->Location = System::Drawing::Point(0, 0);
			this->pl_delete->Name = L"pl_delete";
			this->pl_delete->Size = System::Drawing::Size(746, 480);
			this->pl_delete->TabIndex = 10;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(541, 391);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(147, 51);
			this->button21->TabIndex = 3;
			this->button21->Text = L"Delete";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(203, 234);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(496, 32);
			this->textBox8->TabIndex = 2;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(14, 218);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(134, 59);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Line";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(208, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(330, 59);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Delete Line";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pl_findall
			// 
			this->pl_findall->BackColor = System::Drawing::Color::MediumPurple;
			this->pl_findall->Controls->Add(this->pl_pop);
			this->pl_findall->Controls->Add(this->button22);
			this->pl_findall->Controls->Add(this->textBox9);
			this->pl_findall->Controls->Add(this->label19);
			this->pl_findall->Controls->Add(this->label11);
			this->pl_findall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pl_findall->Location = System::Drawing::Point(0, 0);
			this->pl_findall->Name = L"pl_findall";
			this->pl_findall->Size = System::Drawing::Size(746, 480);
			this->pl_findall->TabIndex = 14;
			// 
			// pl_pop
			// 
			this->pl_pop->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pl_pop->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pl_pop->BackColor = System::Drawing::Color::CadetBlue;
			this->pl_pop->Controls->Add(this->textBox10);
			this->pl_pop->Controls->Add(this->button23);
			this->pl_pop->Controls->Add(this->label20);
			this->pl_pop->Location = System::Drawing::Point(185, 137);
			this->pl_pop->Name = L"pl_pop";
			this->pl_pop->Size = System::Drawing::Size(377, 190);
			this->pl_pop->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(155, 51);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(201, 32);
			this->textBox10->TabIndex = 2;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(131, 116);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(115, 48);
			this->button23->TabIndex = 0;
			this->button23->Text = L"Close";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(3, 33);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(139, 59);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Line Indexe";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(569, 375);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(129, 53);
			this->button22->TabIndex = 3;
			this->button22->Text = L"Find";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(326, 234);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(253, 32);
			this->textBox9->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->Font = (gcnew System::Drawing::Font(L"Ink Free", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(93, 218);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(126, 59);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Find";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(255, 63);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(237, 59);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Find All";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(746, 480);
			this->Controls->Add(this->panel_title_bar);
			this->Controls->Add(this->panel_container);
			this->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MINI Text Editor";
			this->panel_title_bar->ResumeLayout(false);
			this->panel_container->ResumeLayout(false);
			this->pl_op->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->pl_home->ResumeLayout(false);
			this->pl_f_a_r->ResumeLayout(false);
			this->pl_f_a_r->PerformLayout();
			this->pl_show->ResumeLayout(false);
			this->pl_insert->ResumeLayout(false);
			this->pl_insert->PerformLayout();
			this->pl_addline->ResumeLayout(false);
			this->pl_addline->PerformLayout();
			this->pl_opentxt->ResumeLayout(false);
			this->pl_update->ResumeLayout(false);
			this->pl_update->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->pl_delete->ResumeLayout(false);
			this->pl_delete->PerformLayout();
			this->pl_findall->ResumeLayout(false);
			this->pl_findall->PerformLayout();
			this->pl_pop->ResumeLayout(false);
			this->pl_pop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pl_opentxt->BringToFront();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pl_createtxt->BringToFront();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		pl_info->BringToFront();


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized)
		{
			this->WindowState = FormWindowState::Normal;
		}
		else
		{
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((mystream = openFileDialog1->OpenFile()) != nullptr)
			{
				String^ strfilename = openFileDialog1->FileName;
				String^ strfiledir = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

				this->label2->Text = strfiledir;

				mystream->Close();
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*String^ txt = label2->Text;
		using namespace std;
		using namespace System::IO;*/

		pl_op->BringToFront();
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_addline->BringToFront();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_insert->BringToFront();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_show->BringToFront();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_show->BringToFront();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_show->BringToFront();
	}
	private: System::Void pl_show_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_op->BringToFront();
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_show->BringToFront();
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_f_a_r->BringToFront();
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_update->BringToFront();
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		pl_show->BringToFront();
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_findall->BringToFront();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_delete->BringToFront();
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		pl_show->BringToFront();
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pl_op->BringToFront();
	}
	};
}

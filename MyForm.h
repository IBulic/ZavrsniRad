#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream> 
#include <iomanip>
#include <msclr\marshal_cppstd.h>
#include <string>

namespace ZavrsniRad {

	using namespace System;
	using namespace System::Windows;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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



	private: System::Windows::Forms::Button^  Open;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::OpenFileDialog^  openFD;
	private: System::Windows::Forms::SaveFileDialog^  saveFD;
	private: System::Windows::Forms::ComboBox^  antenaDropBox;
	private: System::Windows::Forms::CheckBox^  prikazSvihAntena;
	private: System::Windows::Forms::DataGridView^  dataTable;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckedListBox^  antenaDropboxG;
	private: System::Windows::Forms::CheckedListBox^  valueTypeGraph;
	private: System::Windows::Forms::ComboBox^  valueType;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  prikazViseGrafova;
	private: System::Windows::Forms::Label^  xNaslov;
	private: System::Windows::Forms::Label^  yNaslov1;
	private: System::Windows::Forms::Button^  drawButton;
	private: System::Windows::Forms::ImageList^  iconList;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  grafNaslov;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Label^  mjernaJedinicaLabela;
	private: System::Windows::Forms::ComboBox^  mjerneJedinice;
	private: System::Windows::Forms::Label^  yNaslov4;
	private: System::Windows::Forms::Label^  yNaslov3;
	private: System::Windows::Forms::Label^  yNaslov2;
	private: System::ComponentModel::IContainer^  components;



	protected:



	protected:

	private:

		/// <summary>

		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->Open = (gcnew System::Windows::Forms::Button());
			this->iconList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFD = (gcnew System::Windows::Forms::SaveFileDialog());
			this->antenaDropBox = (gcnew System::Windows::Forms::ComboBox());
			this->prikazSvihAntena = (gcnew System::Windows::Forms::CheckBox());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->antenaDropboxG = (gcnew System::Windows::Forms::CheckedListBox());
			this->valueTypeGraph = (gcnew System::Windows::Forms::CheckedListBox());
			this->valueType = (gcnew System::Windows::Forms::ComboBox());
			this->prikazViseGrafova = (gcnew System::Windows::Forms::CheckBox());
			this->xNaslov = (gcnew System::Windows::Forms::Label());
			this->yNaslov1 = (gcnew System::Windows::Forms::Label());
			this->drawButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->mjernaJedinicaLabela = (gcnew System::Windows::Forms::Label());
			this->mjerneJedinice = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->yNaslov4 = (gcnew System::Windows::Forms::Label());
			this->yNaslov3 = (gcnew System::Windows::Forms::Label());
			this->yNaslov2 = (gcnew System::Windows::Forms::Label());
			this->grafNaslov = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// Open
			// 
			this->Open->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Open->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Open->ImageIndex = 0;
			this->Open->ImageList = this->iconList;
			this->Open->Location = System::Drawing::Point(1, 1);
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(49, 41);
			this->Open->TabIndex = 3;
			this->Open->Text = L"Open";
			this->Open->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Open->UseVisualStyleBackColor = true;
			this->Open->Click += gcnew System::EventHandler(this, &MyForm::Open_Click);
			// 
			// iconList
			// 
			this->iconList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"iconList.ImageStream")));
			this->iconList->TransparentColor = System::Drawing::Color::Transparent;
			this->iconList->Images->SetKeyName(0, L"openIcon.png");
			this->iconList->Images->SetKeyName(1, L"saveIcon.png");
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->saveBtn);
			this->splitContainer1->Panel1->Controls->Add(this->Open);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Size = System::Drawing::Size(1263, 46);
			this->splitContainer1->SplitterDistance = 109;
			this->splitContainer1->TabIndex = 6;
			// 
			// saveBtn
			// 
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->saveBtn->ImageIndex = 1;
			this->saveBtn->ImageList = this->iconList;
			this->saveBtn->Location = System::Drawing::Point(56, 1);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(49, 41);
			this->saveBtn->TabIndex = 4;
			this->saveBtn->Text = L"Save";
			this->saveBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1140, 13);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->splitContainer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1263, 46);
			this->panel1->TabIndex = 7;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BorderlineColor = System::Drawing::Color::Gray;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(79, 30);
			this->chart1->Name = L"chart1";
			this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->chart1->Size = System::Drawing::Size(883, 359);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			// 
			// openFD
			// 
			this->openFD->FileName = L"openFD";
			this->openFD->Filter = L"Txt file|*.txt";
			this->openFD->Title = L"Open a file";
			// 
			// saveFD
			// 
			this->saveFD->FileName = L"saveFD";
			this->saveFD->Filter = L".tiff|*.tiff|.bpm|*.bpm|.png|*.png|.jpeg|*.jpeg";
			this->saveFD->FilterIndex = 4;
			this->saveFD->Title = L"Save file as";
			// 
			// antenaDropBox
			// 
			this->antenaDropBox->BackColor = System::Drawing::SystemColors::Window;
			this->antenaDropBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->antenaDropBox->Enabled = false;
			this->antenaDropBox->Location = System::Drawing::Point(20, 61);
			this->antenaDropBox->Name = L"antenaDropBox";
			this->antenaDropBox->Size = System::Drawing::Size(91, 21);
			this->antenaDropBox->TabIndex = 13;
			this->antenaDropBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::antenaDropBox_SelectedIndexChanged);
			// 
			// prikazSvihAntena
			// 
			this->prikazSvihAntena->AutoSize = true;
			this->prikazSvihAntena->Checked = true;
			this->prikazSvihAntena->CheckState = System::Windows::Forms::CheckState::Checked;
			this->prikazSvihAntena->Enabled = false;
			this->prikazSvihAntena->Location = System::Drawing::Point(12, 19);
			this->prikazSvihAntena->Name = L"prikazSvihAntena";
			this->prikazSvihAntena->Size = System::Drawing::Size(114, 17);
			this->prikazSvihAntena->TabIndex = 16;
			this->prikazSvihAntena->Text = L"Prikaz svih Antena";
			this->prikazSvihAntena->UseVisualStyleBackColor = true;
			this->prikazSvihAntena->Click += gcnew System::EventHandler(this, &MyForm::prikazSvihAntena_Click);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AllowUserToResizeColumns = false;
			this->dataTable->AllowUserToResizeRows = false;
			this->dataTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Location = System::Drawing::Point(6, 19);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 100;
			this->dataTable->Size = System::Drawing::Size(1234, 202);
			this->dataTable->TabIndex = 9;
			this->dataTable->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataTable_RowHeaderMouseClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->dataTable);
			this->groupBox1->Location = System::Drawing::Point(5, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1246, 227);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tablica vrijednosti";
			// 
			// antenaDropboxG
			// 
			this->antenaDropboxG->Enabled = false;
			this->antenaDropboxG->FormattingEnabled = true;
			this->antenaDropboxG->Location = System::Drawing::Point(20, 88);
			this->antenaDropboxG->Name = L"antenaDropboxG";
			this->antenaDropboxG->Size = System::Drawing::Size(90, 94);
			this->antenaDropboxG->TabIndex = 18;
			// 
			// valueTypeGraph
			// 
			this->valueTypeGraph->Enabled = false;
			this->valueTypeGraph->FormattingEnabled = true;
			this->valueTypeGraph->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Re", L"Im", L"Abs", L"Phi" });
			this->valueTypeGraph->Location = System::Drawing::Point(20, 88);
			this->valueTypeGraph->Name = L"valueTypeGraph";
			this->valueTypeGraph->Size = System::Drawing::Size(90, 94);
			this->valueTypeGraph->TabIndex = 19;
			// 
			// valueType
			// 
			this->valueType->BackColor = System::Drawing::SystemColors::Window;
			this->valueType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->valueType->Enabled = false;
			this->valueType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Re", L"Im", L"Abs", L"Phi" });
			this->valueType->Location = System::Drawing::Point(20, 61);
			this->valueType->Name = L"valueType";
			this->valueType->Size = System::Drawing::Size(91, 21);
			this->valueType->TabIndex = 20;
			this->valueType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::valueType_SelectedIndexChanged);
			// 
			// prikazViseGrafova
			// 
			this->prikazViseGrafova->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->prikazViseGrafova->AutoSize = true;
			this->prikazViseGrafova->Enabled = false;
			this->prikazViseGrafova->Location = System::Drawing::Point(64, 19);
			this->prikazViseGrafova->Name = L"prikazViseGrafova";
			this->prikazViseGrafova->Size = System::Drawing::Size(130, 17);
			this->prikazViseGrafova->TabIndex = 21;
			this->prikazViseGrafova->Text = L"Prikaz sa vise grafova";
			this->prikazViseGrafova->UseVisualStyleBackColor = true;
			this->prikazViseGrafova->CheckedChanged += gcnew System::EventHandler(this, &MyForm::prikazViseGrafova_CheckedChanged);
			// 
			// xNaslov
			// 
			this->xNaslov->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->xNaslov->Location = System::Drawing::Point(65, 392);
			this->xNaslov->Name = L"xNaslov";
			this->xNaslov->Size = System::Drawing::Size(897, 13);
			this->xNaslov->TabIndex = 23;
			this->xNaslov->Text = L"Prostorni Cvor [Index]";
			this->xNaslov->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// yNaslov1
			// 
			this->yNaslov1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->yNaslov1->Location = System::Drawing::Point(6, 168);
			this->yNaslov1->Name = L"yNaslov1";
			this->yNaslov1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yNaslov1->Size = System::Drawing::Size(67, 13);
			this->yNaslov1->TabIndex = 24;
			// 
			// drawButton
			// 
			this->drawButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->drawButton->Enabled = false;
			this->drawButton->Location = System::Drawing::Point(75, 257);
			this->drawButton->MaximumSize = System::Drawing::Size(119, 32);
			this->drawButton->MinimumSize = System::Drawing::Size(119, 32);
			this->drawButton->Name = L"drawButton";
			this->drawButton->Size = System::Drawing::Size(119, 32);
			this->drawButton->TabIndex = 25;
			this->drawButton->Text = L"Nacrtaj";
			this->drawButton->UseVisualStyleBackColor = true;
			this->drawButton->Click += gcnew System::EventHandler(this, &MyForm::drawButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->drawButton);
			this->groupBox3->Controls->Add(this->prikazViseGrafova);
			this->groupBox3->Location = System::Drawing::Point(989, 275);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(262, 408);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Kontrole za graf";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->mjernaJedinicaLabela);
			this->groupBox2->Controls->Add(this->mjerneJedinice);
			this->groupBox2->Location = System::Drawing::Point(1, 295);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 113);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mjerne jedinice";
			// 
			// mjernaJedinicaLabela
			// 
			this->mjernaJedinicaLabela->AutoSize = true;
			this->mjernaJedinicaLabela->Location = System::Drawing::Point(48, 28);
			this->mjernaJedinicaLabela->Name = L"mjernaJedinicaLabela";
			this->mjernaJedinicaLabela->Size = System::Drawing::Size(192, 13);
			this->mjernaJedinicaLabela->TabIndex = 22;
			this->mjernaJedinicaLabela->Text = L"Mjerna jedinica y-koordinate (osim faze)";
			// 
			// mjerneJedinice
			// 
			this->mjerneJedinice->BackColor = System::Drawing::SystemColors::Window;
			this->mjerneJedinice->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mjerneJedinice->Enabled = false;
			this->mjerneJedinice->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"kA", L"A", L"mA", L"µA", L"nA", L"pA" });
			this->mjerneJedinice->Location = System::Drawing::Point(85, 57);
			this->mjerneJedinice->Name = L"mjerneJedinice";
			this->mjerneJedinice->Size = System::Drawing::Size(90, 21);
			this->mjerneJedinice->TabIndex = 21;
			this->mjerneJedinice->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::mjerneJedinice_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->prikazSvihAntena);
			this->groupBox5->Controls->Add(this->antenaDropBox);
			this->groupBox5->Controls->Add(this->antenaDropboxG);
			this->groupBox5->Location = System::Drawing::Point(131, 51);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(131, 200);
			this->groupBox5->TabIndex = 27;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Antene";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->valueType);
			this->groupBox4->Controls->Add(this->valueTypeGraph);
			this->groupBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox4->Location = System::Drawing::Point(0, 51);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(131, 200);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dio kompleksnog broja";
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox6->Controls->Add(this->yNaslov4);
			this->groupBox6->Controls->Add(this->yNaslov3);
			this->groupBox6->Controls->Add(this->yNaslov2);
			this->groupBox6->Controls->Add(this->grafNaslov);
			this->groupBox6->Controls->Add(this->chart1);
			this->groupBox6->Controls->Add(this->xNaslov);
			this->groupBox6->Controls->Add(this->yNaslov1);
			this->groupBox6->Location = System::Drawing::Point(5, 275);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(978, 408);
			this->groupBox6->TabIndex = 28;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Graf";
			// 
			// yNaslov4
			// 
			this->yNaslov4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->yNaslov4->Location = System::Drawing::Point(6, 243);
			this->yNaslov4->Name = L"yNaslov4";
			this->yNaslov4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yNaslov4->Size = System::Drawing::Size(67, 13);
			this->yNaslov4->TabIndex = 28;
			// 
			// yNaslov3
			// 
			this->yNaslov3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->yNaslov3->Location = System::Drawing::Point(6, 218);
			this->yNaslov3->Name = L"yNaslov3";
			this->yNaslov3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yNaslov3->Size = System::Drawing::Size(67, 13);
			this->yNaslov3->TabIndex = 27;
			// 
			// yNaslov2
			// 
			this->yNaslov2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->yNaslov2->Location = System::Drawing::Point(6, 193);
			this->yNaslov2->Name = L"yNaslov2";
			this->yNaslov2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->yNaslov2->Size = System::Drawing::Size(67, 13);
			this->yNaslov2->TabIndex = 26;
			// 
			// grafNaslov
			// 
			this->grafNaslov->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->grafNaslov->Location = System::Drawing::Point(65, 14);
			this->grafNaslov->Name = L"grafNaslov";
			this->grafNaslov->Size = System::Drawing::Size(897, 13);
			this->grafNaslov->TabIndex = 25;
			this->grafNaslov->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 695);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(300, 734);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		int i;
		int const numpoints = 36;
		bool graphOpen = false;
		int pickedRow = 0;
		int lastScale = 1;
		int currentValueInTable = 0;
#pragma endregion
			//BASICLLY SAME METHODES (Open_Click,valueType_TextChanged)
	private: System::Void Open_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Open file dialog and choose the file
			mjerneJedinice->SelectedIndex = 1;
			valueType->SelectedIndex = 0;
			openFD->InitialDirectory = "./";
			openFD->FileName = "";

			if (openFD->ShowDialog() == Windows::Forms::DialogResult::Cancel)
			{
				return;
			}
			label1->Text = openFD->FileName;
			//

			delete_chart();
			set_table();
			set_firstGraph();
			if (prikazSvihAntena->Checked == true) {
				antenaDropBox->Enabled = false;
				antenaDropboxG->Enabled = false;
			}
			pickedRow = 0;
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Failed to open file");
		}
	}

	private: System::Void valueType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		//Open the chosen file
		ifstream currentFile;
		string fileName = msclr::interop::marshal_as<std::string>(openFD->FileName);
		currentFile.open(fileName);

		if (!graphOpen)
		{
			return;
		}
		if (!currentFile.is_open()) {
			MessageBox::Show("Failed to open file");
			return;
		}
		//
		set_tableAndGraph();
		dataTable->SelectedCells[0]->Selected = false;
		dataTable->Rows[pickedRow]->Selected = true;
		//
	}
			//
	private: void set_tableAndGraph()	{
		//Open the chosen file
		ifstream currentFile;
		string fileName = msclr::interop::marshal_as<std::string>(openFD->FileName);
		currentFile.open(fileName);
		int numOfAntennas = 0;

		if (!currentFile.is_open()) {
			MessageBox::Show("Failed to open file");
			return;
		}
		//

		//Clear the table
		this->dataTable->ColumnCount = 0;
		this->dataTable->RowCount = 1;
		//

		//Read the file
		string lineInFile, tempString, frek, reFrek, imFrek, absFrek, phi;
		String^ converted;
		double prostorX = 0;
		int lenghtOfLine = 0, numOfColumns = 0, numOfRows = 0, antena = 0, frekCvor = 0, prostCvor = 0, currentData = 0,  maxProstCvor=0 , currentColumn=0;/*nova varijabla numOfAntennas*/

		getline(currentFile, lineInFile);
		while (getline(currentFile, lineInFile)) //Every line in a file is a while iterration
		{
			lineInFile.push_back(' ');
			lenghtOfLine = lineInFile.length();
			for (int i = 0; i < lenghtOfLine; i++)
			{
				if (lineInFile[i] == ' ')
				{
					if (i == 0)
					{
						tempString.clear();
						continue;
					}

					if (lineInFile[i - 1] != ' ')
					{
						currentData++;
						switch (currentData) //1 = antena , 2 = frekCvor, 3 = prostCvor , 4 = frek , 5 = reFrek , 6 = imFrek , 7 = absFrek , 8 = phi
						{
						case 1:
							antena = stoi(tempString);
							if (numOfAntennas < antena)/*nova varijabla numOfAntennas dobiva vrijednost*/
							{
								numOfAntennas = antena;
							}
							break;
						case 2:
							frekCvor = stoi(tempString);
							break;
						case 3:
							prostCvor = stoi(tempString);
							break;
						case 4:
							prostorX = stod(tempString);
							break;
						case 5:
							frek = tempString;
							break;
						case 6:
							reFrek = tempString;
							break;
						case 7:
							imFrek = tempString;
							break;
						case 8:
							absFrek = tempString;
							break;
						case 9:
							phi = tempString;
							break;
						default:
							break;
						}
					}

					tempString.clear();
					continue;
				}
				tempString.append(&lineInFile[i], 1);
			}
			//Adding antena items to the dropdown picker
			antenaDropBox->Items->Clear();/*izbrise antena dropbox*/
			antenaDropboxG->Items->Clear();
			for (int i = 0;i < numOfAntennas;i++)/*Postavljanje itema unutar antena dropdowna*/
			{
				antenaDropBox->Items->Add(i + 1);
				antenaDropboxG->Items->Add(i + 1);
			}
			//
			//Setting which values to show based on how many antenas are there
			//
			//Set rows and columns
			if (prostCvor > maxProstCvor)
			{
				currentColumn = prostCvor;
				maxProstCvor = prostCvor;
				if (numOfColumns < prostCvor)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = prostCvor.ToString();
				}
			}
			else 
			{
				currentColumn = (prostCvor + ((antena - 1) * maxProstCvor));
				if (numOfColumns < currentColumn)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = currentColumn.ToString();
				}
			}
			if (numOfRows < frekCvor)
			{
				converted = gcnew String(frek.c_str());
				numOfRows++;
				this->dataTable->RowCount = numOfRows;
				this->dataTable->Rows[numOfRows - 1]->HeaderCell->Value = converted->ToString();
			}
			//Sets value of cells depending on the selected value type(Re,Im,Abs,Phi). Defaulted to Re.
			if (currentColumn > maxProstCvor)
			{
				switch (valueType->SelectedIndex)
				{
					case 0:
						converted = gcnew String(reFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
						break;
					case 1:
						converted = gcnew String(imFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
						break;
					case 2:
						converted = gcnew String(absFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
						break;
					case 3:
						converted = gcnew String(phi.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
						break;
					default:
						converted = gcnew String(reFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
						break;
				}
			}
			else
			{
				switch (valueType->SelectedIndex)
				{
					case 0:
						converted = gcnew String(reFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
						break;
					case 1:
						converted = gcnew String(imFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
						break;
					case 2:
						converted = gcnew String(absFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
						break;
					case 3:
						converted = gcnew String(phi.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
						break;
					default:
						converted = gcnew String(reFrek.c_str());
						this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
						break;
				}
			}
			//
			currentData = 0;
		}
		currentFile.close();
		//
		//Drawing the graph for first row
		delete_chart();
		draw_OneGraph(valueType->SelectedIndex,true,0);
		graphOpen = true;
		//

		if (numOfAntennas > 1)
		{
			prikazSvihAntena->Enabled = true;
			antenaDropboxG->Enabled = false;			
			antenaDropBox->Enabled = false;
		}
		else
		{
			prikazSvihAntena->Enabled = false;
			antenaDropBox->Enabled = false;
			antenaDropboxG->Enabled = false;
		}

		currentValueInTable = valueType->SelectedIndex;
		columns_NotSortable();
		prikazSvihAntena->Checked=true;
	}

	//ista funkcija samo sta zapisuje u tablicu odredeni tip vrijednosti
	private: void set_table(int selectedValue){
		//Open the chosen file
		ifstream currentFile;
		string fileName = msclr::interop::marshal_as<std::string>(openFD->FileName);
		currentFile.open(fileName);
		int numOfAntennas = 0;

		if (!currentFile.is_open()) {
			MessageBox::Show("Failed to open file");
			return;
		}
		//

		//Clear the table
		this->dataTable->ColumnCount = 0;
		this->dataTable->RowCount = 1;
		//

		//Read the file
		string lineInFile, tempString, frek, reFrek, imFrek, absFrek, phi;
		String^ converted;
		double prostorX = 0;
		int lenghtOfLine = 0, numOfColumns = 0, numOfRows = 0, antena = 0, frekCvor = 0, prostCvor = 0, currentData = 0, maxProstCvor = 0, currentColumn = 0;/*nova varijabla numOfAntennas*/

		getline(currentFile, lineInFile);
		while (getline(currentFile, lineInFile)) //Every line in a file is a while iterration
		{
			lineInFile.push_back(' ');
			lenghtOfLine = lineInFile.length();
			for (int i = 0; i < lenghtOfLine; i++)
			{
				if (lineInFile[i] == ' ')
				{
					if (i == 0)
					{
						tempString.clear();
						continue;
					}

					if (lineInFile[i - 1] != ' ')
					{
						currentData++;
						switch (currentData) //1 = antena , 2 = frekCvor, 3 = prostCvor , 4 = frek , 5 = reFrek , 6 = imFrek , 7 = absFrek , 8 = phi
						{
						case 1:
							antena = stoi(tempString);
							if (numOfAntennas < antena)/*nova varijabla numOfAntennas dobiva vrijednost*/
							{
								numOfAntennas = antena;
							}
							break;
						case 2:
							frekCvor = stoi(tempString);
							break;
						case 3:
							prostCvor = stoi(tempString);
							break;
						case 4:
							prostorX = stod(tempString);
							break;
						case 5:
							frek = tempString;
							break;
						case 6:
							reFrek = tempString;
							break;
						case 7:
							imFrek = tempString;
							break;
						case 8:
							absFrek = tempString;
							break;
						case 9:
							phi = tempString;
							break;
						default:
							break;
						}
					}

					tempString.clear();
					continue;
				}
				tempString.append(&lineInFile[i], 1);
			}

			//Set rows and columns
			if (prostCvor > maxProstCvor) //dodavanje stupaca ovisno o broju antena
			{
				currentColumn = prostCvor;
				maxProstCvor = prostCvor;
				if (numOfColumns < prostCvor)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = prostCvor.ToString();
				}
			}
			else
			{
				currentColumn = (prostCvor + ((antena - 1) * maxProstCvor));
				if (numOfColumns < currentColumn)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = currentColumn.ToString();
				}
			}
			if (numOfRows < frekCvor) //dodavanje redaka
			{
				converted = gcnew String(frek.c_str());
				numOfRows++;
				this->dataTable->RowCount = numOfRows;
				this->dataTable->Rows[numOfRows - 1]->HeaderCell->Value = converted->ToString();
			}
			//Sets value of cells depending on the selected value type(Re,Im,Abs,Phi). Defaulted to Re.
			if (currentColumn > maxProstCvor) //Uvrstavanje u tablicu ovisno o broju antena
			{
				switch (selectedValue)
				{
				case 0:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 1:
					converted = gcnew String(imFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 2:
					converted = gcnew String(absFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 3:
					converted = gcnew String(phi.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				default:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				}
			}
			else
			{
				switch (selectedValue)
				{
				case 0:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 1:
					converted = gcnew String(imFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 2:
					converted = gcnew String(absFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 3:
					converted = gcnew String(phi.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				default:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				}
			}
			//
			currentData = 0;
		}
		currentFile.close();
		//
		columns_NotSortable();
		dataTable->SelectedCells[0]->Selected = false;
		dataTable->Rows[pickedRow]->Selected = true;
		currentValueInTable = selectedValue;
	}

	private: void set_table() {
		//Open the chosen file
		ifstream currentFile;
		string fileName = msclr::interop::marshal_as<std::string>(openFD->FileName);
		currentFile.open(fileName);
		int numOfAntennas = 0;

		if (!currentFile.is_open()) {
			MessageBox::Show("Failed to open file");
			return;
		}
		//

		//Clear the table
		this->dataTable->ColumnCount = 0;
		this->dataTable->RowCount = 1;
		//

		//Read the file
		string lineInFile, tempString, frek, reFrek, imFrek, absFrek, phi;
		String^ converted;
		double prostorX = 0;
		int lenghtOfLine = 0, numOfColumns = 0, numOfRows = 0, antena = 0, frekCvor = 0, prostCvor = 0, currentData = 0, maxProstCvor = 0, currentColumn = 0;/*nova varijabla numOfAntennas*/

		getline(currentFile, lineInFile);
		while (getline(currentFile, lineInFile)) //Every line in a file is a while iterration
		{
			lineInFile.push_back(' ');
			lenghtOfLine = lineInFile.length();
			for (int i = 0; i < lenghtOfLine; i++)
			{
				if (lineInFile[i] == ' ')
				{
					if (i == 0)
					{
						tempString.clear();
						continue;
					}

					if (lineInFile[i - 1] != ' ')
					{
						currentData++;
						switch (currentData) //1 = antena , 2 = frekCvor, 3 = prostCvor , 4 = frek , 5 = reFrek , 6 = imFrek , 7 = absFrek , 8 = phi
						{
						case 1:
							antena = stoi(tempString);
							if (numOfAntennas < antena)/*nova varijabla numOfAntennas dobiva vrijednost*/
							{
								numOfAntennas = antena;
							}
							break;
						case 2:
							frekCvor = stoi(tempString);
							break;
						case 3:
							prostCvor = stoi(tempString);
							break;
						case 4:
							prostorX = stod(tempString);
							break;
						case 5:
							frek = tempString;
							break;
						case 6:
							reFrek = tempString;
							break;
						case 7:
							imFrek = tempString;
							break;
						case 8:
							absFrek = tempString;
							break;
						case 9:
							phi = tempString;
							break;
						default:
							break;
						}
					}

					tempString.clear();
					continue;
				}
				tempString.append(&lineInFile[i], 1);
			}
			//Adding antena items to the dropdown picker
			antenaDropBox->Items->Clear();/*izbrise antena dropbox*/
			antenaDropboxG->Items->Clear();
			for (int i = 0; i < numOfAntennas; i++)/*Postavljanje itema unutar antena dropdowna*/
			{
				antenaDropBox->Items->Add(i + 1);
				antenaDropboxG->Items->Add(i + 1);
			}
			//
			//Setting which values to show based on how many antenas are there
			//
			//Set rows and columns
			if (prostCvor > maxProstCvor) //dodavanje stupaca ovisno o broju antena
			{
				currentColumn = prostCvor;
				maxProstCvor = prostCvor;
				if (numOfColumns < prostCvor)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = prostCvor.ToString();
				}
			}
			else
			{
				currentColumn = (prostCvor + ((antena - 1) * maxProstCvor));
				if (numOfColumns < currentColumn)
				{
					numOfColumns++;
					this->dataTable->ColumnCount = numOfColumns;
					this->dataTable->Columns[numOfColumns - 1]->HeaderText = currentColumn.ToString();
				}
			}
			if (numOfRows < frekCvor) //dodavanje redaka
			{
				converted = gcnew String(frek.c_str());
				numOfRows++;
				this->dataTable->RowCount = numOfRows;
				this->dataTable->Rows[numOfRows - 1]->HeaderCell->Value = converted->ToString();
			}
			//Sets value of cells depending on the selected value type(Re,Im,Abs,Phi). Defaulted to Re.
			if (currentColumn > maxProstCvor) //Uvrstavanje u tablicu ovisno o broju antena
			{
				switch (valueType->SelectedIndex)
				{
				case 0:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 1:
					converted = gcnew String(imFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 2:
					converted = gcnew String(absFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				case 3:
					converted = gcnew String(phi.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				default:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[currentColumn - 1]->Value = converted->ToString();
					break;
				}
			}
			else
			{
				switch (valueType->SelectedIndex)
				{
				case 0:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 1:
					converted = gcnew String(imFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 2:
					converted = gcnew String(absFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				case 3:
					converted = gcnew String(phi.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				default:
					converted = gcnew String(reFrek.c_str());
					this->dataTable->Rows[frekCvor - 1]->Cells[prostCvor - 1]->Value = converted->ToString();
					break;
				}
			}
			//
			currentData = 0;
		}
		currentFile.close();
		//
		columns_NotSortable();
		currentValueInTable = valueType->SelectedIndex;
	}

	private: void set_firstGraph(){
		int numOfColumns = this->dataTable->ColumnCount;
		int numOfAntennas = this->antenaDropboxG->Items->Count;
		String^ seriesName= gcnew String("Sve antene - ");
		//Postavljanje imena u legendi
		switch (valueType->SelectedIndex)
		{
		case 0:
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		case 1:
			seriesName= gcnew String(seriesName + "Imaginarni dio");
			break;
		case 2:
			seriesName= gcnew String(seriesName + "Absolutni dio");
			break;
		case 3:
			seriesName= gcnew String(seriesName + "Faza");
			break;
		default:
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		}
		//Drawing the graph for first row
		double graphX;
		double graphY;
		chart1->Series->Add(seriesName);
		chart1->Series[seriesName]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		for (int i = 0; i < numOfColumns; i++)
		{
			graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i]->HeaderText));
			graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[0]->Cells[i]->Value->ToString())) ;
			if (!seriesName->ToLower()->Contains("f"))
			{
				graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
			}
			this->chart1->Series[seriesName]->Points->AddXY(graphX, graphY);
		}
		graphOpen = true;

		defaultPickedState();
		if (numOfAntennas < 2)
		{
			prikazSvihAntena->Enabled = false;
		}
		//postavaljanje imena povise grafa 
		grafNaslov->Text = gcnew String("I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz");
		postavljanje_Y_Naslova();

		columns_NotSortable();
	}

	private: double toValueConverter(string value) {
		double result = 0;
		int lenght = value.length(), i = 0, preFix = 1;
		string temp;

		if (value[0] == '-')
		{
			i++;
			preFix -= 2;
		}

		while (!(value[i] == '.' || value[i] == ','))
		{
			temp.push_back(value[i]);
			i++;
		}

		i++;
		result += (stod(temp) * preFix);
		temp.erase();

		while (value[i] != 'E')
		{
			temp.push_back(value[i]);
			i++;
		}
		i++;
		result += ((stod(temp) / (pow(10, temp.length())))*preFix);
		temp.erase();

		preFix = 1;
		if (value[i] == '-')
		{
			preFix -= 2;
		}
		i++;
		while (i < lenght)
		{
			temp.push_back(value[i]);
			i++;
		}
		result *= pow(10, preFix*stod(temp));

		return result;
	}

	private: void linearSplit(int start, int finish, double result[], int numOfPoints)
	{
		int i = 0;
		double lenght = finish - start, section = lenght / numOfPoints;
		for (i = 0; i < numOfPoints; i++)
		{
			result[i] = start + section * i;
		}
	}

	private: void clear_chart()
	{
		int seriesCount = this->chart1->Series->Count;
		for (int i = 0; i < seriesCount; i++) {
			this->chart1->Series[i]->Points->Clear();
		}
	}

	private: void delete_chart()
	{
		this->chart1->Series->Clear();
	}

	private: System::Void dataTable_RowHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
		if (!graphOpen)
		{
			return;
		}

		int numOfColumns = dataTable->ColumnCount;
		pickedRow = dataTable->SelectedRows[0]->Index;
		double graphX;
		double graphY;
		delete_chart();
		//Postavljanje imena u legendi
		String^ seriesName = gcnew String("Sve antene - ");
		switch (valueType->SelectedIndex)
		{
		case 0:
			if (!(currentValueInTable == 0))
			{
				set_table(0);
				currentValueInTable = 0;
			}
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		case 1:
			if (!(currentValueInTable == 1))
			{
				set_table(1);
				currentValueInTable = 1;
			}
			seriesName = gcnew String(seriesName + "Imaginarni dio");
			break;
		case 2:
			if (!(currentValueInTable == 2))
			{
				set_table(2);
				currentValueInTable = 2;
			}
			seriesName = gcnew String(seriesName + "Absolutni dio");
			break;
		case 3:
			if (!(currentValueInTable == 3))
			{
				set_table(3);
				currentValueInTable = 3;
			}
			seriesName = gcnew String(seriesName + "Faza");
			break;
		default:
			if (!(currentValueInTable == 0))
			{
				set_table(0);
				currentValueInTable = 4;
			}
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		}
		//create new series
		chart1->Series->Add(seriesName);
		chart1->Series[seriesName]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		//draw chart with dots
		for (int i = 0; i < numOfColumns; i++)
		{
			graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i]->HeaderText));
			graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[pickedRow]->Cells[i]->Value->ToString()));
			if (!is_faza_series(0))
			{
				graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
			}
			this->chart1->Series[0]->Points->AddXY(graphX, graphY);
		}
		defaultPickedState();
		//postavaljanje imena povise grafa 
		grafNaslov->Text = "I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz";
		postavljanje_Y_Naslova();
	}

	private: void defaultPickedState()
	{
		if (antenaDropBox->Items->Count > 1)
		{
			prikazSvihAntena->Enabled = true;
			prikazSvihAntena->Checked = true;
		}
		antenaDropBox->Enabled = false;
		antenaDropboxG->Enabled = false;
		valueType->Enabled = true;
		valueTypeGraph->Enabled = false;
		prikazViseGrafova->Enabled = true;
		prikazViseGrafova->Checked = false;
		mjerneJedinice->Enabled = true;
	}

	private: void columns_NotSortable()
	{
		int numOfColumns = dataTable->ColumnCount;
		for (int i=0; i<numOfColumns;i++)
		{
			dataTable->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
		}
	}

	private: System::Void antenaDropBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		delete_chart();
		draw_OneGraph(valueType->SelectedIndex,false, antenaDropBox->SelectedIndex);
		columns_NotSortable();
	}

	private: System::Void prikazSvihAntena_Click(System::Object^  sender, System::EventArgs^  e) {
		if (prikazViseGrafova->Checked == true)
		{
			antenaDropBox->Enabled = false;
			if (prikazSvihAntena->Checked)
			{
				antenaDropboxG->Enabled = false;
				uncheck_antenna_list();
			}
			else {
				antenaDropboxG->Enabled = true;
			}
			return;
		}
		else
		{
			antenaDropBox->Enabled = true;
			antenaDropboxG->Enabled = false;
		}

		if (prikazSvihAntena->Checked==true)
		{
			antenaDropBox->Enabled = false;
			antenaDropboxG->Enabled = false;
			if (openFD->FileName=="")
			{
				return;
			}
			//Drawing the graph
			int numOfColumns = dataTable->ColumnCount, currentAntena = antenaDropBox->SelectedIndex;
			int columnsPerAntena = numOfColumns / antenaDropBox->Items->Count;
			double graphX;
			double graphY;
			clear_chart();
			for (int i = 0; i < numOfColumns; i++)
			{
				graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i]->HeaderText));
				graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[pickedRow]->Cells[i]->Value->ToString()));
				if (!is_faza_series(0))
				{
					graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
				}
				this->chart1->Series[0]->Points->AddXY(graphX, graphY);
			}
			graphOpen = true;
			//
			//postavaljanje imena povise grafa 
			grafNaslov->Text = "I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz";
			postavljanje_Y_Naslova();
		}
		else
		{
			if (openFD->FileName == "")
			{
				return;
			}
			if (antenaDropBox->SelectedIndex==-1)
			{
				antenaDropBox->SelectedIndex = 0;
			}

			//Drawing the graph
			int numOfColumns = dataTable->ColumnCount, currentAntena = antenaDropBox->SelectedIndex;
			int columnsPerAntena = numOfColumns / antenaDropBox->Items->Count;
			double graphX;
			double graphY;
			clear_chart();
			for (int i = 0; i < columnsPerAntena; i++)
			{
				graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i + (columnsPerAntena * antenaDropBox->SelectedIndex)]->HeaderText));
				graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[pickedRow]->Cells[i + (columnsPerAntena * antenaDropBox->SelectedIndex)]->Value->ToString()));
				if (!is_faza_series(0))
				{
					graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
				}
				this->chart1->Series[0]->Points->AddXY(graphX, graphY);
			}
			graphOpen = true;
			//	
			//postavaljanje imena povise grafa 
			grafNaslov->Text = "I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz";
			postavljanje_Y_Naslova();
		}
	}

	private: System::Void prikazViseGrafova_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->prikazViseGrafova->Checked)
		{
			this->drawButton->Enabled = true;
			this->valueType->Enabled = false;
			this->valueTypeGraph->Enabled = true;
			if (!prikazSvihAntena->Checked)
			{
				this->antenaDropBox->Enabled = false;
				this->antenaDropboxG->Enabled = true;
			}

		}
		else {
			this->drawButton->Enabled = false;
			this->valueType->Enabled = true;
			this->valueTypeGraph->Enabled = false;
			if (!prikazSvihAntena->Checked)
			{
				this->antenaDropBox->Enabled = true;
				this->antenaDropboxG->Enabled = false;
			}
			uncheck_lists();
		}
	}
	
	private: System::Void drawButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//Open the chosen file
		string fileName = msclr::interop::marshal_as<std::string>(openFD->FileName);

		if (openFD->FileName == "openFD") {
			MessageBox::Show("Failed to open file");
			return;
		}
		//check if all needed values are selected
		if (noMultigraph_checked())
		{
			MessageBox::Show("Nema odabranih obaveznih vrijednosti");
			return;
		}

		drawButton->Enabled = false;
		int numOfCheckedValueItems = valueTypeGraph->CheckedItems->Count;
		int numOfCheckedAntItems = antenaDropboxG->CheckedItems->Count;
		int numOfAntItems = antenaDropboxG->Items->Count;
		int pickedValueType = 0;
		
		delete_chart();
		for (int i = 0; i < numOfCheckedValueItems; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (valueTypeGraph->Items[j]->Equals(valueTypeGraph->CheckedItems[i]))
				{
					pickedValueType = j;
				}
			}
			set_table(pickedValueType);
			if (!prikazSvihAntena->Checked) {
				for (int i = 0; i < numOfCheckedAntItems; i++)
				{
					int currentAntenna;
					for (int j = 0; j < numOfAntItems; j++)
					{
						if (antenaDropboxG->Items[j] == antenaDropboxG->CheckedItems[i])
						{
							currentAntenna = j;
						}
					}
					
					draw_OneGraph(pickedValueType, prikazSvihAntena->Checked, currentAntenna);
				}
			}
			else {
				draw_OneGraph(pickedValueType, prikazSvihAntena->Checked,0);
			}
		}
		currentValueInTable = pickedValueType;
		drawButton->Enabled = true;
	}

	private: int noMultigraph_checked() {
		if (valueTypeGraph->CheckedItems->Count == 0)
		{
			return 1;
		}
		if (!prikazSvihAntena->Checked){
			if (antenaDropboxG->CheckedItems->Count == 0)
			{
				return 1;
			}
		}
		return 0;
	}

	private: void draw_OneGraph(int pickedValueType,bool allAntennas,int currentAntenna)
	{
		if (allAntennas)
		{
			int numOfColumns = this->dataTable->ColumnCount;
			int numOfAntennas = this->antenaDropboxG->Items->Count;
			String^ seriesName = gcnew String("Sve antene - ");
			//Postavljanje imena u legendi
			switch (pickedValueType)
			{
			case 0:
				seriesName = gcnew String(seriesName + "Realni dio");
				break;
			case 1:
				seriesName = gcnew String(seriesName + "Imaginarni dio");
				break;
			case 2:
				seriesName = gcnew String(seriesName + "Absolutni dio");
				break;
			case 3:
				seriesName = gcnew String(seriesName + "Faza");
				break;
			default:
				seriesName = gcnew String(seriesName + "Realni dio");
				break;
			}
			//Drawing the graph for first row
			double graphX;
			double graphY;
			chart1->Series->Add(seriesName);
			chart1->Series[seriesName]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

			for (int i = 0; i < numOfColumns; i++)
			{
				graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i]->HeaderText));
				graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[pickedRow]->Cells[i]->Value->ToString())); 
				if (!seriesName->ToLower()->Contains("f"))
				{
					graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
				}
				this->chart1->Series[seriesName]->Points->AddXY(graphX, graphY);
			}
			graphOpen = true;
			//
			//postavaljanje imena povise grafa 
			grafNaslov->Text = "I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz";
			postavljanje_Y_Naslova();
			return;
		}
		
		int numOfColumns = this->dataTable->ColumnCount;
		int numOfAntennas = this->antenaDropboxG->Items->Count;
		int numOfCheckedAntennas = this->antenaDropboxG->CheckedItems->Count;
		String^ seriesName = gcnew String("Antena " + (currentAntenna + 1).ToString() + " - ");		

		//Postavljanje imena u legendi
		switch (pickedValueType)
		{
		case 0:
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		case 1:
			seriesName = gcnew String(seriesName + "Imaginarni dio");
			break;
		case 2:
			seriesName = gcnew String(seriesName + "Absolutni dio");
			break;
		case 3:
			seriesName = gcnew String(seriesName + "Faza");
			break;
		default:
			seriesName = gcnew String(seriesName + "Realni dio");
			break;
		}
		//Drawing the graph for first row
		double graphX;
		double graphY;	
		int columnsPerAntena = numOfColumns / antenaDropBox->Items->Count;

		chart1->Series->Add(seriesName);
		chart1->Series[seriesName]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		for (int i = 0; i < columnsPerAntena; i++)
		{
			graphX = stod(msclr::interop::marshal_as<std::string>(this->dataTable->Columns[i]->HeaderText));
			graphY = toValueConverter(msclr::interop::marshal_as<std::string>(this->dataTable->Rows[pickedRow]->Cells[i + (columnsPerAntena * currentAntenna)]->Value->ToString()));
			if (!seriesName->ToLower()->Contains("f"))
			{
				graphY *= Math::Pow(10, (mjerneJedinice->SelectedIndex - 1) * 3);
			}
			this->chart1->Series[seriesName]->Points->AddXY(graphX, graphY);
		}
		graphOpen = true;
		//
		//postavaljanje imena povise grafa 
		grafNaslov->Text = "I(x) za f = " + dataTable->Rows[pickedRow]->HeaderCell->Value + " Hz";
		postavljanje_Y_Naslova();
		return;
	}
			 //Unechecks all items in both of checklistbox
	private: void uncheck_lists()
	{
		int numOfItems = valueTypeGraph->CheckedItems->Count;
		int maxCount = valueTypeGraph->Items->Count;
		if (numOfItems > 0)
		{
			for (int i = 0; i < maxCount; i++)
			{
				valueTypeGraph->SetItemChecked(i, false);
			}
		}
		numOfItems = antenaDropboxG->CheckedItems->Count;
		maxCount = antenaDropboxG->Items->Count;
		if (numOfItems > 0)
		{
			for (int i = 0; i < maxCount; i++)
			{
				antenaDropboxG->SetItemChecked(i, false);
			}
		}
	}

	private: void uncheck_antenna_list(){
		int numOfItems = antenaDropboxG->CheckedItems->Count;
		int maxCount = antenaDropboxG->Items->Count;
		if (numOfItems > 0)
		{
			for (int i = 0; i < maxCount; i++)
			{
				antenaDropboxG->SetItemChecked(i, false);
			}
		}
	}

	private: void postavljanje_Y_Naslova()
	{
		yNaslov1->Text="";
		yNaslov2->Text="";
		yNaslov3->Text="";
		yNaslov4->Text="";
		if (prikazViseGrafova->Checked) {
			int numOfCheckedItems = valueTypeGraph->CheckedItems->Count;

			for (int i = 0; i < numOfCheckedItems; i++)
			{
				switch (i)
				{
				case 0:
					if (valueTypeGraph->CheckedItems[i]->ToString() == "Phi")
					{
						yNaslov1->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)");
						break;
					}
					yNaslov1->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)" + " [" + mjerneJedinice->Items[mjerneJedinice->SelectedIndex]->ToString() + "]");
					break;
				case 1:
					if (valueTypeGraph->CheckedItems[i]->ToString() == "Phi")
					{
						yNaslov2->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)");
						break;
					}
					yNaslov2->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)" + " [" + mjerneJedinice->Items[mjerneJedinice->SelectedIndex]->ToString() + "]");
					break;
				case 2:
					if (valueTypeGraph->CheckedItems[i]->ToString() == "Phi")
					{
						yNaslov3->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)");
						break;
					}
					yNaslov3->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)" + " [" + mjerneJedinice->Items[mjerneJedinice->SelectedIndex]->ToString() + "]");
					break;
				case 3:
					if (valueTypeGraph->CheckedItems[i]->ToString() == "Phi")
					{
						yNaslov4->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)");
						break;
					}
					yNaslov4->Text = gcnew String(valueTypeGraph->CheckedItems[i]->ToString() + "(I)" + " [" + mjerneJedinice->Items[mjerneJedinice->SelectedIndex]->ToString() + "]");
					break;
				default:
					break;
				}
			}
			return;
		}
		if (valueType->Items[valueType->SelectedIndex]->ToString() == "Phi")
		{
			yNaslov2->Text = gcnew String(valueType->Items[valueType->SelectedIndex]->ToString() + "(I)");
			return;
		}
		yNaslov2->Text = gcnew String(valueType->Items[valueType->SelectedIndex]->ToString() + "(I)" + " [" + mjerneJedinice->Items[mjerneJedinice->SelectedIndex]->ToString() + "]");
	}

	private: System::Void mjerneJedinice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (lastScale == mjerneJedinice->SelectedIndex)
		{
			return;
		}
		//Drawing the graph for first row
		double graphX;
		double graphY;
		double temp;
		int numOfDots =0, numOfSeries = chart1->Series->Count; 
		
		for (int j = 0; j < numOfSeries; j++)
		{
			if (is_faza_series(j)) {
				continue;
			}
			numOfDots = chart1->Series[j]->Points->Count;
			double *yValues=new double[numOfDots];
			for (int i = 0; i < numOfDots; i++)
			{
				yValues[i] = chart1->Series[j]->Points[i]->YValues[0];
			}
			this->chart1->Series[j]->Points->Clear();
			for (int i = 0; i < numOfDots; i++)
			{
				temp = yValues[i] * Math::Pow(10, (mjerneJedinice->SelectedIndex - lastScale) * 3);
				this->chart1->Series[j]->Points->AddXY(i, temp);
			}
		}
		graphOpen = true;
		//
		postavljanje_Y_Naslova();
		lastScale = mjerneJedinice->SelectedIndex;
	}
				 
	private: bool is_faza_series(int seriesIndex)
	{
		if (chart1->Series[seriesIndex]->Name->ToLower()->Contains("f"))
		{
			return true;
		}
		return false;
	}

	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (graphOpen == false)
		{
			MessageBox::Show("No graph open!");
			return;
		}

		saveFD->FileName = "";

		if (saveFD->ShowDialog() == Windows::Forms::DialogResult::Cancel)
		{
			return;
		}

		ofstream currentFile;
		string fileName = msclr::interop::marshal_as<std::string>(saveFD->FileName);
		currentFile.open(fileName);

		if (!currentFile.is_open()) {
			MessageBox::Show("Failed to open file");
			return;
		}
		currentFile.close();

		switch (saveFD->FilterIndex)
		{
		case 0:
			chart1->SaveImage(saveFD->FileName, System::Drawing::Imaging::ImageFormat::Tiff);
			break;
		case 1:
			chart1->SaveImage(saveFD->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
			break;
		case 2:
			chart1->SaveImage(saveFD->FileName, System::Drawing::Imaging::ImageFormat::Png);
			break;
		case 3:
			chart1->SaveImage(saveFD->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
			break;
		default:
			chart1->SaveImage(saveFD->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
			break;
		}
	}
}; 
}
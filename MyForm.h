#pragma once
namespace ZavrsniRad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  NewFile;
	private: System::Windows::Forms::Button^  Save;
	private: System::Windows::Forms::Button^  SaveAs;
	private: System::Windows::Forms::Button^  Open;
	private: System::Windows::Forms::Button^  Latest;
	private: System::Windows::Forms::Button^  Export;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::DataGridView^  dataTable;











	protected:



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
			this->NewFile = (gcnew System::Windows::Forms::Button());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->SaveAs = (gcnew System::Windows::Forms::Button());
			this->Open = (gcnew System::Windows::Forms::Button());
			this->Latest = (gcnew System::Windows::Forms::Button());
			this->Export = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// NewFile
			// 
			this->NewFile->Location = System::Drawing::Point(3, 3);
			this->NewFile->Name = L"NewFile";
			this->NewFile->Size = System::Drawing::Size(37, 36);
			this->NewFile->TabIndex = 0;
			this->NewFile->Text = L"New File";
			this->NewFile->UseVisualStyleBackColor = true;
			this->NewFile->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Save
			// 
			this->Save->Location = System::Drawing::Point(46, 3);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(37, 36);
			this->Save->TabIndex = 1;
			this->Save->Text = L"Save";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// SaveAs
			// 
			this->SaveAs->Location = System::Drawing::Point(89, 3);
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(37, 36);
			this->SaveAs->TabIndex = 2;
			this->SaveAs->Text = L"Save as";
			this->SaveAs->UseVisualStyleBackColor = true;
			// 
			// Open
			// 
			this->Open->Location = System::Drawing::Point(132, 3);
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(37, 36);
			this->Open->TabIndex = 3;
			this->Open->Text = L"Open";
			this->Open->UseVisualStyleBackColor = true;
			// 
			// Latest
			// 
			this->Latest->Location = System::Drawing::Point(175, 3);
			this->Latest->Name = L"Latest";
			this->Latest->Size = System::Drawing::Size(21, 36);
			this->Latest->TabIndex = 4;
			this->Latest->Text = L"Last opend";
			this->Latest->UseVisualStyleBackColor = true;
			// 
			// Export
			// 
			this->Export->Location = System::Drawing::Point(202, 3);
			this->Export->Name = L"Export";
			this->Export->Size = System::Drawing::Size(37, 36);
			this->Export->TabIndex = 5;
			this->Export->Text = L"Export";
			this->Export->UseVisualStyleBackColor = true;
			this->Export->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
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
			this->splitContainer1->Panel1->Controls->Add(this->NewFile);
			this->splitContainer1->Panel1->Controls->Add(this->Export);
			this->splitContainer1->Panel1->Controls->Add(this->Save);
			this->splitContainer1->Panel1->Controls->Add(this->Latest);
			this->splitContainer1->Panel1->Controls->Add(this->SaveAs);
			this->splitContainer1->Panel1->Controls->Add(this->Open);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(533, 46);
			this->splitContainer1->SplitterDistance = 246;
			this->splitContainer1->TabIndex = 6;
			this->splitContainer1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &MyForm::splitContainer1_SplitterMoved);
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->splitContainer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(533, 46);
			this->panel1->TabIndex = 7;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// dataTable
			// 
			this->dataTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Location = System::Drawing::Point(3, 3);
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->Size = System::Drawing::Size(529, 224);
			this->dataTable->TabIndex = 9;
			this->dataTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->dataTable);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 48);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(536, 227);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 495);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->dataTable->ColumnCount = 5;
		this->dataTable->RowCount = 1;
		int numOfColumns = this->dataTable->ColumnCount;
		for (int i = 0; i<numOfColumns; i++)
		{
			this->dataTable->Columns[i]->HeaderText = i.ToString();
			this->dataTable->Rows[0]->Cells[1]->Value = "aaa";
		}

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void splitContainer1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}

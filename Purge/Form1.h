#pragma once

namespace Purge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace Microsoft::Win32;

	#define APP_KEY							"Purge"
	#define APP_VERSION_VALUE   			"AppVersion"
	#define APP_VERSION						"1.2"
	#define SOURCE_PATH_KEY   				"SourcePath"
	#define ENABLE_TARGET_VALUE				"EnableTargetPath"
	#define TARGET_PATH_KEY					"TargetPath"
	#define MAX_LOCATION_SAVED				10
	#define DEFAULT_EXTENSION_VALUE			"DefaultExtensions"
	#define DEFAULT_FILENAME_VALUE			"DefaultFileNames"
	#define EXTENSION_VALUE					"UserExtensions"
	#define FILENAME_VALUE					"UserdFileNames"
    #define UPDATE_COPYRIGHT_VALUE			"UpdateCopyrightYear"
    #define COPYRIGHT_YEAR_VALUE			"CopyrightYear"
	#define START_ANCHOR_VALUE				"AnchorStart"
	#define END_ANCHOR_VALUE				"AnchorEnd"
    #define ENABLE_REMOVE_BEFORE_VALUE		"RemoveBefore"
    #define REMOVE_BEFORE_VALUE				"RemoveBeforeDate"
    #define REMOVE_ADD_VALUE				"RemoveAdd"
    #define REMOVE_MODIFY_VALUE				"RemoveModify"
    #define REMOVE_REMOVE_VALUE				"RemoveRemove"
    #define REMOVE_CUSTOMIZE_STRING_VALUE	"RemoveCustomizedString"
    #define CUSTOMIZE_STRING_VALUE			"CustomizedString"

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RestoreSettings();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelSource;
	private: System::Windows::Forms::ComboBox^  comboBoxSource;
	protected: 

	private: System::Windows::Forms::Button^  buttonBrowse;
	private: System::Windows::Forms::Button^  buttonStartPurge;
	private: System::Windows::Forms::CheckBox^  checkBoxUpdateCopyright;
	private: System::Windows::Forms::TextBox^  textBoxCopyright;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;












	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::CheckBox^  checkBoxCutOffDate;
	private: System::Windows::Forms::CheckBox^  checkBoxAdd;
	private: System::Windows::Forms::CheckBox^  checkBoxModify;
	private: System::Windows::Forms::CheckBox^  checkBoxRemove;
	private: System::Windows::Forms::CheckBox^  checkBoxCustomized;
	private: System::Windows::Forms::TextBox^  textBoxCustomized;


	private: System::Windows::Forms::Label^  labelPostfix;
	private: System::Windows::Forms::Label^  labelStartingAnchor;
	private: System::Windows::Forms::Label^  labelEndingAnchor;
	private: System::Windows::Forms::TextBox^  textBoxStartingAnchor;
	private: System::Windows::Forms::TextBox^  textBoxEndingAnchor;


	private: System::Windows::Forms::Button^  buttonEnumerateFileTypes;
	private: System::Windows::Forms::Button^  buttonAll;
	private: System::Windows::Forms::Button^  buttonNone;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxExtension;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxFileName;
	private: System::Windows::Forms::Button^  buttonSaveDefault;
	private: System::Windows::Forms::Button^  buttonRestoreDefault;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  buttonBrowseTarget;

	private: System::Windows::Forms::ComboBox^  comboBoxTarget;
	private: System::Windows::Forms::CheckBox^  checkBoxTarget;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;



	private: System::ComponentModel::IContainer^  components;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->labelSource = (gcnew System::Windows::Forms::Label());
			this->comboBoxSource = (gcnew System::Windows::Forms::ComboBox());
			this->buttonBrowse = (gcnew System::Windows::Forms::Button());
			this->buttonStartPurge = (gcnew System::Windows::Forms::Button());
			this->checkBoxUpdateCopyright = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxCopyright = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBoxCutOffDate = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAdd = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxModify = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRemove = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCustomized = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxCustomized = (gcnew System::Windows::Forms::TextBox());
			this->labelPostfix = (gcnew System::Windows::Forms::Label());
			this->labelStartingAnchor = (gcnew System::Windows::Forms::Label());
			this->labelEndingAnchor = (gcnew System::Windows::Forms::Label());
			this->textBoxStartingAnchor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEndingAnchor = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnumerateFileTypes = (gcnew System::Windows::Forms::Button());
			this->buttonAll = (gcnew System::Windows::Forms::Button());
			this->buttonNone = (gcnew System::Windows::Forms::Button());
			this->checkedListBoxExtension = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxFileName = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonSaveDefault = (gcnew System::Windows::Forms::Button());
			this->buttonRestoreDefault = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonBrowseTarget = (gcnew System::Windows::Forms::Button());
			this->comboBoxTarget = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxTarget = (gcnew System::Windows::Forms::CheckBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelSource
			// 
			this->labelSource->AutoSize = true;
			this->labelSource->Location = System::Drawing::Point(9, 16);
			this->labelSource->Name = L"labelSource";
			this->labelSource->Size = System::Drawing::Size(50, 16);
			this->labelSource->TabIndex = 0;
			this->labelSource->Text = L"Source";
			// 
			// comboBoxSource
			// 
			this->comboBoxSource->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxSource->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->comboBoxSource->FormattingEnabled = true;
			this->comboBoxSource->Location = System::Drawing::Point(83, 12);
			this->comboBoxSource->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBoxSource->Name = L"comboBoxSource";
			this->comboBoxSource->Size = System::Drawing::Size(614, 24);
			this->comboBoxSource->TabIndex = 1;
			this->comboBoxSource->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::comboBoxSource_SelectionChangeCommitted);
			this->comboBoxSource->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::comboBox_KeyDown);
			// 
			// buttonBrowse
			// 
			this->buttonBrowse->Location = System::Drawing::Point(703, 12);
			this->buttonBrowse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonBrowse->Name = L"buttonBrowse";
			this->buttonBrowse->Size = System::Drawing::Size(79, 25);
			this->buttonBrowse->TabIndex = 2;
			this->buttonBrowse->Text = L"Browse";
			this->buttonBrowse->UseVisualStyleBackColor = true;
			this->buttonBrowse->Click += gcnew System::EventHandler(this, &Form1::buttonBrowse_Click);
			// 
			// buttonStartPurge
			// 
			this->buttonStartPurge->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonStartPurge->Location = System::Drawing::Point(12, 262);
			this->buttonStartPurge->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonStartPurge->Name = L"buttonStartPurge";
			this->buttonStartPurge->Size = System::Drawing::Size(440, 152);
			this->buttonStartPurge->TabIndex = 10;
			this->buttonStartPurge->Text = L"Start Purge";
			this->buttonStartPurge->UseVisualStyleBackColor = true;
			this->buttonStartPurge->Click += gcnew System::EventHandler(this, &Form1::buttonStartPurge_Click);
			// 
			// checkBoxUpdateCopyright
			// 
			this->checkBoxUpdateCopyright->AutoSize = true;
			this->checkBoxUpdateCopyright->Location = System::Drawing::Point(12, 79);
			this->checkBoxUpdateCopyright->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxUpdateCopyright->Name = L"checkBoxUpdateCopyright";
			this->checkBoxUpdateCopyright->Size = System::Drawing::Size(166, 20);
			this->checkBoxUpdateCopyright->TabIndex = 6;
			this->checkBoxUpdateCopyright->Text = L"Update Copyright for all";
			this->checkBoxUpdateCopyright->UseVisualStyleBackColor = true;
			// 
			// textBoxCopyright
			// 
			this->textBoxCopyright->Location = System::Drawing::Point(187, 77);
			this->textBoxCopyright->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxCopyright->Name = L"textBoxCopyright";
			this->textBoxCopyright->Size = System::Drawing::Size(50, 22);
			this->textBoxCopyright->TabIndex = 7;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyMMdd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(173, 109);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2010, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(125, 22);
			this->dateTimePicker1->TabIndex = 11;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// checkBoxCutOffDate
			// 
			this->checkBoxCutOffDate->AutoSize = true;
			this->checkBoxCutOffDate->Location = System::Drawing::Point(71, 113);
			this->checkBoxCutOffDate->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxCutOffDate->Name = L"checkBoxCutOffDate";
			this->checkBoxCutOffDate->Size = System::Drawing::Size(95, 20);
			this->checkBoxCutOffDate->TabIndex = 10;
			this->checkBoxCutOffDate->Text = L"Only before";
			this->checkBoxCutOffDate->UseVisualStyleBackColor = true;
			// 
			// checkBoxAdd
			// 
			this->checkBoxAdd->AutoSize = true;
			this->checkBoxAdd->Checked = true;
			this->checkBoxAdd->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxAdd->Location = System::Drawing::Point(71, 72);
			this->checkBoxAdd->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxAdd->Name = L"checkBoxAdd";
			this->checkBoxAdd->Size = System::Drawing::Size(50, 20);
			this->checkBoxAdd->TabIndex = 5;
			this->checkBoxAdd->Text = L"add";
			this->checkBoxAdd->UseVisualStyleBackColor = true;
			// 
			// checkBoxModify
			// 
			this->checkBoxModify->AutoSize = true;
			this->checkBoxModify->Location = System::Drawing::Point(147, 72);
			this->checkBoxModify->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxModify->Name = L"checkBoxModify";
			this->checkBoxModify->Size = System::Drawing::Size(66, 20);
			this->checkBoxModify->TabIndex = 6;
			this->checkBoxModify->Text = L"modify";
			this->checkBoxModify->UseVisualStyleBackColor = true;
			// 
			// checkBoxRemove
			// 
			this->checkBoxRemove->AutoSize = true;
			this->checkBoxRemove->Checked = true;
			this->checkBoxRemove->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxRemove->Location = System::Drawing::Point(227, 72);
			this->checkBoxRemove->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxRemove->Name = L"checkBoxRemove";
			this->checkBoxRemove->Size = System::Drawing::Size(72, 20);
			this->checkBoxRemove->TabIndex = 7;
			this->checkBoxRemove->Text = L"remove";
			this->checkBoxRemove->UseVisualStyleBackColor = true;
			// 
			// checkBoxCustomized
			// 
			this->checkBoxCustomized->AutoSize = true;
			this->checkBoxCustomized->Location = System::Drawing::Point(303, 75);
			this->checkBoxCustomized->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBoxCustomized->Name = L"checkBoxCustomized";
			this->checkBoxCustomized->Size = System::Drawing::Size(15, 14);
			this->checkBoxCustomized->TabIndex = 8;
			this->checkBoxCustomized->UseVisualStyleBackColor = true;
			// 
			// textBoxCustomized
			// 
			this->textBoxCustomized->Location = System::Drawing::Point(324, 70);
			this->textBoxCustomized->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxCustomized->Name = L"textBoxCustomized";
			this->textBoxCustomized->Size = System::Drawing::Size(97, 22);
			this->textBoxCustomized->TabIndex = 9;
			// 
			// labelPostfix
			// 
			this->labelPostfix->AutoSize = true;
			this->labelPostfix->Location = System::Drawing::Point(13, 73);
			this->labelPostfix->Name = L"labelPostfix";
			this->labelPostfix->Size = System::Drawing::Size(49, 16);
			this->labelPostfix->TabIndex = 4;
			this->labelPostfix->Text = L"Postfix:";
			// 
			// labelStartingAnchor
			// 
			this->labelStartingAnchor->AutoSize = true;
			this->labelStartingAnchor->Location = System::Drawing::Point(10, 34);
			this->labelStartingAnchor->Name = L"labelStartingAnchor";
			this->labelStartingAnchor->Size = System::Drawing::Size(103, 16);
			this->labelStartingAnchor->TabIndex = 0;
			this->labelStartingAnchor->Text = L"Starting Anchor :";
			// 
			// labelEndingAnchor
			// 
			this->labelEndingAnchor->AutoSize = true;
			this->labelEndingAnchor->Location = System::Drawing::Point(224, 34);
			this->labelEndingAnchor->Name = L"labelEndingAnchor";
			this->labelEndingAnchor->Size = System::Drawing::Size(100, 16);
			this->labelEndingAnchor->TabIndex = 2;
			this->labelEndingAnchor->Text = L"Ending Anchor :";
			// 
			// textBoxStartingAnchor
			// 
			this->textBoxStartingAnchor->Location = System::Drawing::Point(117, 30);
			this->textBoxStartingAnchor->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxStartingAnchor->Name = L"textBoxStartingAnchor";
			this->textBoxStartingAnchor->Size = System::Drawing::Size(97, 22);
			this->textBoxStartingAnchor->TabIndex = 1;
			this->textBoxStartingAnchor->Text = L"[-start-";
			// 
			// textBoxEndingAnchor
			// 
			this->textBoxEndingAnchor->Location = System::Drawing::Point(324, 31);
			this->textBoxEndingAnchor->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBoxEndingAnchor->Name = L"textBoxEndingAnchor";
			this->textBoxEndingAnchor->Size = System::Drawing::Size(97, 22);
			this->textBoxEndingAnchor->TabIndex = 3;
			this->textBoxEndingAnchor->Text = L"[-end-";
			// 
			// buttonEnumerateFileTypes
			// 
			this->buttonEnumerateFileTypes->Location = System::Drawing::Point(19, 30);
			this->buttonEnumerateFileTypes->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonEnumerateFileTypes->Name = L"buttonEnumerateFileTypes";
			this->buttonEnumerateFileTypes->Size = System::Drawing::Size(287, 33);
			this->buttonEnumerateFileTypes->TabIndex = 0;
			this->buttonEnumerateFileTypes->Text = L"Enumerate File Types";
			this->buttonEnumerateFileTypes->UseVisualStyleBackColor = true;
			this->buttonEnumerateFileTypes->Click += gcnew System::EventHandler(this, &Form1::buttonEnumerateFileTypes_Click);
			// 
			// buttonAll
			// 
			this->buttonAll->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonAll->Location = System::Drawing::Point(166, 159);
			this->buttonAll->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonAll->Name = L"buttonAll";
			this->buttonAll->Size = System::Drawing::Size(140, 33);
			this->buttonAll->TabIndex = 3;
			this->buttonAll->Text = L"All";
			this->buttonAll->UseVisualStyleBackColor = true;
			this->buttonAll->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// buttonNone
			// 
			this->buttonNone->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonNone->Location = System::Drawing::Point(166, 200);
			this->buttonNone->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonNone->Name = L"buttonNone";
			this->buttonNone->Size = System::Drawing::Size(140, 33);
			this->buttonNone->TabIndex = 4;
			this->buttonNone->Text = L"None";
			this->buttonNone->UseVisualStyleBackColor = true;
			this->buttonNone->Click += gcnew System::EventHandler(this, &Form1::buttonNone_Click);
			// 
			// checkedListBoxExtension
			// 
			this->checkedListBoxExtension->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->checkedListBoxExtension->CheckOnClick = true;
			this->checkedListBoxExtension->FormattingEnabled = true;
			this->checkedListBoxExtension->Location = System::Drawing::Point(19, 79);
			this->checkedListBoxExtension->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkedListBoxExtension->Name = L"checkedListBoxExtension";
			this->checkedListBoxExtension->Size = System::Drawing::Size(139, 242);
			this->checkedListBoxExtension->Sorted = true;
			this->checkedListBoxExtension->TabIndex = 1;
			// 
			// checkedListBoxFileName
			// 
			this->checkedListBoxFileName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->checkedListBoxFileName->CheckOnClick = true;
			this->checkedListBoxFileName->FormattingEnabled = true;
			this->checkedListBoxFileName->Location = System::Drawing::Point(166, 79);
			this->checkedListBoxFileName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkedListBoxFileName->Name = L"checkedListBoxFileName";
			this->checkedListBoxFileName->Size = System::Drawing::Size(139, 72);
			this->checkedListBoxFileName->Sorted = true;
			this->checkedListBoxFileName->TabIndex = 2;
			// 
			// buttonSaveDefault
			// 
			this->buttonSaveDefault->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonSaveDefault->Location = System::Drawing::Point(166, 250);
			this->buttonSaveDefault->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonSaveDefault->Name = L"buttonSaveDefault";
			this->buttonSaveDefault->Size = System::Drawing::Size(140, 33);
			this->buttonSaveDefault->TabIndex = 5;
			this->buttonSaveDefault->Text = L"Save as Default";
			this->buttonSaveDefault->UseVisualStyleBackColor = true;
			this->buttonSaveDefault->Click += gcnew System::EventHandler(this, &Form1::buttonSaveDefault_Click_1);
			// 
			// buttonRestoreDefault
			// 
			this->buttonRestoreDefault->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonRestoreDefault->Location = System::Drawing::Point(166, 291);
			this->buttonRestoreDefault->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonRestoreDefault->Name = L"buttonRestoreDefault";
			this->buttonRestoreDefault->Size = System::Drawing::Size(139, 33);
			this->buttonRestoreDefault->TabIndex = 6;
			this->buttonRestoreDefault->Text = L"Restore Default";
			this->buttonRestoreDefault->UseVisualStyleBackColor = true;
			this->buttonRestoreDefault->Click += gcnew System::EventHandler(this, &Form1::buttonRestoreDefault_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonRestoreDefault);
			this->groupBox1->Controls->Add(this->buttonSaveDefault);
			this->groupBox1->Controls->Add(this->checkedListBoxFileName);
			this->groupBox1->Controls->Add(this->checkedListBoxExtension);
			this->groupBox1->Controls->Add(this->buttonNone);
			this->groupBox1->Controls->Add(this->buttonAll);
			this->groupBox1->Controls->Add(this->buttonEnumerateFileTypes);
			this->groupBox1->Location = System::Drawing::Point(458, 77);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(324, 339);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"File Types";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxEndingAnchor);
			this->groupBox2->Controls->Add(this->textBoxStartingAnchor);
			this->groupBox2->Controls->Add(this->labelEndingAnchor);
			this->groupBox2->Controls->Add(this->labelStartingAnchor);
			this->groupBox2->Controls->Add(this->labelPostfix);
			this->groupBox2->Controls->Add(this->textBoxCustomized);
			this->groupBox2->Controls->Add(this->checkBoxCustomized);
			this->groupBox2->Controls->Add(this->checkBoxRemove);
			this->groupBox2->Controls->Add(this->checkBoxModify);
			this->groupBox2->Controls->Add(this->checkBoxAdd);
			this->groupBox2->Controls->Add(this->checkBoxCutOffDate);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Location = System::Drawing::Point(12, 108);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox2->Size = System::Drawing::Size(440, 146);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Footprint Picking for removal";
			// 
			// buttonBrowseTarget
			// 
			this->buttonBrowseTarget->Location = System::Drawing::Point(703, 45);
			this->buttonBrowseTarget->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->buttonBrowseTarget->Name = L"buttonBrowseTarget";
			this->buttonBrowseTarget->Size = System::Drawing::Size(79, 25);
			this->buttonBrowseTarget->TabIndex = 5;
			this->buttonBrowseTarget->Text = L"Browse";
			this->buttonBrowseTarget->UseVisualStyleBackColor = true;
			this->buttonBrowseTarget->Click += gcnew System::EventHandler(this, &Form1::buttonBrowseTarget_Click);
			// 
			// comboBoxTarget
			// 
			this->comboBoxTarget->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxTarget->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->comboBoxTarget->FormattingEnabled = true;
			this->comboBoxTarget->Location = System::Drawing::Point(83, 45);
			this->comboBoxTarget->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBoxTarget->Name = L"comboBoxTarget";
			this->comboBoxTarget->Size = System::Drawing::Size(614, 24);
			this->comboBoxTarget->TabIndex = 4;
			this->comboBoxTarget->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::comboBoxTarget_SelectionChangeCommitted);
			this->comboBoxTarget->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::comboBox_KeyDown);
			// 
			// checkBoxTarget
			// 
			this->checkBoxTarget->AutoSize = true;
			this->checkBoxTarget->Location = System::Drawing::Point(12, 47);
			this->checkBoxTarget->Name = L"checkBoxTarget";
			this->checkBoxTarget->Size = System::Drawing::Size(66, 20);
			this->checkBoxTarget->TabIndex = 3;
			this->checkBoxTarget->Text = L"Target";
			this->checkBoxTarget->UseVisualStyleBackColor = true;
			// 
			// toolTip1
			// 
			this->toolTip1->ShowAlways = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripProgressBar1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 418);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(788, 22);
			this->statusStrip1->TabIndex = 12;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(791, 16);
			this->toolStripProgressBar1->ToolTipText = L"progress bar";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 440);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->checkBoxTarget);
			this->Controls->Add(this->buttonBrowseTarget);
			this->Controls->Add(this->comboBoxTarget);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBoxCopyright);
			this->Controls->Add(this->checkBoxUpdateCopyright);
			this->Controls->Add(this->buttonStartPurge);
			this->Controls->Add(this->buttonBrowse);
			this->Controls->Add(this->comboBoxSource);
			this->Controls->Add(this->labelSource);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Purge 1.4";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void EnumerateFileTypes(String^ folder) {
				 array<String^>^ dir = Directory::GetDirectories( folder );
				 for (int i=0; i<dir->Length; i++) {
					EnumerateFileTypes(dir[i]);
				 }

				 array<String^>^ file = Directory::GetFiles( folder );
				 for (int i=0; i<file->Length; i++) {
					 String ^extension =  Path::GetExtension( file[i] );
  				     if (extension != String::Empty) {
						int index = checkedListBoxExtension->FindString(extension);
						if (index != -1) {
							checkedListBoxExtension->SetSelected(index,true);
						} else {
							checkedListBoxExtension->Items->Add(extension->ToLower(), false);
						}
					 } else {
						String ^filename = Path::GetFileName(file[i]);
						int index2 = checkedListBoxFileName->FindString(filename);
						if (index2 != -1) {
							checkedListBoxFileName->SetSelected(index2,true);
						} else {
							checkedListBoxFileName->Items->Add(filename->ToLower(), false);
						}
					 }
					 toolStripProgressBar1->Maximum++;
				 }

			 }

	private: System::Void GetFileCount(String^ folder) {
				 array<String^>^ dir = Directory::GetDirectories( folder );
				 for (int i=0; i<dir->Length; i++) {
					GetFileCount(dir[i]);
				 }

				 array<String^>^ file = Directory::GetFiles( folder );
				 toolStripProgressBar1->Maximum+=file->Length;
			 }

	private: System::Void EnumerateFiles(String^ folder) {
				 array<String^>^ dir = Directory::GetDirectories( folder );
				 for (int i=0; i<dir->Length; i++) {
					EnumerateFiles(dir[i]);
				 }
				 array<String^>^ file = Directory::GetFiles( folder );
				 for (int i=0; i<file->Length; i++) {
					 FilterFile(file[i]);
				 }
			 }

	private: System::Void FilterFile(String^ file) {
				 String ^extension =  Path::GetExtension(file);
  				 if (extension != String::Empty) {
					if (checkedListBoxExtension->Items->Count > 0) {
						int index = checkedListBoxExtension->FindString(extension);
						if (index != -1) {
							if (checkedListBoxExtension->GetItemChecked(index)) {
								PurgeComments(file);
								checkedListBoxExtension->SetSelected(index,true);
							}
						}
					} else {
						PurgeComments(file);
					}
				 } else {
					String ^filename = Path::GetFileName(file);
					if (checkedListBoxFileName->Items->Count > 0) {
						int index2 = checkedListBoxFileName->FindString(filename);
						if (index2 != -1) {
							if (checkedListBoxFileName->GetItemChecked(index2)) {
								PurgeComments(file);
								checkedListBoxFileName->SetSelected(index2,true);
							}
						}
					} else {
						PurgeComments(file);
					}
				 }
				 toolStripProgressBar1->PerformStep();
			 }

	private: int modifiedCount;

	private: System::Void PurgeComments(String^ file) {
				Encoding ^FileEncoding = GetFileEncodingViaBOM(file);
				StreamReader^ din = gcnew StreamReader(file, FileEncoding);
				String^ TempFileName = Path::GetTempFileName();
				StreamWriter^ dout = gcnew StreamWriter(TempFileName, false, FileEncoding);

				String ^CommentStr = nullptr;
				Boolean FileModified=false;
				Boolean PreLineIsBlank=false;
				Boolean PreBlockRemoved=false;

				String^ Str;

				while ((Str = din->ReadLine()) != nullptr) {
					if ((Str->Contains (textBoxStartingAnchor->Text) || Str->Contains (textBoxEndingAnchor->Text)) && Str->Contains ("add") && checkBoxAdd->Checked && IsOldComment(Str)) {
						FileModified = true;
						continue;
					}

					if ((Str->Contains (textBoxStartingAnchor->Text) || Str->Contains (textBoxEndingAnchor->Text)) && Str->Contains ("modify") && checkBoxModify->Checked && IsOldComment(Str)) {
						FileModified = true;
						continue;
					}

					if ((Str->Contains (textBoxStartingAnchor->Text) || Str->Contains (textBoxEndingAnchor->Text)) && Str->Contains (textBoxCustomized->Text) && checkBoxCustomized->Checked && IsOldComment(Str)) {
						FileModified = true;
						continue;
					}

					if (Str->Contains (textBoxStartingAnchor->Text) && Str->Contains ("remove") && checkBoxRemove->Checked && IsOldComment(Str)) {
						String ^endStr = Str->Replace(textBoxStartingAnchor->Text, textBoxEndingAnchor->Text)->Trim();
						if (CommentStr == nullptr) {
							CommentStr = Str->Substring(0,1);
							if (String::Compare(CommentStr, "/") == 0) {
								CommentStr = "//";
							}
						}
						while ((Str = din->ReadLine()) != nullptr) {
							if (String::IsNullOrEmpty(Str)) {
								continue;
							}
							if (Str->Length < CommentStr->Length) {
								dout->WriteLine(Str);
								continue;
							}
							if (String::Compare(Str->Substring(0, CommentStr->Length), CommentStr) != 0) {
								dout->WriteLine(Str);
								continue;
							}
							if (String::Compare(Str->ToLower()->Trim(), endStr->ToLower()) == 0) {
								PreBlockRemoved = true;
								break;
							}
						}
						FileModified = true;
						continue;
					}

					if (String::IsNullOrEmpty(Str)) {
						if (PreLineIsBlank && PreBlockRemoved) {
							continue;
						} else {
							PreLineIsBlank = true;
						}
					} else {
						PreLineIsBlank = false;
						PreBlockRemoved = false;
					}

					dout->WriteLine(Str);
				}

				din->Close();
				dout->Close();

				if (FileModified) {
					if (checkBoxTarget->Checked) {
						file = file->Replace(comboBoxSource->Text, comboBoxTarget->Text);
						if (File::Exists(file)) {
							File::Delete(file);
						} else {
							if (!Directory::Exists(Path::GetDirectoryName(file))) {
								Directory::CreateDirectory(Path::GetDirectoryName(file));
							}
						}
					} else {
						File::Delete(file);
					}
					File::Move(TempFileName, file);
					UpdateCopyright(file, FileModified);
					modifiedCount++;
				} else {
					File::Delete(TempFileName);
  				    if (checkBoxUpdateCopyright->Checked) {
						UpdateCopyright(file, FileModified);
					}
				}
			 }

	private: System::Void UpdateCopyright(String^ file, Boolean FileModifiedAlready) {
				Encoding ^FileEncoding = GetFileEncodingViaBOM(file);
				StreamReader^ din = gcnew StreamReader(file, FileEncoding);
				String^ TempFileName = Path::GetTempFileName();
				StreamWriter^ dout = gcnew StreamWriter(TempFileName, false, FileEncoding);
				 
				Boolean FileModified=false;
			    String^ Str;
				String ^delimStr = " ,\t";
				array <String^>^split;
				array <Char>^delimiter = delimStr->ToCharArray();
				while ((Str = din->ReadLine()) != nullptr) {
					if (Str->Contains ("Copyright (c)") && Str->Contains ("Insyde Software Corporation. All Rights Reserved.")) {
						//String ^OldYear = Str->Substring(Str->IndexOf('-')+1,4);
						split = Str->Substring(Str->IndexOf('-')+1)->Split(delimiter, 2, StringSplitOptions::RemoveEmptyEntries);
						String ^OldYear = split[0];
						if (String::Compare(OldYear, textBoxCopyright->Text) != 0) {
							Str = Str->Replace(OldYear, textBoxCopyright->Text);
							FileModified = true;
						}
					}
					dout->WriteLine(Str);
				}

				din->Close();
				dout->Close();

				if (FileModified) {
					if (checkBoxTarget->Checked) {
						file = file->Replace(comboBoxSource->Text, comboBoxTarget->Text);
						if (File::Exists(file)) {
							File::Delete(file);
						} else {
							if (!Directory::Exists(Path::GetDirectoryName(file))) {
								Directory::CreateDirectory(Path::GetDirectoryName(file));
							}
						}
					} else {
						File::Delete(file);
					}
					File::Move(TempFileName, file);
					if (!FileModifiedAlready) {
						modifiedCount++;
					}
				} else {
					File::Delete(TempFileName);
				}
			 }

	private: System::Text::Encoding ^ GetFileEncodingViaBOM(String^ file) {
				array<Byte>^dataArray = gcnew array<Byte>(4);
				FileStream^ fileStream = gcnew FileStream( file,FileMode::Open );
				Encoding ^encoding = Encoding::ASCII;
				try {
					for (int i=0; i<3; i++) {
						dataArray[i] = fileStream->ReadByte();
					}

					if (dataArray[0] == 0xFF && dataArray[1] == 0xFE) {
						encoding = Encoding::Unicode;
					} else if (dataArray[0] == 0xFE && dataArray[1] == 0xFF) {
						encoding = Encoding::BigEndianUnicode;
					} else if (dataArray[0] == 0xEF && dataArray[1] == 0xBB && dataArray[2] == 0xBF) {
						encoding = Encoding::UTF8;
					} else if (dataArray[0] == 0xFF && dataArray[1] == 0xFE && dataArray[2] == 0x00 && dataArray[3] == 0x00) {
						encoding = Encoding::UTF32 ;
					}

					return encoding;
				}
				finally
				{
				  fileStream->Close();
				}
			 }

	private: Boolean IsOldComment(String^ strComment) {
				 if (!checkBoxCutOffDate->Checked)
					 return true;
				 String ^dateInComment = strComment->Substring(strComment->IndexOf('-')+1);
				 dateInComment = dateInComment->Substring(dateInComment->IndexOf('-')+1, 6);
				 String ^dateRequested = dateTimePicker1->Value.ToString("yyMMdd");
				 return (String::Compare(dateRequested, dateInComment) > 0);
			 }

	private: System::Void ResetControls() {
				toolStripProgressBar1->Maximum = 0;
				checkedListBoxExtension->Items->Clear();
				checkedListBoxFileName->Items->Clear();
			 }

	private: System::Void SaveSettings(Void) {
				RegistryKey ^appKey = Registry::CurrentUser->CreateSubKey("Software\\Insyde\\" + APP_KEY);

				RegistryKey ^sourcePathKey = appKey->OpenSubKey(SOURCE_PATH_KEY, true);
				if (sourcePathKey != nullptr) {
					appKey->DeleteSubKeyTree(SOURCE_PATH_KEY);
				}
				sourcePathKey = appKey->CreateSubKey(SOURCE_PATH_KEY);
				for (int i=0; i<comboBoxSource->Items->Count && i < MAX_LOCATION_SAVED; i++) {
					comboBoxSource->SelectedIndex = i;
					sourcePathKey->SetValue(i.ToString() , comboBoxSource->Text);
				}

				RegistryKey ^targetPathKey = appKey->OpenSubKey(TARGET_PATH_KEY, true);
				if (targetPathKey != nullptr) {
					appKey->DeleteSubKeyTree(TARGET_PATH_KEY);
				}
				targetPathKey = appKey->CreateSubKey(TARGET_PATH_KEY);
				for (int i=0; i<comboBoxTarget->Items->Count && i < MAX_LOCATION_SAVED; i++) {
					comboBoxTarget->SelectedIndex = i;
					targetPathKey->SetValue(i.ToString() , comboBoxTarget->Text);
				}

				IEnumerator^ Enum;
				array <String ^>^ Extensions = gcnew array <String ^> (checkedListBoxExtension->CheckedItems->Count);
				Enum = checkedListBoxExtension->CheckedIndices->GetEnumerator();
				int i=0;
				while (Enum->MoveNext()) {
					Int32 indexChecked = *safe_cast<Int32^>(Enum->Current);
					checkedListBoxExtension->SetSelected(indexChecked,true);
					Extensions[i++] = checkedListBoxExtension->Text;
				}
				appKey->SetValue(EXTENSION_VALUE, Extensions);

				array <String ^>^ FileNames = gcnew array <String ^> (checkedListBoxFileName->CheckedItems->Count);
				Enum = checkedListBoxFileName->CheckedIndices->GetEnumerator();
				i=0;
				while (Enum->MoveNext()) {
					Int32 indexChecked = *safe_cast<Int32^>(Enum->Current);
					checkedListBoxFileName->SetSelected(indexChecked,true);
					FileNames[i++] = checkedListBoxFileName->Text;
				}
				appKey->SetValue(FILENAME_VALUE, FileNames);

				appKey->SetValue(ENABLE_TARGET_VALUE, checkBoxTarget->Checked);
				appKey->SetValue(UPDATE_COPYRIGHT_VALUE, checkBoxUpdateCopyright->Checked);
				appKey->SetValue(COPYRIGHT_YEAR_VALUE, textBoxCopyright->Text);
				appKey->SetValue(START_ANCHOR_VALUE, textBoxStartingAnchor->Text);
				appKey->SetValue(END_ANCHOR_VALUE, textBoxEndingAnchor->Text);
				appKey->SetValue(ENABLE_REMOVE_BEFORE_VALUE, checkBoxCutOffDate->Checked);
				appKey->SetValue(REMOVE_BEFORE_VALUE, dateTimePicker1->Value.ToString("yyyy/MM/dd"));
				appKey->SetValue(REMOVE_ADD_VALUE, checkBoxAdd->Checked);
				appKey->SetValue(REMOVE_MODIFY_VALUE, checkBoxModify->Checked);
				appKey->SetValue(REMOVE_REMOVE_VALUE, checkBoxRemove->Checked);
				appKey->SetValue(REMOVE_CUSTOMIZE_STRING_VALUE, checkBoxCustomized->Checked);
				appKey->SetValue(CUSTOMIZE_STRING_VALUE, textBoxCustomized->Text);
			 }

	private: System::Void RestoreSettings(Void) {
				RegistryKey ^appKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde\\" + APP_KEY);
				if (appKey == nullptr) {
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_VERSION);
					return;
				}
				String ^Str = (String ^)appKey->GetValue(APP_VERSION_VALUE, "0.0");
				if (String::Compare(APP_VERSION, Str) != 0) {
					RegistryKey ^appFamilyKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde", true);
					appFamilyKey->DeleteSubKeyTree (APP_KEY);
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_VERSION);
					return;
				}

				RegistryKey ^sourcePathKey = appKey->OpenSubKey(SOURCE_PATH_KEY);
				if (sourcePathKey != nullptr) {
					for (int i=0; i < MAX_LOCATION_SAVED; i++) {
						String ^PathName = (String ^)sourcePathKey->GetValue(i.ToString());
						if (String::IsNullOrEmpty(PathName)) break;
						comboBoxSource->Items->Add(PathName);
					}
				}
				if (comboBoxSource->Items->Count > 0)
					comboBoxSource->SelectedIndex = 0;

				RegistryKey ^targetPathKey = appKey->OpenSubKey(TARGET_PATH_KEY);
				if (targetPathKey != nullptr) {
					for (int i=0; i < MAX_LOCATION_SAVED; i++) {
						String ^PathName = (String ^)targetPathKey->GetValue(i.ToString());
						if (String::IsNullOrEmpty(PathName)) break;
						comboBoxTarget->Items->Add(PathName);
					}
				}
				if (comboBoxTarget->Items->Count > 0)
					comboBoxTarget->SelectedIndex = 0;

				array <String ^>^ Extensions = (array <String ^>^)appKey->GetValue(EXTENSION_VALUE, nullptr);
				if (Extensions != nullptr) {
					checkedListBoxExtension->Items->Clear();
					for (int i=0; i<Extensions->Length; i++) {
						checkedListBoxExtension->Items->Add(Extensions[i], true);
					}
				}
				array <String ^>^ FileNames = (array <String ^>^)appKey->GetValue(FILENAME_VALUE, nullptr);
				if (FileNames != nullptr) {
					checkedListBoxFileName->Items->Clear();
					for (int i=0; i<FileNames->Length; i++) {
						checkedListBoxFileName->Items->Add(FileNames[i], true);
					}
				}

				DateTime ^DTToday = DateTime::Today;
				String ^ThisYear = System::Convert::ToString(DTToday->Year);
				String ^RBDate = ThisYear + "/01/01";

				checkBoxTarget->Checked				=  Boolean::Parse((String ^) appKey->GetValue(ENABLE_TARGET_VALUE, "False"));
				checkBoxUpdateCopyright->Checked	=  Boolean::Parse((String ^) appKey->GetValue(UPDATE_COPYRIGHT_VALUE, "False"));
				textBoxCopyright->Text				=                 (String ^) appKey->GetValue(COPYRIGHT_YEAR_VALUE, ThisYear);
				textBoxStartingAnchor->Text			=                 (String ^) appKey->GetValue(START_ANCHOR_VALUE, "[-start-");
				textBoxEndingAnchor->Text			=                 (String ^) appKey->GetValue(END_ANCHOR_VALUE, "[-end-");
				checkBoxCutOffDate->Checked			=  Boolean::Parse((String ^) appKey->GetValue(ENABLE_REMOVE_BEFORE_VALUE, "False"));
				dateTimePicker1->Value				= DateTime::Parse((String ^) appKey->GetValue(REMOVE_BEFORE_VALUE, RBDate));
				checkBoxAdd->Checked				=  Boolean::Parse((String ^) appKey->GetValue(REMOVE_ADD_VALUE, "True"));
				checkBoxModify->Checked				=  Boolean::Parse((String ^) appKey->GetValue(REMOVE_MODIFY_VALUE, "False"));
				checkBoxRemove->Checked				=  Boolean::Parse((String ^) appKey->GetValue(REMOVE_REMOVE_VALUE, "True"));
				checkBoxCustomized->Checked			=  Boolean::Parse((String ^) appKey->GetValue(REMOVE_CUSTOMIZE_STRING_VALUE, "False"));
				textBoxCustomized->Text				=                 (String ^) appKey->GetValue(CUSTOMIZE_STRING_VALUE, "");
			 }

	private: System::Void SaveDefaultTypeSettings(Void) {
				int i;
				IEnumerator^ Enum;

				array <String ^>^ Extensions = gcnew array <String ^> (checkedListBoxExtension->CheckedItems->Count);
				Enum = checkedListBoxExtension->CheckedIndices->GetEnumerator();
				i=0;
				while (Enum->MoveNext()) {
					Int32 indexChecked = *safe_cast<Int32^>(Enum->Current);
					checkedListBoxExtension->SetSelected(indexChecked,true);
					Extensions[i++] = checkedListBoxExtension->Text;
				}
				Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, DEFAULT_EXTENSION_VALUE, Extensions);

				array <String ^>^ FileNames = gcnew array <String ^> (checkedListBoxFileName->CheckedItems->Count);
				Enum = checkedListBoxFileName->CheckedIndices->GetEnumerator();
				i=0;
				while (Enum->MoveNext()) {
					Int32 indexChecked = *safe_cast<Int32^>(Enum->Current);
					checkedListBoxFileName->SetSelected(indexChecked,true);
					FileNames[i++] = checkedListBoxFileName->Text;
				}
				Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, DEFAULT_FILENAME_VALUE, FileNames);
			 }

	private: System::Void RestoreDefaultTypeSettings(Void) {
				array <String ^>^ Extensions;
				array <String ^>^ FileNames;

				checkedListBoxExtension->Items->Clear();
				Extensions = (array <String ^>^)Registry::GetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, DEFAULT_EXTENSION_VALUE, (array <String ^>^)nullptr);
				if (Extensions == nullptr) {
					Extensions = gcnew array <String ^> {".act", ".asi", ".asl", ".asm", ".c", ".dsc", ".dxs", ".env", ".equ", ".fdf", ".h", ".inc", ".inf", ".mak", ".new", ".template", ".uni", ".vfr"};
				} 
				for (int i=0; i<Extensions->Length; i++) {
					checkedListBoxExtension->Items->Add(Extensions[i], true);
				}

				checkedListBoxFileName->Items->Clear();
				FileNames = (array <String ^>^)Registry::GetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, DEFAULT_FILENAME_VALUE, (array <String ^>^)nullptr);
				if (FileNames == nullptr) {
					FileNames = gcnew array <String ^> {"makefile"} ;
				}
				for (int i=0; i<FileNames->Length; i++) {
					checkedListBoxFileName->Items->Add(FileNames[i], true);
				}
			 }

	private: System::Void buttonBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxSource->Text)){
					 this->folderBrowserDialog1->SelectedPath = comboBoxSource->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					comboBoxSource->Text = folderBrowserDialog1->SelectedPath;
					int index = comboBoxSource->FindStringExact(comboBoxSource->Text);
					if ( index == -1) {
						comboBoxSource->Items->Insert(0, folderBrowserDialog1->SelectedPath);
					} else {
						comboBoxSource->SelectedIndex = index;
						comboBoxSource->Items->Insert(0, comboBoxSource->SelectedItem);
						comboBoxSource->Items->RemoveAt(comboBoxSource->SelectedIndex);
						comboBoxSource->SelectedIndex = 0;
					}
					ResetControls();
				 }
			 }

	private: System::Void buttonBrowseTarget_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog1->ShowNewFolderButton = true;
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					comboBoxTarget->Text = folderBrowserDialog1->SelectedPath;
					int index = comboBoxTarget->FindStringExact(comboBoxTarget->Text);
					if ( index == -1) {
						comboBoxTarget->Items->Insert(0, folderBrowserDialog1->SelectedPath);
					} else {
						comboBoxTarget->SelectedIndex = index;
						comboBoxTarget->Items->Insert(0, comboBoxTarget->SelectedItem);
						comboBoxTarget->Items->RemoveAt(comboBoxTarget->SelectedIndex);
						comboBoxTarget->SelectedIndex = 0;
					}
				    checkBoxTarget->Checked = true;
					ResetControls();
				 }
				 folderBrowserDialog1->ShowNewFolderButton = false;
			 }

	private: System::Void buttonStartPurge_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ folder = comboBoxSource->Text;
				 if (!Directory::Exists( folder )) {
					 MessageBox::Show("Source directory does not exist.");
					 comboBoxSource->Items->RemoveAt(comboBoxSource->SelectedIndex);
					 comboBoxSource->Focus();
					 return;
				 }
				 if (checkBoxTarget->Checked) {
					 if (!Directory::Exists(comboBoxTarget->Text)) {
						 try 
						 {
							 Directory::CreateDirectory(comboBoxTarget->Text);
						 }
						 catch (ArgumentException^) 
						 {
							 MessageBox::Show("Target directory creation error.");
							 comboBoxTarget->Items->RemoveAt(comboBoxTarget->SelectedIndex);
							 comboBoxTarget->Focus();
							 return;
						 }
					 }
				 }
				 if (!checkBoxUpdateCopyright->Checked && !checkBoxAdd->Checked && !checkBoxModify->Checked && !checkBoxRemove->Checked && !checkBoxCustomized->Checked) {
					 MessageBox::Show("Check at least one action");
					 checkBoxAdd->Focus();
					 return;
				 }
 				 toolStripProgressBar1->Maximum = 0;
				 GetFileCount(folder);
  				 toolStripProgressBar1->Value=0;
  				 toolStripProgressBar1->Step=1;
				 modifiedCount=0;
				 EnumerateFiles(folder);
				 String ^modifiedUnit = (modifiedCount > 1 ? "files" : "file");
				 String ^totalUnit = (toolStripProgressBar1->Maximum > 1 ? "files" : "file");
				 MessageBox::Show(modifiedCount.ToString() + " " + modifiedUnit + " modified out of " + toolStripProgressBar1->Maximum.ToString() + " " + totalUnit + ".");
			 }

	private: System::Void buttonEnumerateFileTypes_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ folder = comboBoxSource->Text;
				 if (!Directory::Exists( folder )) {
					 MessageBox::Show("Source directory does not exist.");
					 comboBoxSource->Items->RemoveAt(comboBoxSource->SelectedIndex);
					 comboBoxSource->Focus();
					 return;
				 } else {
					 ResetControls();
					 EnumerateFileTypes(folder);
				 }
			 }

	private: System::Void buttonAll_Click(System::Object^  sender, System::EventArgs^  e) {
				for(int i = 0; i < checkedListBoxExtension->Items->Count; i++)
					checkedListBoxExtension->SetItemChecked (i, true);
				for(int i = 0; i < checkedListBoxFileName->Items->Count; i++)
					checkedListBoxFileName->SetItemChecked (i, true);
			 }

	private: System::Void buttonNone_Click(System::Object^  sender, System::EventArgs^  e) {
				for(int i = 0; i < checkedListBoxExtension->Items->Count; i++)
					checkedListBoxExtension->SetItemChecked (i, false);
				for(int i = 0; i < checkedListBoxFileName->Items->Count; i++)
					checkedListBoxFileName->SetItemChecked (i, false);
			 }

	private: System::Void buttonSaveDefault_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 SaveDefaultTypeSettings();
			 }

	private: System::Void buttonRestoreDefault_Click(System::Object^  sender, System::EventArgs^  e) {
				 RestoreDefaultTypeSettings();
			 }

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 //textBoxCopyright->Text = dateTimePicker1->Value.Year.ToString(); 
			 }

	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 SaveSettings();
			 }

	private: System::Void comboBoxSource_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
				 comboBoxSource->Items->Insert(0, comboBoxSource->SelectedItem);
				 comboBoxSource->Items->RemoveAt(comboBoxSource->SelectedIndex);
				 comboBoxSource->SelectedIndex = 0;
				 ResetControls();
 			 }

	private: System::Void comboBoxTarget_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
				 comboBoxTarget->Items->Insert(0, comboBoxTarget->SelectedItem);
				 comboBoxTarget->Items->RemoveAt(comboBoxTarget->SelectedIndex);
				 comboBoxTarget->SelectedIndex = 0;
				 checkBoxTarget->Checked = true;
			 }

	private: System::Void comboBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (e->KeyCode == Keys::Delete) {
					if (((System::Windows::Forms::ComboBox^)sender)->Items->Count > 0) {
						((System::Windows::Forms::ComboBox^)sender)->Items->RemoveAt(((System::Windows::Forms::ComboBox^)sender)->SelectedIndex);
					}
				 }
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 toolTip1->SetToolTip(this->comboBoxSource, "An exist source directory");
				 toolTip1->SetToolTip(this->checkBoxTarget, "Generate result files to following directory indicated");
				 toolTip1->SetToolTip(this->comboBoxTarget, "Directory to generate result files");
				 toolTip1->SetToolTip(this->checkBoxUpdateCopyright, "Update copyright year within copyright file header");
				 toolTip1->SetToolTip(this->textBoxCopyright, "Copyright year, this will be updated automatically after the date after \"" + this->checkBoxCutOffDate->Text + "\" changed");
				 toolTip1->SetToolTip(this->textBoxStartingAnchor, "Anchor string of a footprint starting line, customizable");
				 toolTip1->SetToolTip(this->textBoxEndingAnchor, "Anchor string of a footprint ending line, customizable");
				 toolTip1->SetToolTip(this->checkBoxAdd, "Remove footprint lines for adding codes");
				 toolTip1->SetToolTip(this->checkBoxModify, "Remove footprint lines for modifying codes");
				 toolTip1->SetToolTip(this->checkBoxCustomized, "Remove footprint lines with user specified string");
				 toolTip1->SetToolTip(this->textBoxCustomized, "User specified string");
				 toolTip1->SetToolTip(this->checkBoxRemove, "Remove footprint lines for removing codes");
				 toolTip1->SetToolTip(this->buttonEnumerateFileTypes, "Enumerate all file types within " + this->labelSource->Text);
				 toolTip1->SetToolTip(this->checkedListBoxExtension, "List of all file extensions");
				 toolTip1->SetToolTip(this->checkedListBoxFileName, "List of all file names of files without an extension");
				 toolTip1->SetToolTip(this->buttonAll, "Select all file types");
				 toolTip1->SetToolTip(this->buttonNone, "Deselect all file types");
				 toolTip1->SetToolTip(this->buttonSaveDefault, "Save current selected file types as default types");
				 toolTip1->SetToolTip(this->buttonRestoreDefault, "Restore type selection from default setting");
			 }

	};
}


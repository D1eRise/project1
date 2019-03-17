#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace �������� {

	/// <summary>
	/// ������ ��� Form31
	///
	/// ��������! ��� ��������� ����� ����� ������ ���������� ����� ��������
	///          �������� ����� ����� �������� ("Resource File Name") ��� �������� ���������� ������������ �������,
	///          ���������� �� ����� ������� � ����������� .resx, �� ������� ������� ������ �����. � ��������� ������,
	///          ������������ �� ������ ��������� �������� � ���������������
	///          ���������, ��������������� ������ �����.
	/// </summary>
	public ref class Form31 : public System::Windows::Forms::Form
	{
	public:
		Form31(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			oleDbDataAdapter1->SelectCommand->Parameters[0]->Value="%%";
			oleDbDataAdapter1->SelectCommand->Parameters[1]->Value="%%";
			oleDbDataAdapter1->SelectCommand->Parameters[2]->Value="%%";
			oleDbDataAdapter1->SelectCommand->Parameters[3]->Value="%%";
			oleDbDataAdapter1->Fill(dataSet21->Tables[0]);
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form31()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	protected: 
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: My::DataSet2^  dataSet21;
	private: System::Windows::Forms::BindingSource^  �������1BindingSource;
	private: System::Windows::Forms::BindingNavigator^  �������1BindingNavigator;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^  bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^  bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator2;
	private: System::Windows::Forms::ToolStripButton^  �������1BindingNavigatorSaveItem;
	private: System::Windows::Forms::DataGridView^  �������1DataGridView;






	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form31::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet21 = (gcnew My::DataSet2());
			this->�������1BindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->�������1BindingNavigator = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������1BindingNavigatorSaveItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������1DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1BindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1BindingNavigator))->BeginInit();
			this->�������1BindingNavigator->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1DataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        ���, �������������, [���� ������], �������, ����, �����\r\nFROM      " 
				L"      �������1\r\nWHERE        (������������� LIKE \?) AND ([���� ������] LIKE \?) A" 
				L"ND (����� LIKE \?) AND (������� LIKE \?)";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			this->oleDbSelectCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {(gcnew System::Data::OleDb::OleDbParameter(L"�������������", 
				System::Data::OleDb::OleDbType::WChar, 255, L"�������������")), (gcnew System::Data::OleDb::OleDbParameter(L"����_������", 
				System::Data::OleDb::OleDbType::WChar, 255, L"���� ������")), (gcnew System::Data::OleDb::OleDbParameter(L"�����", System::Data::OleDb::OleDbType::WChar, 
				255, L"�����")), (gcnew System::Data::OleDb::OleDbParameter(L"�������", System::Data::OleDb::OleDbType::WChar, 255, L"�������"))});
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\��\\����������.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `�������1` (`�������������`, `���� ������`, `�������`, `����`, `�����" 
				L"`) VALUES (\?, \?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"�������������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"�������������")), (gcnew System::Data::OleDb::OleDbParameter(L"����_������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"���� ������")), (gcnew System::Data::OleDb::OleDbParameter(L"�������", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"�������")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::Integer, 0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"�����", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"�����"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(16) {(gcnew System::Data::OleDb::OleDbParameter(L"�������������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"�������������")), (gcnew System::Data::OleDb::OleDbParameter(L"����_������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"���� ������")), (gcnew System::Data::OleDb::OleDbParameter(L"�������", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"�������")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::Integer, 0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"�����", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"�����")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"���", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������������", System::Data::OleDb::OleDbType::Integer, 0, 
				System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�������������", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������������", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�������������", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����_������", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"���� ������", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����_������", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"���� ������", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�������", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�������", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����", System::Data::OleDb::OleDbType::Integer, 0, 
				System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�����", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�����", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_�����", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"�����", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_���", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"���", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������������", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"�������������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"�������������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����_������", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"���� ������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����_������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"���� ������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"�������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"�������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"����", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�����", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"�����", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�����", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"�����", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"���", 
				L"���")), (gcnew System::Data::Common::DataColumnMapping(L"�������������", L"�������������")), (gcnew System::Data::Common::DataColumnMapping(L"���� ������", 
				L"���� ������")), (gcnew System::Data::Common::DataColumnMapping(L"�������", L"�������")), (gcnew System::Data::Common::DataColumnMapping(L"����", 
				L"����")), (gcnew System::Data::Common::DataColumnMapping(L"�����", L"�����"))};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"�������1", __mcTemp__1))});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// dataSet21
			// 
			this->dataSet21->DataSetName = L"DataSet2";
			this->dataSet21->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// �������1BindingSource
			// 
			this->�������1BindingSource->DataMember = L"�������1";
			this->�������1BindingSource->DataSource = this->dataSet21;
			// 
			// �������1BindingNavigator
			// 
			this->�������1BindingNavigator->AddNewItem = this->bindingNavigatorAddNewItem;
			this->�������1BindingNavigator->BindingSource = this->�������1BindingSource;
			this->�������1BindingNavigator->CountItem = this->bindingNavigatorCountItem;
			this->�������1BindingNavigator->DeleteItem = this->bindingNavigatorDeleteItem;
			this->�������1BindingNavigator->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->bindingNavigatorMoveFirstItem, 
				this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem, 
				this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2, 
				this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->�������1BindingNavigatorSaveItem});
			this->�������1BindingNavigator->Location = System::Drawing::Point(0, 0);
			this->�������1BindingNavigator->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->�������1BindingNavigator->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->�������1BindingNavigator->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->�������1BindingNavigator->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->�������1BindingNavigator->Name = L"�������1BindingNavigator";
			this->�������1BindingNavigator->PositionItem = this->bindingNavigatorPositionItem;
			this->�������1BindingNavigator->Size = System::Drawing::Size(672, 25);
			this->�������1BindingNavigator->TabIndex = 0;
			this->�������1BindingNavigator->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorAddNewItem->Text = L"��������";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(43, 22);
			this->bindingNavigatorCountItem->Text = L"��� {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"����� ����� ���������";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"�������";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveFirstItem->Text = L"����������� � ������";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMovePreviousItem->Text = L"����������� �����";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"���������";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"������� ���������";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveNextItem->Text = L"����������� ������";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveLastItem->Text = L"����������� � �����";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// �������1BindingNavigatorSaveItem
			// 
			this->�������1BindingNavigatorSaveItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������1BindingNavigatorSaveItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������1BindingNavigatorSaveItem.Image")));
			this->�������1BindingNavigatorSaveItem->Name = L"�������1BindingNavigatorSaveItem";
			this->�������1BindingNavigatorSaveItem->Size = System::Drawing::Size(23, 22);
			this->�������1BindingNavigatorSaveItem->Text = L"��������� ������";
			this->�������1BindingNavigatorSaveItem->Click += gcnew System::EventHandler(this, &Form31::�������1BindingNavigatorSaveItem_Click);
			// 
			// �������1DataGridView
			// 
			this->�������1DataGridView->AutoGenerateColumns = false;
			this->�������1DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->�������1DataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn4, 
				this->dataGridViewTextBoxColumn5});
			this->�������1DataGridView->DataSource = this->�������1BindingSource;
			this->�������1DataGridView->Location = System::Drawing::Point(12, 83);
			this->�������1DataGridView->Name = L"�������1DataGridView";
			this->�������1DataGridView->Size = System::Drawing::Size(649, 340);
			this->�������1DataGridView->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->DataPropertyName = L"���";
			this->dataGridViewTextBoxColumn1->HeaderText = L"���";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->DataPropertyName = L"�������������";
			this->dataGridViewTextBoxColumn2->HeaderText = L"�������������";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->DataPropertyName = L"���� ������";
			this->dataGridViewTextBoxColumn3->HeaderText = L"���� ������";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->DataPropertyName = L"�����";
			this->dataGridViewTextBoxColumn6->HeaderText = L"�����";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->DataPropertyName = L"�������";
			this->dataGridViewTextBoxColumn4->HeaderText = L"�������";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->DataPropertyName = L"����";
			this->dataGridViewTextBoxColumn5->HeaderText = L"����";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form31::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form31::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(359, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(254, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"������� �������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"������� ���� ������:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"������ �������������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(254, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"������� �����:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(359, 32);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 19;
			// 
			// Form31
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 433);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->�������1DataGridView);
			this->Controls->Add(this->�������1BindingNavigator);
			this->Name = L"Form31";
			this->Text = L"����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1BindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1BindingNavigator))->EndInit();
			this->�������1BindingNavigator->ResumeLayout(false);
			this->�������1BindingNavigator->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->�������1DataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void �������1BindingNavigatorSaveItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 oleDbDataAdapter1->Update(dataSet21->Tables["�������1"]);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataSet21->Clear();
			 oleDbDataAdapter1->SelectCommand->Parameters[0]->Value="%" + textBox1->Text + "%";
			 oleDbDataAdapter1->SelectCommand->Parameters[1]->Value="%" + textBox2->Text + "%";
			 oleDbDataAdapter1->SelectCommand->Parameters[2]->Value="%" + textBox4->Text + "%";
			 oleDbDataAdapter1->SelectCommand->Parameters[3]->Value="%" + textBox3->Text + "%";
			 oleDbDataAdapter1->Fill(dataSet21->Tables["�������1"]);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataSet21->Clear();
			 oleDbDataAdapter1->SelectCommand->Parameters[0]->Value="%%";
			 oleDbDataAdapter1->SelectCommand->Parameters[1]->Value="%%";
			 oleDbDataAdapter1->SelectCommand->Parameters[2]->Value="%%";
			 oleDbDataAdapter1->SelectCommand->Parameters[3]->Value="%%";
			 oleDbDataAdapter1->Fill(dataSet21->Tables["�������1"]);
			 textBox1->Text="";
			 textBox2->Text="";
			 textBox3->Text="";
		 }
};
}

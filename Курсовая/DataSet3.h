#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// Этот исходный код был создан с помощью xsd, версия=2.0.50727.3038.
// 
namespace My {
    using namespace System;
    ref class DataSet3;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"2.0.0.0"), 
    System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"DataSet3"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class DataSet3 : public ::System::Data::DataSet {
        public : ref class Таблица1DataTable;
        public : ref class Таблица1Row;
        public : ref class Таблица1RowChangeEvent;
        
        private: My::DataSet3::Таблица1DataTable^  tableТаблица1;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : delegate System::Void Таблица1RowChangeEventHandler(::System::Object^  sender, My::DataSet3::Таблица1RowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        DataSet3();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        DataSet3(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property My::DataSet3::Таблица1DataTable^  Таблица1 {
            My::DataSet3::Таблица1DataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::ComponentModel::BrowsableAttribute(true), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
        virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
            ::System::Data::SchemaSerializationMode get() override;
            System::Void set(::System::Data::SchemaSerializationMode value) override;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataTableCollection^  Tables {
            ::System::Data::DataTableCollection^  get() new;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataRelationCollection^  Relations {
            ::System::Data::DataRelationCollection^  get() new;
        }
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Void InitializeDerivedDataSet() override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Data::DataSet^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Boolean ShouldSerializeTables() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Boolean ShouldSerializeRelations() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        ::System::Void InitVars();
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        ::System::Void InitVars(::System::Boolean initTable);
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        ::System::Void InitClass();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        ::System::Boolean ShouldSerializeТаблица1();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"2.0.0.0"), 
        System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class Таблица1DataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnКод;
            
            private: ::System::Data::DataColumn^  columnПреподаватель;
            
            private: ::System::Data::DataColumn^  columnКласс;
            
            private: ::System::Data::DataColumn^  columnПредмет;
            
            private: ::System::Data::DataColumn^  columnДЗ;
            
            private: ::System::Data::DataColumn^  columnДата;
            
            public: event My::DataSet3::Таблица1RowChangeEventHandler^  Таблица1RowChanging;
            
            public: event My::DataSet3::Таблица1RowChangeEventHandler^  Таблица1RowChanged;
            
            public: event My::DataSet3::Таблица1RowChangeEventHandler^  Таблица1RowDeleting;
            
            public: event My::DataSet3::Таблица1RowChangeEventHandler^  Таблица1RowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            Таблица1DataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            Таблица1DataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            Таблица1DataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  КодColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  ПреподавательColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  КлассColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  ПредметColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  ДЗColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataColumn^  ДатаColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property My::DataSet3::Таблица1Row^  default [::System::Int32 ] {
                My::DataSet3::Таблица1Row^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void AddТаблица1Row(My::DataSet3::Таблица1Row^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            My::DataSet3::Таблица1Row^  AddТаблица1Row(System::String^  Преподаватель, System::String^  Класс, System::String^  Предмет, 
                        System::String^  ДЗ, System::DateTime Дата);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            My::DataSet3::Таблица1Row^  FindByКод(System::Int32 Код);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            My::DataSet3::Таблица1Row^  NewТаблица1Row();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void RemoveТаблица1Row(My::DataSet3::Таблица1Row^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"2.0.0.0")]
        ref class Таблица1Row : public ::System::Data::DataRow {
            
            private: My::DataSet3::Таблица1DataTable^  tableТаблица1;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            Таблица1Row(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::Int32 Код {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::String^  Преподаватель {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::String^  Класс {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::String^  Предмет {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::String^  ДЗ {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property System::DateTime Дата {
                System::DateTime get();
                System::Void set(System::DateTime value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Boolean IsПреподавательNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void SetПреподавательNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Boolean IsКлассNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void SetКлассNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Boolean IsПредметNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void SetПредметNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Boolean IsДЗNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void SetДЗNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Boolean IsДатаNull();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            ::System::Void SetДатаNull();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"2.0.0.0")]
        ref class Таблица1RowChangeEvent : public ::System::EventArgs {
            
            private: My::DataSet3::Таблица1Row^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            Таблица1RowChangeEvent(My::DataSet3::Таблица1Row^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property My::DataSet3::Таблица1Row^  Row {
                My::DataSet3::Таблица1Row^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
    };
}
namespace My {
    
    
    inline DataSet3::DataSet3() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &My::DataSet3::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline DataSet3::DataSet3(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &My::DataSet3::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"Таблица1"] != nullptr) {
                __super::Tables->Add((gcnew My::DataSet3::Таблица1DataTable(ds->Tables[L"Таблица1"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        }
        this->GetSerializationData(info, context);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &My::DataSet3::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline My::DataSet3::Таблица1DataTable^  DataSet3::Таблица1::get() {
        return this->tableТаблица1;
    }
    
    inline ::System::Data::SchemaSerializationMode DataSet3::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void DataSet3::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  DataSet3::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  DataSet3::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void DataSet3::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  DataSet3::Clone() {
        My::DataSet3^  cln = (cli::safe_cast<My::DataSet3^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean DataSet3::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean DataSet3::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void DataSet3::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"Таблица1"] != nullptr) {
                __super::Tables->Add((gcnew My::DataSet3::Таблица1DataTable(ds->Tables[L"Таблица1"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXml(reader);
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchema^  DataSet3::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void DataSet3::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void DataSet3::InitVars(::System::Boolean initTable) {
        this->tableТаблица1 = (cli::safe_cast<My::DataSet3::Таблица1DataTable^  >(__super::Tables[L"Таблица1"]));
        if (initTable == true) {
            if (this->tableТаблица1 != nullptr) {
                this->tableТаблица1->InitVars();
            }
        }
    }
    
    inline ::System::Void DataSet3::InitClass() {
        this->DataSetName = L"DataSet3";
        this->Prefix = L"";
        this->Namespace = L"http://tempuri.org/DataSet3.xsd";
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableТаблица1 = (gcnew My::DataSet3::Таблица1DataTable());
        __super::Tables->Add(this->tableТаблица1);
    }
    
    inline ::System::Boolean DataSet3::ShouldSerializeТаблица1() {
        return false;
    }
    
    inline ::System::Void DataSet3::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  DataSet3::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        My::DataSet3^  ds = (gcnew My::DataSet3());
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any->Namespace = ds->Namespace;
        sequence->Items->Add(any);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline DataSet3::Таблица1DataTable::Таблица1DataTable() {
        this->TableName = L"Таблица1";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline DataSet3::Таблица1DataTable::Таблица1DataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline DataSet3::Таблица1DataTable::Таблица1DataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::КодColumn::get() {
        return this->columnКод;
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::ПреподавательColumn::get() {
        return this->columnПреподаватель;
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::КлассColumn::get() {
        return this->columnКласс;
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::ПредметColumn::get() {
        return this->columnПредмет;
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::ДЗColumn::get() {
        return this->columnДЗ;
    }
    
    inline ::System::Data::DataColumn^  DataSet3::Таблица1DataTable::ДатаColumn::get() {
        return this->columnДата;
    }
    
    inline ::System::Int32 DataSet3::Таблица1DataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline My::DataSet3::Таблица1Row^  DataSet3::Таблица1DataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<My::DataSet3::Таблица1Row^  >(this->Rows[index]));
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::AddТаблица1Row(My::DataSet3::Таблица1Row^  row) {
        this->Rows->Add(row);
    }
    
    inline My::DataSet3::Таблица1Row^  DataSet3::Таблица1DataTable::AddТаблица1Row(System::String^  Преподаватель, System::String^  Класс, 
                System::String^  Предмет, System::String^  ДЗ, System::DateTime Дата) {
        My::DataSet3::Таблица1Row^  rowТаблица1Row = (cli::safe_cast<My::DataSet3::Таблица1Row^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(6) {nullptr, Преподаватель, 
            Класс, Предмет, ДЗ, Дата};
        rowТаблица1Row->ItemArray = columnValuesArray;
        this->Rows->Add(rowТаблица1Row);
        return rowТаблица1Row;
    }
    
    inline My::DataSet3::Таблица1Row^  DataSet3::Таблица1DataTable::FindByКод(System::Int32 Код) {
        return (cli::safe_cast<My::DataSet3::Таблица1Row^  >(this->Rows->Find(gcnew cli::array< System::Object^  >(1) {Код})));
    }
    
    inline ::System::Collections::IEnumerator^  DataSet3::Таблица1DataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  DataSet3::Таблица1DataTable::Clone() {
        My::DataSet3::Таблица1DataTable^  cln = (cli::safe_cast<My::DataSet3::Таблица1DataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  DataSet3::Таблица1DataTable::CreateInstance() {
        return (gcnew My::DataSet3::Таблица1DataTable());
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::InitVars() {
        this->columnКод = __super::Columns[L"Код"];
        this->columnПреподаватель = __super::Columns[L"Преподаватель"];
        this->columnКласс = __super::Columns[L"Класс"];
        this->columnПредмет = __super::Columns[L"Предмет"];
        this->columnДЗ = __super::Columns[L"ДЗ"];
        this->columnДата = __super::Columns[L"Дата"];
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::InitClass() {
        this->columnКод = (gcnew ::System::Data::DataColumn(L"Код", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnКод);
        this->columnПреподаватель = (gcnew ::System::Data::DataColumn(L"Преподаватель", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnПреподаватель);
        this->columnКласс = (gcnew ::System::Data::DataColumn(L"Класс", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnКласс);
        this->columnПредмет = (gcnew ::System::Data::DataColumn(L"Предмет", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnПредмет);
        this->columnДЗ = (gcnew ::System::Data::DataColumn(L"ДЗ", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnДЗ);
        this->columnДата = (gcnew ::System::Data::DataColumn(L"Дата", ::System::DateTime::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->columnДата);
        this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnКод}, 
                true)));
        this->columnКод->AutoIncrement = true;
        this->columnКод->AllowDBNull = false;
        this->columnКод->Unique = true;
        this->columnПреподаватель->MaxLength = 255;
        this->columnКласс->MaxLength = 255;
        this->columnПредмет->MaxLength = 255;
        this->columnДЗ->MaxLength = 255;
    }
    
    inline My::DataSet3::Таблица1Row^  DataSet3::Таблица1DataTable::NewТаблица1Row() {
        return (cli::safe_cast<My::DataSet3::Таблица1Row^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  DataSet3::Таблица1DataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew My::DataSet3::Таблица1Row(builder));
    }
    
    inline ::System::Type^  DataSet3::Таблица1DataTable::GetRowType() {
        return My::DataSet3::Таблица1Row::typeid;
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->Таблица1RowChanged(this, (gcnew My::DataSet3::Таблица1RowChangeEvent((cli::safe_cast<My::DataSet3::Таблица1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->Таблица1RowChanging(this, (gcnew My::DataSet3::Таблица1RowChangeEvent((cli::safe_cast<My::DataSet3::Таблица1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->Таблица1RowDeleted(this, (gcnew My::DataSet3::Таблица1RowChangeEvent((cli::safe_cast<My::DataSet3::Таблица1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->Таблица1RowDeleting(this, (gcnew My::DataSet3::Таблица1RowChangeEvent((cli::safe_cast<My::DataSet3::Таблица1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void DataSet3::Таблица1DataTable::RemoveТаблица1Row(My::DataSet3::Таблица1Row^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  DataSet3::Таблица1DataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        My::DataSet3^  ds = (gcnew My::DataSet3());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"Таблица1DataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline DataSet3::Таблица1Row::Таблица1Row(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableТаблица1 = (cli::safe_cast<My::DataSet3::Таблица1DataTable^  >(this->Table));
    }
    
    inline System::Int32 DataSet3::Таблица1Row::Код::get() {
        return (cli::safe_cast<::System::Int32 >(this[this->tableТаблица1->КодColumn]));
    }
    inline System::Void DataSet3::Таблица1Row::Код::set(System::Int32 value) {
        this[this->tableТаблица1->КодColumn] = value;
    }
    
    inline System::String^  DataSet3::Таблица1Row::Преподаватель::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableТаблица1->ПреподавательColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"Значение для столбца \'Преподаватель\' в таблице \'Таблица1\' равно DBNull.", 
                e));
        }
    }
    inline System::Void DataSet3::Таблица1Row::Преподаватель::set(System::String^  value) {
        this[this->tableТаблица1->ПреподавательColumn] = value;
    }
    
    inline System::String^  DataSet3::Таблица1Row::Класс::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableТаблица1->КлассColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"Значение для столбца \'Класс\' в таблице \'Таблица1\' равно DBNull.", 
                e));
        }
    }
    inline System::Void DataSet3::Таблица1Row::Класс::set(System::String^  value) {
        this[this->tableТаблица1->КлассColumn] = value;
    }
    
    inline System::String^  DataSet3::Таблица1Row::Предмет::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableТаблица1->ПредметColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"Значение для столбца \'Предмет\' в таблице \'Таблица1\' равно DBNull.", 
                e));
        }
    }
    inline System::Void DataSet3::Таблица1Row::Предмет::set(System::String^  value) {
        this[this->tableТаблица1->ПредметColumn] = value;
    }
    
    inline System::String^  DataSet3::Таблица1Row::ДЗ::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableТаблица1->ДЗColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"Значение для столбца \'ДЗ\' в таблице \'Таблица1\' равно DBNull.", 
                e));
        }
    }
    inline System::Void DataSet3::Таблица1Row::ДЗ::set(System::String^  value) {
        this[this->tableТаблица1->ДЗColumn] = value;
    }
    
    inline System::DateTime DataSet3::Таблица1Row::Дата::get() {
        try {
            return (cli::safe_cast<::System::DateTime >(this[this->tableТаблица1->ДатаColumn]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"Значение для столбца \'Дата\' в таблице \'Таблица1\' равно DBNull.", 
                e));
        }
    }
    inline System::Void DataSet3::Таблица1Row::Дата::set(System::DateTime value) {
        this[this->tableТаблица1->ДатаColumn] = value;
    }
    
    inline ::System::Boolean DataSet3::Таблица1Row::IsПреподавательNull() {
        return this->IsNull(this->tableТаблица1->ПреподавательColumn);
    }
    
    inline ::System::Void DataSet3::Таблица1Row::SetПреподавательNull() {
        this[this->tableТаблица1->ПреподавательColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean DataSet3::Таблица1Row::IsКлассNull() {
        return this->IsNull(this->tableТаблица1->КлассColumn);
    }
    
    inline ::System::Void DataSet3::Таблица1Row::SetКлассNull() {
        this[this->tableТаблица1->КлассColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean DataSet3::Таблица1Row::IsПредметNull() {
        return this->IsNull(this->tableТаблица1->ПредметColumn);
    }
    
    inline ::System::Void DataSet3::Таблица1Row::SetПредметNull() {
        this[this->tableТаблица1->ПредметColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean DataSet3::Таблица1Row::IsДЗNull() {
        return this->IsNull(this->tableТаблица1->ДЗColumn);
    }
    
    inline ::System::Void DataSet3::Таблица1Row::SetДЗNull() {
        this[this->tableТаблица1->ДЗColumn] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean DataSet3::Таблица1Row::IsДатаNull() {
        return this->IsNull(this->tableТаблица1->ДатаColumn);
    }
    
    inline ::System::Void DataSet3::Таблица1Row::SetДатаNull() {
        this[this->tableТаблица1->ДатаColumn] = ::System::Convert::DBNull;
    }
    
    
    inline DataSet3::Таблица1RowChangeEvent::Таблица1RowChangeEvent(My::DataSet3::Таблица1Row^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline My::DataSet3::Таблица1Row^  DataSet3::Таблица1RowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction DataSet3::Таблица1RowChangeEvent::Action::get() {
        return this->eventAction;
    }
}

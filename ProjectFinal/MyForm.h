#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;







	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::GroupBox^  groupBox2;






	private: System::Windows::Forms::BindingSource^  bindingSource1;








	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton1;
	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton2;
	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton3;
	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton4;
	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton5;
	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton6;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField7;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField6;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField5;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField4;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField3;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField2;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->materialSingleLineTextField7 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField6 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField5 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField4 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField3 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField2 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField1 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->materialFlatButton6 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialFlatButton5 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialFlatButton4 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialFlatButton3 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialFlatButton2 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialFlatButton1 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->materialSingleLineTextField7);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField6);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField5);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField4);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField3);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField2);
			this->groupBox1->Controls->Add(this->materialSingleLineTextField1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 271);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INFORMACION PERSONAL";
			// 
			// materialSingleLineTextField7
			// 
			this->materialSingleLineTextField7->Depth = 0;
			this->materialSingleLineTextField7->Hint = L"";
			this->materialSingleLineTextField7->Location = System::Drawing::Point(132, 237);
			this->materialSingleLineTextField7->MaxLength = 32767;
			this->materialSingleLineTextField7->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField7->Name = L"materialSingleLineTextField7";
			this->materialSingleLineTextField7->PasswordChar = '\0';
			this->materialSingleLineTextField7->SelectedText = L"";
			this->materialSingleLineTextField7->SelectionLength = 0;
			this->materialSingleLineTextField7->SelectionStart = 0;
			this->materialSingleLineTextField7->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField7->TabIndex = 17;
			this->materialSingleLineTextField7->TabStop = false;
			this->materialSingleLineTextField7->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField6
			// 
			this->materialSingleLineTextField6->Depth = 0;
			this->materialSingleLineTextField6->Hint = L"";
			this->materialSingleLineTextField6->Location = System::Drawing::Point(132, 202);
			this->materialSingleLineTextField6->MaxLength = 32767;
			this->materialSingleLineTextField6->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField6->Name = L"materialSingleLineTextField6";
			this->materialSingleLineTextField6->PasswordChar = '\0';
			this->materialSingleLineTextField6->SelectedText = L"";
			this->materialSingleLineTextField6->SelectionLength = 0;
			this->materialSingleLineTextField6->SelectionStart = 0;
			this->materialSingleLineTextField6->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField6->TabIndex = 15;
			this->materialSingleLineTextField6->TabStop = false;
			this->materialSingleLineTextField6->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField5
			// 
			this->materialSingleLineTextField5->Depth = 0;
			this->materialSingleLineTextField5->Hint = L"";
			this->materialSingleLineTextField5->Location = System::Drawing::Point(132, 166);
			this->materialSingleLineTextField5->MaxLength = 32767;
			this->materialSingleLineTextField5->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField5->Name = L"materialSingleLineTextField5";
			this->materialSingleLineTextField5->PasswordChar = '\0';
			this->materialSingleLineTextField5->SelectedText = L"";
			this->materialSingleLineTextField5->SelectionLength = 0;
			this->materialSingleLineTextField5->SelectionStart = 0;
			this->materialSingleLineTextField5->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField5->TabIndex = 14;
			this->materialSingleLineTextField5->TabStop = false;
			this->materialSingleLineTextField5->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField4
			// 
			this->materialSingleLineTextField4->Depth = 0;
			this->materialSingleLineTextField4->Hint = L"";
			this->materialSingleLineTextField4->Location = System::Drawing::Point(132, 132);
			this->materialSingleLineTextField4->MaxLength = 32767;
			this->materialSingleLineTextField4->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField4->Name = L"materialSingleLineTextField4";
			this->materialSingleLineTextField4->PasswordChar = '\0';
			this->materialSingleLineTextField4->SelectedText = L"";
			this->materialSingleLineTextField4->SelectionLength = 0;
			this->materialSingleLineTextField4->SelectionStart = 0;
			this->materialSingleLineTextField4->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField4->TabIndex = 13;
			this->materialSingleLineTextField4->TabStop = false;
			this->materialSingleLineTextField4->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField3
			// 
			this->materialSingleLineTextField3->Depth = 0;
			this->materialSingleLineTextField3->Hint = L"";
			this->materialSingleLineTextField3->Location = System::Drawing::Point(132, 97);
			this->materialSingleLineTextField3->MaxLength = 32767;
			this->materialSingleLineTextField3->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField3->Name = L"materialSingleLineTextField3";
			this->materialSingleLineTextField3->PasswordChar = '\0';
			this->materialSingleLineTextField3->SelectedText = L"";
			this->materialSingleLineTextField3->SelectionLength = 0;
			this->materialSingleLineTextField3->SelectionStart = 0;
			this->materialSingleLineTextField3->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField3->TabIndex = 12;
			this->materialSingleLineTextField3->TabStop = false;
			this->materialSingleLineTextField3->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField2
			// 
			this->materialSingleLineTextField2->Depth = 0;
			this->materialSingleLineTextField2->Hint = L"";
			this->materialSingleLineTextField2->Location = System::Drawing::Point(132, 62);
			this->materialSingleLineTextField2->MaxLength = 32767;
			this->materialSingleLineTextField2->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField2->Name = L"materialSingleLineTextField2";
			this->materialSingleLineTextField2->PasswordChar = '\0';
			this->materialSingleLineTextField2->SelectedText = L"";
			this->materialSingleLineTextField2->SelectionLength = 0;
			this->materialSingleLineTextField2->SelectionStart = 0;
			this->materialSingleLineTextField2->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField2->TabIndex = 11;
			this->materialSingleLineTextField2->TabStop = false;
			this->materialSingleLineTextField2->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField1
			// 
			this->materialSingleLineTextField1->Depth = 0;
			this->materialSingleLineTextField1->Hint = L"";
			this->materialSingleLineTextField1->Location = System::Drawing::Point(132, 27);
			this->materialSingleLineTextField1->MaxLength = 32767;
			this->materialSingleLineTextField1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField1->Name = L"materialSingleLineTextField1";
			this->materialSingleLineTextField1->PasswordChar = '\0';
			this->materialSingleLineTextField1->SelectedText = L"";
			this->materialSingleLineTextField1->SelectionLength = 0;
			this->materialSingleLineTextField1->SelectionStart = 0;
			this->materialSingleLineTextField1->Size = System::Drawing::Size(187, 23);
			this->materialSingleLineTextField1->TabIndex = 10;
			this->materialSingleLineTextField1->TabStop = false;
			this->materialSingleLineTextField1->UseSystemPasswordChar = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"JORNADA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"CARRERA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"CORREO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"CARNET";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"TELEFONO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"APELLIDO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"NOMBRE";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->materialFlatButton6);
			this->groupBox2->Controls->Add(this->materialFlatButton5);
			this->groupBox2->Controls->Add(this->materialFlatButton4);
			this->groupBox2->Controls->Add(this->materialFlatButton3);
			this->groupBox2->Controls->Add(this->materialFlatButton2);
			this->groupBox2->Controls->Add(this->materialFlatButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 289);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(933, 73);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"OPCIONES";
			// 
			// materialFlatButton6
			// 
			this->materialFlatButton6->AutoSize = true;
			this->materialFlatButton6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton6->Depth = 0;
			this->materialFlatButton6->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton6.Icon")));
			this->materialFlatButton6->Location = System::Drawing::Point(823, 24);
			this->materialFlatButton6->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton6->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton6->Name = L"materialFlatButton6";
			this->materialFlatButton6->Primary = false;
			this->materialFlatButton6->Size = System::Drawing::Size(103, 36);
			this->materialFlatButton6->TabIndex = 11;
			this->materialFlatButton6->Text = L"LIMPIAR";
			this->materialFlatButton6->UseMnemonic = false;
			this->materialFlatButton6->UseVisualStyleBackColor = true;
			this->materialFlatButton6->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton6_Click);
			// 
			// materialFlatButton5
			// 
			this->materialFlatButton5->AutoSize = true;
			this->materialFlatButton5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton5->Depth = 0;
			this->materialFlatButton5->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton5.Icon")));
			this->materialFlatButton5->Location = System::Drawing::Point(626, 24);
			this->materialFlatButton5->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton5->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton5->Name = L"materialFlatButton5";
			this->materialFlatButton5->Primary = false;
			this->materialFlatButton5->Size = System::Drawing::Size(182, 36);
			this->materialFlatButton5->TabIndex = 10;
			this->materialFlatButton5->Text = L"BUSQUEDA GENERAL";
			this->materialFlatButton5->UseMnemonic = false;
			this->materialFlatButton5->UseVisualStyleBackColor = true;
			this->materialFlatButton5->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton5_Click);
			// 
			// materialFlatButton4
			// 
			this->materialFlatButton4->AutoSize = true;
			this->materialFlatButton4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton4->Depth = 0;
			this->materialFlatButton4->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton4.Icon")));
			this->materialFlatButton4->Location = System::Drawing::Point(415, 24);
			this->materialFlatButton4->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton4->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton4->Name = L"materialFlatButton4";
			this->materialFlatButton4->Primary = false;
			this->materialFlatButton4->Size = System::Drawing::Size(196, 36);
			this->materialFlatButton4->TabIndex = 9;
			this->materialFlatButton4->Text = L"BUSQUEDA INDIVIDUAL";
			this->materialFlatButton4->UseMnemonic = false;
			this->materialFlatButton4->UseVisualStyleBackColor = true;
			this->materialFlatButton4->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton4_Click);
			// 
			// materialFlatButton3
			// 
			this->materialFlatButton3->AutoSize = true;
			this->materialFlatButton3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton3->Depth = 0;
			this->materialFlatButton3->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton3.Icon")));
			this->materialFlatButton3->Location = System::Drawing::Point(289, 24);
			this->materialFlatButton3->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton3->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton3->Name = L"materialFlatButton3";
			this->materialFlatButton3->Primary = false;
			this->materialFlatButton3->Size = System::Drawing::Size(111, 36);
			this->materialFlatButton3->TabIndex = 8;
			this->materialFlatButton3->Text = L"ELIMINAR";
			this->materialFlatButton3->UseVisualStyleBackColor = true;
			this->materialFlatButton3->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton3_Click);
			// 
			// materialFlatButton2
			// 
			this->materialFlatButton2->AutoSize = true;
			this->materialFlatButton2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton2->Depth = 0;
			this->materialFlatButton2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton2.Icon")));
			this->materialFlatButton2->Location = System::Drawing::Point(143, 24);
			this->materialFlatButton2->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton2->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton2->Name = L"materialFlatButton2";
			this->materialFlatButton2->Primary = false;
			this->materialFlatButton2->Size = System::Drawing::Size(131, 36);
			this->materialFlatButton2->TabIndex = 7;
			this->materialFlatButton2->Text = L"ACTUALIZAR";
			this->materialFlatButton2->UseVisualStyleBackColor = true;
			this->materialFlatButton2->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton2_Click);
			// 
			// materialFlatButton1
			// 
			this->materialFlatButton1->AutoSize = true;
			this->materialFlatButton1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->materialFlatButton1->Depth = 0;
			this->materialFlatButton1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton1.Icon")));
			this->materialFlatButton1->Location = System::Drawing::Point(7, 24);
			this->materialFlatButton1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton1->Name = L"materialFlatButton1";
			this->materialFlatButton1->Primary = false;
			this->materialFlatButton1->Size = System::Drawing::Size(121, 36);
			this->materialFlatButton1->TabIndex = 6;
			this->materialFlatButton1->Text = L"REGISTRAR";
			this->materialFlatButton1->UseVisualStyleBackColor = false;
			this->materialFlatButton1->Click += gcnew System::EventHandler(this, &MyForm::materialFlatButton1_Click);
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm::bindingSource1_CurrentChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(372, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(650, 271);
			this->dataGridView1->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1032, 370);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CONTROL DE ESTUDIANTES";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		 /*BOTON PARA PODER REGISTRAR NUEVOS ALUMNOS EN LA BASE DE DATOS*/
private: System::Void materialFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		/*ESTABLECER LA CONEXION CON LA BASE DE DATOS*/
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd =;Database =usuarios";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		int carnet = Int32::Parse(materialSingleLineTextField1->Text);
		String^ nombre = materialSingleLineTextField2->Text;
		String^ apellido = materialSingleLineTextField3->Text;
		String^ telefono = materialSingleLineTextField4->Text;
		String^ correo = materialSingleLineTextField5->Text;
		String^ carrera = materialSingleLineTextField6->Text;
		String^ jornada = materialSingleLineTextField7->Text;
		/*QUERY PARA PODER HACER EL REGISTRO EN LA BASE DE DATOS*/
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into contactos values (" + carnet + ",'" + nombre + "','" + apellido + "','" + telefono + "','" + correo + "','" + carrera + "','" + jornada + "')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		/*MENSAJE EN CASO DE QUE LA OPERACION SE REALIZO CORRECTAMENTE*/
		MessageBox::Show("ESTUDIANTE REGISTRADO EXITOSAMENTE");
		materialSingleLineTextField1->Text = "";
		materialSingleLineTextField2->Text = "";
		materialSingleLineTextField3->Text = "";
		materialSingleLineTextField4->Text = "";
		materialSingleLineTextField5->Text = "";
		materialSingleLineTextField6->Text = "";
		materialSingleLineTextField7->Text = "";
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
		 /*BOTON PARA PODER ACTUALIZAR NUEVOS REGISTROS EN LA BASE DE DATOS*/
private: System::Void materialFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd =;Database = usuarios";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	int carnet = Int32::Parse(materialSingleLineTextField1->Text);
	String^ nombre = materialSingleLineTextField2->Text;
	String^ apellido = materialSingleLineTextField3->Text;
	String^ telefono = materialSingleLineTextField4->Text;
	String^ email = materialSingleLineTextField5->Text;
	String^ carrera = materialSingleLineTextField6->Text;
	String^ jornada = materialSingleLineTextField7->Text;
	/*-----QUERY PARA PODER ACTUALZIAR EN LA BASE DE DATOS*/
	MySqlCommand^ cmd = gcnew MySqlCommand("update contactos set nombre ='" + nombre + "',apellido ='" + apellido + "',telefono ='" + telefono + "',email ='" + email + "',carrera ='" + carrera + "',jornada = '" + jornada + "' WHERE carnet ='" + carnet + "' ", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	MessageBox::Show("DATOS HAN SIDO ACTUALIZADO CORRECTAMENTE");
	con->Close();
}
		 /*BOTON PARA PODER ELIMINAR REGISTROS EN LA BASE DE DATOS*/
private: System::Void materialFlatButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	/*ESTABLECER LA CONEXION EN LA BASE DE DATOS*/
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd =;Database = usuarios";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	int carnet = Int32::Parse(materialSingleLineTextField1->Text);
	/*QUERY PARA PODER ELIMINAR EN LA BASE DE DATOS*/
	MySqlCommand^ cmd = gcnew MySqlCommand("delete from contactos WHERE carnet ='" + carnet + "'", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	/*MENSAJE EN CASO DE QUE LA OPERACION EN LA BASE DE DATOS SE HALLA REALIZADO EXITOSAMENTE*/
	MessageBox::Show("DATOS HAN SIDO ELIMINADOS CORRECTAMENTE");
	con->Close();
}
		 /*BOTON PARA REALIZAR CONSULTAS DE MANERA INDIVIDUAL EN LA BASE DE DATOS*/
private: System::Void materialFlatButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int carnet = Int32::Parse(materialSingleLineTextField1->Text);
		/*ESTABLECER LA CONEXION CON LA BASE DE DATOS*/
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd =;Database = usuarios";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		/*QUERY PARA CONSULTAR EN LA BASE DE DATOS*/
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from contactos WHERE carnet = " + carnet + "", con);

		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			materialSingleLineTextField2->Text = dr->GetString(1);
			materialSingleLineTextField3->Text = dr->GetString(2);
			materialSingleLineTextField4->Text = dr->GetString(3);
			materialSingleLineTextField5->Text = dr->GetString(4);
			materialSingleLineTextField6->Text = dr->GetString(5);
			materialSingleLineTextField7->Text = dr->GetString(6);
		}
		con->Clone();
	}
	catch (Exception^ ex) {
		/*MENSAJE EN CASO DE QUE NO SE LLEVARA A CABO LA CONSULTA*/
		MessageBox::Show(ex->Message);
	}
}
		 /*BOTON PARA PODER HACER UNA CONSULTA GENERA EN LA BASE DE DATOS*/
private: System::Void materialFlatButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	/*ESTABLECER LA CONEXION CON LA BASE DE DATOS*/
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd =;Database = usuarios";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	/*QUERY PARA CONSULTA EN LA BASE DE DATOS*/
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from contactos", con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
}
		 /*BOTON PARA LIMPIAR LAS CAJAS DE TEXTO EN LA INTERFAZ*/
private: System::Void materialFlatButton6_Click(System::Object^  sender, System::EventArgs^  e) {

	materialSingleLineTextField1->Text = "";
	materialSingleLineTextField2->Text = "";
	materialSingleLineTextField3->Text = "";
	materialSingleLineTextField4->Text = "";
	materialSingleLineTextField5->Text = "";
	materialSingleLineTextField6->Text = "";
	materialSingleLineTextField7->Text = "";

}
private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

#pragma once
//#include "stdafx.h"
#include "MyForm.h"
namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:











	private: MaterialSkin::Controls::MaterialFlatButton^  materialFlatButton1;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField1;
	private: MaterialSkin::Controls::MaterialSingleLineTextField^  materialSingleLineTextField2;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel1;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel2;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel3;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel4;
	private: MaterialSkin::Controls::MaterialLabel^  materialLabel5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;









	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->materialFlatButton1 = (gcnew MaterialSkin::Controls::MaterialFlatButton());
			this->materialSingleLineTextField1 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialSingleLineTextField2 = (gcnew MaterialSkin::Controls::MaterialSingleLineTextField());
			this->materialLabel1 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->materialLabel2 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->materialLabel3 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->materialLabel4 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->materialLabel5 = (gcnew MaterialSkin::Controls::MaterialLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// materialFlatButton1
			// 
			this->materialFlatButton1->AutoSize = true;
			this->materialFlatButton1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->materialFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialFlatButton1->Depth = 0;
			this->materialFlatButton1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materialFlatButton1.Icon")));
			this->materialFlatButton1->Location = System::Drawing::Point(192, 192);
			this->materialFlatButton1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->materialFlatButton1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialFlatButton1->Name = L"materialFlatButton1";
			this->materialFlatButton1->Primary = false;
			this->materialFlatButton1->Size = System::Drawing::Size(114, 36);
			this->materialFlatButton1->TabIndex = 9;
			this->materialFlatButton1->Text = L"INGRESAR";
			this->materialFlatButton1->UseVisualStyleBackColor = false;
			this->materialFlatButton1->Click += gcnew System::EventHandler(this, &login::materialFlatButton1_Click);
			// 
			// materialSingleLineTextField1
			// 
			this->materialSingleLineTextField1->Depth = 0;
			this->materialSingleLineTextField1->Hint = L"";
			this->materialSingleLineTextField1->Location = System::Drawing::Point(230, 129);
			this->materialSingleLineTextField1->MaxLength = 32767;
			this->materialSingleLineTextField1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField1->Name = L"materialSingleLineTextField1";
			this->materialSingleLineTextField1->PasswordChar = '\0';
			this->materialSingleLineTextField1->SelectedText = L"";
			this->materialSingleLineTextField1->SelectionLength = 0;
			this->materialSingleLineTextField1->SelectionStart = 0;
			this->materialSingleLineTextField1->Size = System::Drawing::Size(164, 23);
			this->materialSingleLineTextField1->TabIndex = 10;
			this->materialSingleLineTextField1->TabStop = false;
			this->materialSingleLineTextField1->UseSystemPasswordChar = false;
			// 
			// materialSingleLineTextField2
			// 
			this->materialSingleLineTextField2->Depth = 0;
			this->materialSingleLineTextField2->Hint = L"";
			this->materialSingleLineTextField2->Location = System::Drawing::Point(230, 160);
			this->materialSingleLineTextField2->MaxLength = 32767;
			this->materialSingleLineTextField2->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialSingleLineTextField2->Name = L"materialSingleLineTextField2";
			this->materialSingleLineTextField2->PasswordChar = '*';
			this->materialSingleLineTextField2->SelectedText = L"";
			this->materialSingleLineTextField2->SelectionLength = 0;
			this->materialSingleLineTextField2->SelectionStart = 0;
			this->materialSingleLineTextField2->Size = System::Drawing::Size(164, 23);
			this->materialSingleLineTextField2->TabIndex = 11;
			this->materialSingleLineTextField2->TabStop = false;
			this->materialSingleLineTextField2->UseSystemPasswordChar = false;
			// 
			// materialLabel1
			// 
			this->materialLabel1->AutoSize = true;
			this->materialLabel1->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel1->Depth = 0;
			this->materialLabel1->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel1->Location = System::Drawing::Point(107, 131);
			this->materialLabel1->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel1->Name = L"materialLabel1";
			this->materialLabel1->Size = System::Drawing::Size(71, 19);
			this->materialLabel1->TabIndex = 12;
			this->materialLabel1->Text = L"USUARIO";
			// 
			// materialLabel2
			// 
			this->materialLabel2->AutoSize = true;
			this->materialLabel2->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel2->Depth = 0;
			this->materialLabel2->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel2->Location = System::Drawing::Point(71, 162);
			this->materialLabel2->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel2->Name = L"materialLabel2";
			this->materialLabel2->Size = System::Drawing::Size(107, 19);
			this->materialLabel2->TabIndex = 13;
			this->materialLabel2->Text = L"CONTRASEÑA";
			// 
			// materialLabel3
			// 
			this->materialLabel3->AutoSize = true;
			this->materialLabel3->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel3->Depth = 0;
			this->materialLabel3->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel3->Location = System::Drawing::Point(67, 3);
			this->materialLabel3->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel3->Name = L"materialLabel3";
			this->materialLabel3->Size = System::Drawing::Size(352, 19);
			this->materialLabel3->TabIndex = 14;
			this->materialLabel3->Text = L"UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA";
			// 
			// materialLabel4
			// 
			this->materialLabel4->AutoSize = true;
			this->materialLabel4->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel4->Depth = 0;
			this->materialLabel4->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel4->Location = System::Drawing::Point(89, 23);
			this->materialLabel4->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel4->Name = L"materialLabel4";
			this->materialLabel4->Size = System::Drawing::Size(309, 19);
			this->materialLabel4->TabIndex = 15;
			this->materialLabel4->Text = L"CENTRO UNIVERSITARIO CHIMALTENANGO";
			// 
			// materialLabel5
			// 
			this->materialLabel5->AutoSize = true;
			this->materialLabel5->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel5->Depth = 0;
			this->materialLabel5->Font = (gcnew System::Drawing::Font(L"Roboto", 11));
			this->materialLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->materialLabel5->Location = System::Drawing::Point(97, 43);
			this->materialLabel5->MouseState = MaterialSkin::MouseState::HOVER;
			this->materialLabel5->Name = L"materialLabel5";
			this->materialLabel5->Size = System::Drawing::Size(292, 19);
			this->materialLabel5->TabIndex = 16;
			this->materialLabel5->Text = L"FACULTAD DE INGENIERIA EN SISTEMAS";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(286, 234);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox1->Size = System::Drawing::Size(200, 80);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"PROGRAMACION I SECCION B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Walter Francisco  1990-16-10786";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 14);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Byron Alfredo  1990-16-6618";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 14);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Carlos Waldemar  1990-16-10748";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 14);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Juan Diego  1990-16-7224";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(492, 319);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->materialLabel5);
			this->Controls->Add(this->materialLabel4);
			this->Controls->Add(this->materialLabel3);
			this->Controls->Add(this->materialLabel2);
			this->Controls->Add(this->materialLabel1);
			this->Controls->Add(this->materialSingleLineTextField2);
			this->Controls->Add(this->materialSingleLineTextField1);
			this->Controls->Add(this->materialFlatButton1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ACCESO";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {

	}
			 
			 /*-----------------BOTON PARA PODER INGRESAR CON AUTENTICACION-----------------*/
private: System::Void materialFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = "server = 127.0.0.1; password = ; username = root; database = usuarios";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from admin WHERE user ='" + this->materialSingleLineTextField1->Text + "' AND pw= '" + this->materialSingleLineTextField2->Text + "';", conDatabase);

	MySqlDataReader^ myReader;
	try {
		conDatabase->Open();
		myReader = cmdDatabase->ExecuteReader();
		int count = 0;
		while (myReader->Read()) {
			count = count + 1;
		}
		if (count == 1) {
			MessageBox::Show("Acceso Autorizado");
			this->Hide();
			MyForm^ f2 = gcnew MyForm();
			f2->ShowDialog();
		}
		else if (count>1) {
			MessageBox::Show("Acceso Denegado");
		}
		else {
			MessageBox::Show("Usuario y Contraseña Incorrectos");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}

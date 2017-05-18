#pragma once
#include <windows.h>
#include <stdio.h>
#include <vcclr.h>
//#include <string.h>
//#include "hSign.h"
#include <process.h>
#include <msclr\marshal.h>

namespace SimpleAV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Restore
	/// </summary>
	public ref class frmRestore : public System::Windows::Forms::Form
	{
		System::Boolean isScan;
	public:
		frmRestore(void)
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
		~frmRestore()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  fileBrow;

	private: System::Windows::Forms::Button^  bRestore;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRestore::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fileBrow = (gcnew System::Windows::Forms::OpenFileDialog());
			this->bRestore = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Lime;
			this->textBox1->Location = System::Drawing::Point(38, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(79, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Chọn file";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmRestore::cmdBrowse_Click);
			// 
			// bRestore
			// 
			this->bRestore->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bRestore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRestore->ForeColor = System::Drawing::Color::Lime;
			this->bRestore->Location = System::Drawing::Point(173, 130);
			this->bRestore->Name = L"bRestore";
			this->bRestore->Size = System::Drawing::Size(80, 23);
			this->bRestore->TabIndex = 26;
			this->bRestore->Text = L"Khôi phục";
			this->bRestore->UseVisualStyleBackColor = false;
			this->bRestore->Click += gcnew System::EventHandler(this, &frmRestore::cmdRestore_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(35, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Đường dẫn:";
			this->label1->Click += gcnew System::EventHandler(this, &frmRestore::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(0, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(414, 29);
			this->label2->TabIndex = 33;
			this->label2->Text = L"KHÔI PHỤC FILE ĐÃ BỊ CÁCH LY\?";
			// 
			// frmRestore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(455, 180);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bRestore);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmRestore";
			this->Text = L"36AV Khôi phục file cách ly";
			this->Load += gcnew System::EventHandler(this, &frmRestore::Restore_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void Restore_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void cmdBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
		fileBrow->ShowDialog();
		System::String ^path;
		path = fileBrow->FileName;
		textBox1->Text = path;
	}

			 /////////////////////////////////////////////////////////////////
			 /////////////// restore file .locked/////////////////////////////
			 /////////////////////////////////////////////////////////////////
	private: System::Void Restore(System::String ^strFile) {
		FILE *f1, *f2, *f3;
		f3 = fopen("te.out", "a");
		int c;
		char key = '3';
		char* encrypted = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();
		char* old = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();
		///////////// in ra man hinh file bi nhiem
		System::String ^tmp;
		tmp = gcnew System::String(strFile);
		System::Windows::Forms::Application::DoEvents();
		///////////// khoi phuc file
		f1 = fopen(encrypted, "rb");
		char* decrypted = strcat(encrypted, ".exe");
		f2 = fopen(decrypted, "wb");
		while ((c = fgetc(f1)) != EOF)
			fputc(c^key, f2);
		fclose(f1); fclose(f2);
		remove(old);
	}
	private: System::Void cmdRestore_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::File::Exists(textBox1->Text))
		{
			Restore(textBox1->Text);
			//Sau khi hoàn thành
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Text = L"FILE CÁCH LY ĐÃ ĐƯỢC KHÔI PHỤC";
		}
		else
			System::Windows::Forms::MessageBox::Show(L"File không tồn tại", L"Lỗi");
	}
	
////////////////////////////////ket thuc phan restore///////////////////////////////////////



	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

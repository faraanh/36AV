#pragma once
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <vcclr.h>
#include <process.h>
#include <msclr\marshal.h>


namespace SimpleAV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for frmFind
	/// </summary>
	public ref class frmFind : public System::Windows::Forms::Form
	{
	public:
		frmFind(void)
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
		~frmFind()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bFind;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  fileBrow;
	private: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFind::typeid));
			this->bFind = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->fileBrow = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bFind
			// 
			this->bFind->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bFind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFind->ForeColor = System::Drawing::Color::Lime;
			this->bFind->Location = System::Drawing::Point(208, 167);
			this->bFind->Name = L"bFind";
			this->bFind->Size = System::Drawing::Size(72, 23);
			this->bFind->TabIndex = 35;
			this->bFind->Text = L"Tìm kiếm";
			this->bFind->UseVisualStyleBackColor = false;
			this->bFind->Click += gcnew System::EventHandler(this, &frmFind::cmdFind_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(93, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Chọn file";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmFind::cmdBrowse_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Lime;
			this->textBox1->Location = System::Drawing::Point(51, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(366, 20);
			this->textBox1->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(46, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(338, 29);
			this->label2->TabIndex = 37;
			this->label2->Text = L"CHỌN MẪU CẦN XÁC ĐỊNH";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(48, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Đường dẫn:";
			// 
			// frmFind
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(478, 234);
			this->Controls->Add(this->bFind);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmFind";
			this->Text = L"Xác định mẫu trên Virus Total";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cmdBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
	fileBrow->ShowDialog();
	System::String ^path;
	path = fileBrow->FileName;
	textBox1->Text = path;
}
private: System::Void Search(System::String ^strFile) {
	char* str2 = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();
	char *my_args[4];
	my_args[0] = "fara_api_virustotal.exe";
	my_args[1] = "-s";
	my_args[2] = str2;
	my_args[3] = NULL;
	_spawnv(P_WAIT, "C:\\Program Files (x86)\\fara\\dist\\fara_api_virustotal.exe", my_args);
}
	private: System::Void cmdFind_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::File::Exists(textBox1->Text))
		{
			Search(textBox1->Text);
			//Sau khi hoàn thành
			char *fname = "C:\\Users\\Administrator\\Desktop\\ketqua.txt";
			if (FILE *file = fopen(fname, "r"))
			{
				this->label2->ForeColor = System::Drawing::Color::Lime;
				this->label2->Text = L"FILE KẾT QUẢ TRÊN DESKTOP";
			}
			else
			{
				this->label2->ForeColor = System::Drawing::Color::OrangeRed;
				this->label2->Text = L"VIRUS TOTAL CHƯA CÓ MẪU NÀY!";
			}
		}
		else
			System::Windows::Forms::MessageBox::Show(L"File không tồn tại", L"Lỗi");
	}
	};
}

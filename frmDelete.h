#pragma once
#include <windows.h>
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
	/// Summary for Delete
	/// </summary>
	public ref class frmDelete : public System::Windows::Forms::Form
	{
	public:
		frmDelete(void)
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
		~frmDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bDelete;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  fileBrow;
	private: System::Windows::Forms::Label^  label2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDelete::typeid));
			this->bDelete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->fileBrow = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bDelete
			// 
			this->bDelete->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDelete->ForeColor = System::Drawing::Color::Lime;
			this->bDelete->Location = System::Drawing::Point(191, 144);
			this->bDelete->Name = L"bDelete";
			this->bDelete->Size = System::Drawing::Size(50, 23);
			this->bDelete->TabIndex = 30;
			this->bDelete->Text = L"Xóa";
			this->bDelete->UseVisualStyleBackColor = false;
			this->bDelete->Click += gcnew System::EventHandler(this, &frmDelete::cmdDelete_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(68, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Chọn file";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmDelete::cmdBrowse_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Lime;
			this->textBox1->Location = System::Drawing::Point(34, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(371, 20);
			this->textBox1->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(31, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Đường dẫn:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(27, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(378, 29);
			this->label2->TabIndex = 32;
			this->label2->Text = L"XÓA FILE ĐÃ ĐƯỢC CÁCH LY\?";
			// 
			// frmDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(427, 196);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bDelete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmDelete";
			this->Text = L"36AV Xóa file cách ly";
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

			 /////////////////////////////////////////////////////////////////
			 /////////////// delete file .locked/////////////////////////////
			 /////////////////////////////////////////////////////////////////
private: System::Void Del(System::String ^strFile) {
		char* str2 = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();

		remove(str2);
}
	private: System::Void cmdDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::File::Exists(textBox1->Text))
		{
			Del(textBox1->Text);
			//Sau khi hoàn thành
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Text = L"FILE CÁCH LY ĐÃ ĐƯỢC XÓA!";
		}
		else
			System::Windows::Forms::MessageBox::Show(L"File không tồn tại", L"Lỗi");
	}

	};
}

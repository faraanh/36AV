/*
	Simple AntiVirus
	Họ và tên : Đoàn Đắc Ngọc Anh
*/

#pragma once
#include <windows.h>
#include <stdio.h>
#include <vcclr.h>
#include <string.h>
#include "frmAddSign.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SimpleAV {

	/// <summary>
	/// Summary for frmVirusList
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmVirusList : public System::Windows::Forms::Form
	{
	public:
		frmVirusList(void)
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
		~frmVirusList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lstVirus;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblCount;
	private: System::Windows::Forms::Button^  cmdUnload;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::ComponentModel::IContainer^  components;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVirusList::typeid));
			this->lstVirus = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblCount = (gcnew System::Windows::Forms::Label());
			this->cmdUnload = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lstVirus
			// 
			this->lstVirus->FormattingEnabled = true;
			this->lstVirus->Location = System::Drawing::Point(0, 75);
			this->lstVirus->Name = L"lstVirus";
			this->lstVirus->Size = System::Drawing::Size(326, 134);
			this->lstVirus->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(14, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tổng số mã nhận dạng :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(96, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"DANH SÁCH VIRUS";
			// 
			// lblCount
			// 
			this->lblCount->AutoSize = true;
			this->lblCount->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblCount->ForeColor = System::Drawing::Color::Lime;
			this->lblCount->Location = System::Drawing::Point(179, 220);
			this->lblCount->Name = L"lblCount";
			this->lblCount->Size = System::Drawing::Size(35, 13);
			this->lblCount->TabIndex = 3;
			this->lblCount->Text = L"label3";
			this->lblCount->Click += gcnew System::EventHandler(this, &frmVirusList::lblCount_Click);
			// 
			// cmdUnload
			// 
			this->cmdUnload->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cmdUnload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdUnload->ForeColor = System::Drawing::Color::Lime;
			this->cmdUnload->Location = System::Drawing::Point(225, 241);
			this->cmdUnload->Name = L"cmdUnload";
			this->cmdUnload->Size = System::Drawing::Size(92, 34);
			this->cmdUnload->TabIndex = 4;
			this->cmdUnload->Text = L"Cancel";
			this->cmdUnload->UseVisualStyleBackColor = false;
			this->cmdUnload->Click += gcnew System::EventHandler(this, &frmVirusList::cmdUnload_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(90, 70);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// frmVirusList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(325, 287);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cmdUnload);
			this->Controls->Add(this->lblCount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lstVirus);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmVirusList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"36AV Danh sách virus";
			this->Load += gcnew System::EventHandler(this, &frmVirusList::frmVirusList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cmdUnload_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->~frmVirusList();				 
			 }
private: System::Void frmVirusList_Load(System::Object^  sender, System::EventArgs^  e) {
			 	FILE *f;
				char strPathSign[]="Sign.vir";
				fopen_s(&f,strPathSign,"rb");
				m_Sign sign;
				System::String ^tmp;
				System::String ^tmp1;
				int i=0;
				int posEnd;
				//fseek(f,34,SEEK_SET);
				//Xác định kích thước file
				fseek(f,0,SEEK_END);
				posEnd=ftell(f);
				//Trả về vị trí ban đầu
				fseek(f,0,SEEK_SET);
				//Tiến hành vòng lặp liệt kê mã nhận dạng
				char name[20];
				while (ftell(f) < posEnd)
				{
					i++;
					fread(&sign,sizeof(m_Sign),1,f);
					for (int i = 0; i < 20; i++)
						if (sign.Name[i] > '.' && sign.Name[i] <= 'z')
							name[i] = sign.Name[i];
					tmp = gcnew System::String(sign.Name);
					lstVirus->Items->Add(i+": " + tmp);
				};
				fclose(f);
				lblCount->Text=Convert::ToString(i);
		 }
private: System::Void lblCount_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

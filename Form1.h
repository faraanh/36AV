/*
	Simple AntiVirus

*/
#pragma once
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <vcclr.h>
//#include <string.h>
//#include "hSign.h"
#include "frmVirusList.h"
#include "frmRestore.h"
#include "frmDelete.h"
#include "frmFind.h"
#include <process.h>
#include <msclr\marshal.h>
#define _WIN32_WINNT 0x0500



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
		//Khai báo một số biến toàn cục
		System::Boolean isScan;
		int scaned;
		int detected;
	
		frmVirusList frmList;
		frmAddSign frmAdd;
		frmRestore frmRes; // phải include vào nó mới xanh dc
		frmDelete frmDel;
		frmFind frmSearch;
		
	private: System::Windows::Forms::MenuStrip^  mnuFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuFile1;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuVirusList;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAbout;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrow;
	private: System::Windows::Forms::Button^  cmdBrowse;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAddSign;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuExit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuContact;
	private: System::Windows::Forms::Button^  ScanO;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuRestore;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuDelete;
private: System::Windows::Forms::ToolStripMenuItem^  mnu_Tim;

			 frmVirusList test1;

	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^  txtPath;



	private: System::Windows::Forms::Label^  lblScaned;


	private: System::Windows::Forms::Label^  lblInfo1;
	private: System::Windows::Forms::ListBox^  lstFile;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  grbInfo;
	private: System::Windows::Forms::Label^  lblDetected;
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Button^  cmdScan;
	private: System::Windows::Forms::ListBox^  lstRe;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->lblScaned = (gcnew System::Windows::Forms::Label());
			this->lblInfo1 = (gcnew System::Windows::Forms::Label());
			this->lstFile = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grbInfo = (gcnew System::Windows::Forms::GroupBox());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->lblDetected = (gcnew System::Windows::Forms::Label());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->cmdScan = (gcnew System::Windows::Forms::Button());
			this->lstRe = (gcnew System::Windows::Forms::ListBox());
			this->mnuFile = (gcnew System::Windows::Forms::MenuStrip());
			this->mnuFile1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuVirusList = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuAddSign = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mnuRestore = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnu_Tim = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuContact = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderBrow = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->cmdBrowse = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ScanO = (gcnew System::Windows::Forms::Button());
			this->grbInfo->SuspendLayout();
			this->mnuFile->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtPath
			// 
			this->txtPath->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtPath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPath->ForeColor = System::Drawing::Color::Lime;
			this->txtPath->Location = System::Drawing::Point(82, 203);
			this->txtPath->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(434, 20);
			this->txtPath->TabIndex = 10;
			// 
			// lblScaned
			// 
			this->lblScaned->AutoSize = true;
			this->lblScaned->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblScaned->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblScaned->ForeColor = System::Drawing::Color::Lime;
			this->lblScaned->Location = System::Drawing::Point(188, 28);
			this->lblScaned->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblScaned->Name = L"lblScaned";
			this->lblScaned->Size = System::Drawing::Size(32, 16);
			this->lblScaned->TabIndex = 3;
			this->lblScaned->Text = L"000";
			// 
			// lblInfo1
			// 
			this->lblInfo1->AutoSize = true;
			this->lblInfo1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInfo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfo1->ForeColor = System::Drawing::Color::Lime;
			this->lblInfo1->Location = System::Drawing::Point(23, 30);
			this->lblInfo1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfo1->Name = L"lblInfo1";
			this->lblInfo1->Size = System::Drawing::Size(129, 16);
			this->lblInfo1->TabIndex = 2;
			this->lblInfo1->Text = L"Tổng file đã quét:";
			// 
			// lstFile
			// 
			this->lstFile->BackColor = System::Drawing::Color::Black;
			this->lstFile->ForeColor = System::Drawing::Color::Lime;
			this->lstFile->FormattingEnabled = true;
			this->lstFile->Location = System::Drawing::Point(0, 23);
			this->lstFile->Name = L"lstFile";
			this->lstFile->Size = System::Drawing::Size(592, 160);
			this->lstFile->TabIndex = 14;
			this->lstFile->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lstFile_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(10, 206);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Đường dẫn:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// grbInfo
			// 
			this->grbInfo->BackColor = System::Drawing::SystemColors::InfoText;
			this->grbInfo->Controls->Add(this->lblStatus);
			this->grbInfo->Controls->Add(this->lblScaned);
			this->grbInfo->Controls->Add(this->lblInfo1);
			this->grbInfo->Controls->Add(this->lblDetected);
			this->grbInfo->Controls->Add(this->lblInfo);
			this->grbInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grbInfo->ForeColor = System::Drawing::Color::Lime;
			this->grbInfo->Location = System::Drawing::Point(13, 229);
			this->grbInfo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->grbInfo->Name = L"grbInfo";
			this->grbInfo->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->grbInfo->Size = System::Drawing::Size(254, 121);
			this->grbInfo->TabIndex = 12;
			this->grbInfo->TabStop = false;
			this->grbInfo->Text = L"Thông tin:";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(52, 75);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(0, 24);
			this->lblStatus->TabIndex = 4;
			// 
			// lblDetected
			// 
			this->lblDetected->AutoSize = true;
			this->lblDetected->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblDetected->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetected->ForeColor = System::Drawing::Color::Lime;
			this->lblDetected->Location = System::Drawing::Point(188, 52);
			this->lblDetected->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetected->Name = L"lblDetected";
			this->lblDetected->Size = System::Drawing::Size(32, 16);
			this->lblDetected->TabIndex = 1;
			this->lblDetected->Text = L"000";
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfo->ForeColor = System::Drawing::Color::Lime;
			this->lblInfo->Location = System::Drawing::Point(23, 52);
			this->lblInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(140, 16);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"Tổng file phát hiện:";
			// 
			// cmdScan
			// 
			this->cmdScan->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cmdScan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdScan->ForeColor = System::Drawing::Color::Lime;
			this->cmdScan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cmdScan.Image")));
			this->cmdScan->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->cmdScan->Location = System::Drawing::Point(309, 255);
			this->cmdScan->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmdScan->Name = L"cmdScan";
			this->cmdScan->Size = System::Drawing::Size(97, 42);
			this->cmdScan->TabIndex = 11;
			this->cmdScan->Text = L"      Quét";
			this->cmdScan->UseVisualStyleBackColor = false;
			this->cmdScan->Click += gcnew System::EventHandler(this, &Form1::cmdScan_Click);
			// 
			// lstRe
			// 
			this->lstRe->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lstRe->ForeColor = System::Drawing::Color::Red;
			this->lstRe->FormattingEnabled = true;
			this->lstRe->Location = System::Drawing::Point(0, 356);
			this->lstRe->Name = L"lstRe";
			this->lstRe->Size = System::Drawing::Size(592, 82);
			this->lstRe->TabIndex = 20;
			// 
			// mnuFile
			// 
			this->mnuFile->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mnuFile1, this->mnuHelp });
			this->mnuFile->Location = System::Drawing::Point(0, 0);
			this->mnuFile->Name = L"mnuFile";
			this->mnuFile->Size = System::Drawing::Size(592, 24);
			this->mnuFile->TabIndex = 21;
			this->mnuFile->Text = L"menuStrip1";
			// 
			// mnuFile1
			// 
			this->mnuFile1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->mnuVirusList,
					this->toolStripMenuItem1, this->mnuAddSign, this->mnuDelete, this->toolStripMenuItem2, this->mnuRestore, this->mnu_Tim, this->mnuExit
			});
			this->mnuFile1->Name = L"mnuFile1";
			this->mnuFile1->Size = System::Drawing::Size(37, 20);
			this->mnuFile1->Text = L"File";
			// 
			// mnuVirusList
			// 
			this->mnuVirusList->Name = L"mnuVirusList";
			this->mnuVirusList->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::L));
			this->mnuVirusList->Size = System::Drawing::Size(228, 22);
			this->mnuVirusList->Text = L"Danh sách virus";
			this->mnuVirusList->Click += gcnew System::EventHandler(this, &Form1::mnuVirusList_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(225, 6);
			// 
			// mnuAddSign
			// 
			this->mnuAddSign->Name = L"mnuAddSign";
			this->mnuAddSign->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->mnuAddSign->Size = System::Drawing::Size(228, 22);
			this->mnuAddSign->Text = L"Thêm mẫu virus";
			this->mnuAddSign->Click += gcnew System::EventHandler(this, &Form1::mnuAddSign_Click);
			// 
			// mnuDelete
			// 
			this->mnuDelete->Name = L"mnuDelete";
			this->mnuDelete->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->mnuDelete->Size = System::Drawing::Size(228, 22);
			this->mnuDelete->Text = L"Xóa file cách ly";
			this->mnuDelete->Click += gcnew System::EventHandler(this, &Form1::mnuDelete_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(225, 6);
			// 
			// mnuRestore
			// 
			this->mnuRestore->Name = L"mnuRestore";
			this->mnuRestore->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->mnuRestore->Size = System::Drawing::Size(228, 22);
			this->mnuRestore->Text = L"Khôi phục file cách ly";
			this->mnuRestore->Click += gcnew System::EventHandler(this, &Form1::mnuRestore_Click);
			// 
			// mnu_Tim
			// 
			this->mnu_Tim->Name = L"mnu_Tim";
			this->mnu_Tim->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->mnu_Tim->Size = System::Drawing::Size(228, 22);
			this->mnu_Tim->Text = L"Tìm trên Virus Total";
			this->mnu_Tim->Click += gcnew System::EventHandler(this, &Form1::mnuFind_Click);
			// 
			// mnuExit
			// 
			this->mnuExit->Name = L"mnuExit";
			this->mnuExit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->mnuExit->Size = System::Drawing::Size(228, 22);
			this->mnuExit->Text = L"Thoát";
			this->mnuExit->Click += gcnew System::EventHandler(this, &Form1::mnuExit_Click);
			// 
			// mnuHelp
			// 
			this->mnuHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mnuAbout, this->mnuContact });
			this->mnuHelp->Name = L"mnuHelp";
			this->mnuHelp->Size = System::Drawing::Size(64, 20);
			this->mnuHelp->Text = L"Trợ giúp";
			// 
			// mnuAbout
			// 
			this->mnuAbout->Name = L"mnuAbout";
			this->mnuAbout->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::B));
			this->mnuAbout->Size = System::Drawing::Size(175, 22);
			this->mnuAbout->Text = L"Hướng dẫn";
			this->mnuAbout->Click += gcnew System::EventHandler(this, &Form1::mnuAbout_Click);
			// 
			// mnuContact
			// 
			this->mnuContact->Name = L"mnuContact";
			this->mnuContact->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->mnuContact->Size = System::Drawing::Size(175, 22);
			this->mnuContact->Text = L"Liên hệ";
			this->mnuContact->Click += gcnew System::EventHandler(this, &Form1::mnuContact_Click);
			// 
			// cmdBrowse
			// 
			this->cmdBrowse->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cmdBrowse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdBrowse->ForeColor = System::Drawing::Color::Lime;
			this->cmdBrowse->Location = System::Drawing::Point(523, 201);
			this->cmdBrowse->Name = L"cmdBrowse";
			this->cmdBrowse->Size = System::Drawing::Size(49, 24);
			this->cmdBrowse->TabIndex = 22;
			this->cmdBrowse->Text = L"Chọn";
			this->cmdBrowse->UseVisualStyleBackColor = false;
			this->cmdBrowse->Click += gcnew System::EventHandler(this, &Form1::cmdBrowse_Click);
			// 
			// ScanO
			// 
			this->ScanO->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ScanO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ScanO->ForeColor = System::Drawing::Color::Lime;
			this->ScanO->Location = System::Drawing::Point(425, 255);
			this->ScanO->Name = L"ScanO";
			this->ScanO->Size = System::Drawing::Size(122, 42);
			this->ScanO->TabIndex = 24;
			this->ScanO->Text = L"Quét trực tuyến";
			this->ScanO->UseVisualStyleBackColor = false;
			this->ScanO->Click += gcnew System::EventHandler(this, &Form1::cmdScanO_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(592, 436);
			this->Controls->Add(this->ScanO);
			this->Controls->Add(this->cmdBrowse);
			this->Controls->Add(this->lstRe);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->lstFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->grbInfo);
			this->Controls->Add(this->cmdScan);
			this->Controls->Add(this->mnuFile);
			this->ForeColor = System::Drawing::Color::Lime;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->mnuFile;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"36AV";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grbInfo->ResumeLayout(false);
			this->grbInfo->PerformLayout();
			this->mnuFile->ResumeLayout(false);
			this->mnuFile->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean compareStr(char *str1, char *str2)
	{
		//Hàm dùng để so sánh 2 chuỗi ký tự có giống nhau không
		//Ở đây không dùng hàm so sánh có sẵn ( == ) do có các ký tự NULL trong chuỗi cần so sánh
		//Hàm trả về TRUE khi giống nhau và FALSE khi khác nhau
		int i = 0;
		while (*(str1 + i) == *(str2 + i))
		{
			i++;
			if (i == 50)
				return true;
		}

		return false;
	}
private: System::Void scan(System::String ^strPath)
	{
		if (isScan)
		{
			System::String ^strFile;
			System::String ^tmp;
			char strDatFile[50];
			//Liệt kê file trong thư mục hiện tại
			for each (strFile in System::IO::Directory::GetFiles(strPath))
			{
				//Mở file cần được quét ra làm việc
				FILE *fs;
				FILE *fvr;
				fvr = fopen("fvr.txt", "a");
				//Do trong strFile là kiểu string
				//cần phải chuyển đổi ra thành kiểu Char để đưa vào hàm
				int itmp = strFile->Length;
				char *chTmpData = new char[itmp + 1];
				for (int i = 0; i < itmp; i++)
					*(chTmpData + i) = strFile[i];
				*(chTmpData + itmp) = '\0';
				fopen_s(&fs, chTmpData, "rb");
				if (fs != NULL)
				{
					try
					{
						FILE *f;
						char strPathSign[] = "Sign.vir";
						fopen_s(&f, strPathSign, "rb");
						m_Sign sign;
						int i = 0;
						int posEnd;
						//Xác định kích thước file
						fseek(f, 0, SEEK_END);
						posEnd = ftell(f);
						//Trả về vị trí ban đầu
						fseek(f, 0, SEEK_SET);
						//Tiến hành vòng lặp liệt kê mã nhận dạng
						while (ftell(f) < posEnd)
						{
							//Đọc mẫu tin lưu mã nhận dạng virus
							fread(&sign, sizeof(m_Sign), 1, f);
							//Nhảy trong file muốn quét tới offset muốn xét
							fseek(fs, sign.lPos, SEEK_SET);
							int cur;
							cur = ftell(fs);
							//
							//Lấy 50 byte tại offset đó
							fread(strDatFile, 50, 1, fs);
							if (compareStr(strDatFile, sign.Sign) == true)
							{
								char name[20];
								//Nhận dạng đúng là virus
								tmp = gcnew System::String(sign.Name);
								for (int i = 0; i < 20; i++)
									if (sign.Name[i] > '.' && sign.Name[i] <= 'z')
										name[i] = sign.Name[i];
								lstRe->Items->Add(tmp + L"\t" + strFile);
								detected++;
								// encrypt binary file
								FILE *f1, *f2;
								char* encrypt = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();
								fprintf(fvr, "%s\n", encrypt);
								f1 = fopen(encrypt, "rb");
								char* encrypted = strcat(encrypt, ".locked");
								f2 = fopen(encrypted, "wb");
								char key = '3';
								int c;
								while ((c = fgetc(f1)) != EOF)
									fputc(c^key, f2);
								fclose(f1); fclose(f2);
								//////// v e d l d v r l t n n
								////// end of encrypt binary file
								lblDetected->Text = Convert::ToString(detected);
								System::Windows::Forms::Application::DoEvents();
							}
						}
						fclose(f);
						fclose(fs);
					}
					catch (const std::exception& e)
					{
						throw(e);
					}
				}
				//Ghi ra listBox thông báo đã quét file này
				tmp = gcnew System::String(strFile);
				lstFile->Items->Add(tmp);
				lstFile->TopIndex = lstFile->Items->Count - lstFile->Height / lstFile->ItemHeight;
				scaned++;
				lblScaned->Text = Convert::ToString(scaned);
				System::Windows::Forms::Application::DoEvents();
				fclose(fvr);
				FILE *det;
				det = fopen("det.txt", "w");
				fprintf(det, "%d", detected);
				fclose(det);
			}
		}
	}

private: System::Void scan2()
{
	FILE *fvr, *det;
	fvr = fopen("fvr.txt", "r");
	det = fopen("det.txt", "r");
	int detected;
	char *vr, *rv;
	char buffer[255];

	fscanf(det, "%d", &detected);
	fclose(det);
	printf("%d", detected);
	/// code by fara
	while (fgets(buffer, 255, fvr) != NULL)
	{
		//printf("%s",buffer);
		char buffer1[255];
		memset(buffer1, 0, sizeof(buffer));
		strcpy(buffer1, buffer);
		vr = &buffer[0];
		rv = &buffer1[0];
		//printf("%s", vr);
		int i = 0, j = 0;
		int l = strlen(vr);
		for (int i = 0; i<l; i++)
		{
			if (vr[i] != '\n')
			{
				rv[j] = vr[i];
				if (vr[i] == '\\')
				{
					j++;
					rv[j] = '\\';
				}
				j++;
			}
		}
		//printf("%s\n", rv);
		remove(rv);
	}
	fclose(fvr);
	remove("fvr.txt");
}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		isScan = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void cmdScan_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::Directory::Exists(txtPath->Text))
		{
			if (isScan == false)
			{
				//Khởi tạo để bắt đầu phiên quét
				scaned = 0;
				detected = 0;
				cmdScan->Text = L"Dừng";
				isScan = true;
				lstFile->Items->Clear();
				lstRe->Items->Clear();
				lblDetected->Text = "0";
				lblStatus->Text = L"Đang quét ... ";
				System::Windows::Forms::Application::DoEvents();
				
				scan(txtPath->Text);
				scan2();

				//Sau khi hoàn thành
				isScan = false;
				cmdScan->Text = L"Quét";
				lblStatus->Text = L"Đã quét xong";
			}
			else
			{
				isScan = false;
				cmdScan->Text = L"Quét";
			}
		}
		else
			Windows::Forms::MessageBox::Show(L"Thư mục không tồn tại", L"Lỗi");
	}


	private: System::Void scanO(System::String ^strPath)
	{
		System::String ^strFile;
		System::String ^tmp;
		char *my_args[4];
		my_args[0] = "fara_api_virustotal.exe";
		my_args[1] = "-v";
		my_args[3] = NULL;

		for each (strFile in System::IO::Directory::GetFiles(strPath))
		{
			//cần chuyển strFile -> my_args[2]
			//pin_ptr<const wchar_t> str1 = PtrToStringChars(strFile);
			char* fpath = (char*)Marshal::StringToHGlobalAnsi(strFile).ToPointer();
			//Ghi ra listBox thông báo đã quét file này
			tmp = gcnew System::String(strFile);
			lstFile->Items->Add(tmp);
			scaned++;
			lblScaned->Text = Convert::ToString(scaned);
			System::Windows::Forms::Application::DoEvents();
			my_args[2] = fpath; // thay my_args[2] bằng đường dẫn tới file cần quét
			//SetWindowPos(hWnd, 0, 1000, 1000, 1000, 1000, SWP_NOSIZE | SWP_NOZORDER);
			_spawnv(P_NOWAIT, "C:\\Program Files (x86)\\fara\\dist\\fara_api_virustotal.exe", my_args);
		}
	}

	private: System::Void cmdScanO_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::IO::Directory::Exists(txtPath->Text))
		{
			if (isScan == false)
			{
				//Khởi tạo để bắt đầu phiên quét
				scaned = 0;
				detected = 0;
				ScanO->Text = L"Dừng";
				isScan = true;
				lstFile->Items->Clear();
				lstRe->Items->Clear();
				lblDetected->Text = "0";
				lblStatus->Text = L"Đang quét ... ";
				System::Windows::Forms::Application::DoEvents();
				//----------------------
				scanO(txtPath->Text);
				//Sau khi hoàn thành
				isScan = false;
				ScanO->Text = L"Scan Online";
				lblStatus->Text = L"Đã quét xong";
			}
			else
			{
				isScan = false;
				ScanO->Text = L"Scan Online";
			}
		}
		else
			System::Windows::Forms::MessageBox::Show(L"Thư mục không tồn tại", L"Lỗi");
	}

	private: System::Void mnuAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		HWND hWnd = GetConsoleWindow();
		ShowWindow(hWnd, SW_HIDE);
		system("readme.exe");
	}
	private: System::Void mnuContact_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::MessageBox::Show(L"T36 Antivirus \nSản phẩm nghiên cứu khoa học của nhóm:\n\tĐoàn Đắc Ngọc Anh B4D4\n\tĐoàn Đắc Xuân Anh B4D5\n\tNguyễn Đình Tuấn Anh D2A\nThông tin liên hệ: faraanh96@gmail.com \nGiáo viên hướng dẫn:\n\t Thầy Ths.Nghiêm Văn Hưng", L"Thông tin");
	}
	private: System::Void mnuFind_Click(System::Object^  sender, System::EventArgs^  e) {
		if (frmSearch.IsDisposed)
		{//frmAdd.InitializeComponent;
			System::Windows::Forms::MessageBox::Show(L"Vùng nhớ đã của chương trình con này đã được giải phóng \n Thoát và chạy lại chương trình chính để thực hiện", L"Thông tin");
		}
		else
			frmSearch.Show();
	}
	private: System::Void mnuVirusList_Click(System::Object^  sender, System::EventArgs^  e)
	{

		if (frmList.IsDisposed)
		{//frmAdd.InitializeComponent;
			System::Windows::Forms::MessageBox::Show(L"Vùng nhớ đã của chương trình con này đã được giải phóng \n Thoát và chạy lại chương trình chính để thực hiện", L"Thông tin");
		}
		else
			frmList.Show();
	}
	private: System::Void cmdBrowse_Click(System::Object^  sender, System::EventArgs^  e) {

		folderBrow->ShowDialog();
		System::String ^path;
		path = folderBrow->SelectedPath;
		txtPath->Text = path;

	}
	private: System::Void mnuAddSign_Click(System::Object^  sender, System::EventArgs^  e) {

		if (frmAdd.IsDisposed)
		{
			System::Windows::Forms::MessageBox::Show(L"Vùng nhớ đã của chương trình con này đã được giải phóng \n Thoát và chạy lại chương trình chính để thực hiện", L"Thông tin");
		}
		else
			frmAdd.Show();
	}

	private: System::Void mnuRestore_Click(System::Object^  sender, System::EventArgs^  e) {
		if (frmRes.IsDisposed)
		{
			System::Windows::Forms::MessageBox::Show(L"Vùng nhớ đã của chương trình con này đã được giải phóng \n Thoát và chạy lại chương trình chính để thực hiện", L"Thông tin");
		}
		else
			frmRes.Show();
	}
	private: System::Void mnuDelete_Click(System::Object^  sender, System::EventArgs^  e) {


		if (frmDel.IsDisposed)
		{
			System::Windows::Forms::MessageBox::Show(L"Vùng nhớ đã của chương trình con này đã được giải phóng \n Thoát và chạy lại chương trình chính để thực hiện", L"Thông tin");
		}
		else
			frmDel.Show();
	}

	private: System::Void mnuExit_Click(System::Object^  sender, System::EventArgs^  e) {
		remove("fvr.txt");
		this->~Form1();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void lstFile_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
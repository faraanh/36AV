#pragma once
#include <windows.h>
#include <stdio.h>
#include <vcclr.h>
#include <string.h>

#pragma pack(1)
	struct m_Sign
	{
		char Sign[50];
		unsigned int lPos;
		char Name[20];
	};

namespace SimpleAV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		System::Boolean isScan;
		int scaned;
		int detected;

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
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 

	private: System::Windows::Forms::TextBox^  txtPath;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Label^  lblInfo2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  lblScaned;

	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  lblInfo1;
	private: System::Windows::Forms::ListBox^  lstFile;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  grbInfo;
	private: System::Windows::Forms::Label^  lblDetected;

	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Button^  cmdScan;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  lstRe;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->lblInfo2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->lblScaned = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->lblInfo1 = (gcnew System::Windows::Forms::Label());
			this->lstFile = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->grbInfo = (gcnew System::Windows::Forms::GroupBox());
			this->lblDetected = (gcnew System::Windows::Forms::Label());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->cmdScan = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lstRe = (gcnew System::Windows::Forms::ListBox());
			this->grbInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 450);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(568, 69);
			this->listBox1->TabIndex = 16;
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(101, 156);
			this->txtPath->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(479, 20);
			this->txtPath->TabIndex = 10;
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Location = System::Drawing::Point(193, 78);
			this->lblTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(25, 13);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"000";
			// 
			// lblInfo2
			// 
			this->lblInfo2->AutoSize = true;
			this->lblInfo2->Location = System::Drawing::Point(23, 78);
			this->lblInfo2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfo2->Name = L"lblInfo2";
			this->lblInfo2->Size = System::Drawing::Size(97, 13);
			this->lblInfo2->TabIndex = 4;
			this->lblInfo2->Text = L"Thời gian đã quét :";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(375, 525);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(205, 82);
			this->listBox2->TabIndex = 17;
			// 
			// lblScaned
			// 
			this->lblScaned->AutoSize = true;
			this->lblScaned->Location = System::Drawing::Point(193, 26);
			this->lblScaned->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblScaned->Name = L"lblScaned";
			this->lblScaned->Size = System::Drawing::Size(25, 13);
			this->lblScaned->TabIndex = 3;
			this->lblScaned->Text = L"000";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(12, 525);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(357, 82);
			this->listBox3->TabIndex = 18;
			// 
			// lblInfo1
			// 
			this->lblInfo1->AutoSize = true;
			this->lblInfo1->Location = System::Drawing::Point(23, 26);
			this->lblInfo1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfo1->Name = L"lblInfo1";
			this->lblInfo1->Size = System::Drawing::Size(82, 13);
			this->lblInfo1->TabIndex = 2;
			this->lblInfo1->Text = L"Số file đã quét :";
			// 
			// lstFile
			// 
			this->lstFile->FormattingEnabled = true;
			this->lstFile->Location = System::Drawing::Point(12, 12);
			this->lstFile->Name = L"lstFile";
			this->lstFile->Size = System::Drawing::Size(568, 134);
			this->lstFile->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Đường dẫn :";
			// 
			// grbInfo
			// 
			this->grbInfo->Controls->Add(this->lblTime);
			this->grbInfo->Controls->Add(this->lblInfo2);
			this->grbInfo->Controls->Add(this->lblScaned);
			this->grbInfo->Controls->Add(this->lblInfo1);
			this->grbInfo->Controls->Add(this->lblDetected);
			this->grbInfo->Controls->Add(this->lblInfo);
			this->grbInfo->Location = System::Drawing::Point(12, 182);
			this->grbInfo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->grbInfo->Name = L"grbInfo";
			this->grbInfo->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->grbInfo->Size = System::Drawing::Size(421, 109);
			this->grbInfo->TabIndex = 12;
			this->grbInfo->TabStop = false;
			this->grbInfo->Text = L"Thông tin :";
			// 
			// lblDetected
			// 
			this->lblDetected->AutoSize = true;
			this->lblDetected->Location = System::Drawing::Point(193, 52);
			this->lblDetected->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetected->Name = L"lblDetected";
			this->lblDetected->Size = System::Drawing::Size(25, 13);
			this->lblDetected->TabIndex = 1;
			this->lblDetected->Text = L"000";
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(23, 52);
			this->lblInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(74, 13);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"Đã phát hiện :";
			// 
			// cmdScan
			// 
			this->cmdScan->Location = System::Drawing::Point(441, 185);
			this->cmdScan->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cmdScan->Name = L"cmdScan";
			this->cmdScan->Size = System::Drawing::Size(139, 36);
			this->cmdScan->TabIndex = 11;
			this->cmdScan->Text = L"Quét";
			this->cmdScan->UseVisualStyleBackColor = true;
			this->cmdScan->Click += gcnew System::EventHandler(this, &Form1::cmdScan_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(602, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 42);
			this->button1->TabIndex = 19;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// lstRe
			// 
			this->lstRe->FormattingEnabled = true;
			this->lstRe->Location = System::Drawing::Point(12, 297);
			this->lstRe->Name = L"lstRe";
			this->lstRe->Size = System::Drawing::Size(568, 147);
			this->lstRe->TabIndex = 20;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 613);
			this->Controls->Add(this->lstRe);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->lstFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->grbInfo);
			this->Controls->Add(this->cmdScan);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grbInfo->ResumeLayout(false);
			this->grbInfo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean compareStr(char *str1, char *str2)
			 {
				//Hàm dùng để so sánh 2 chuỗi ký tự có giống nhau không
				//Ở đây không dùng hàm so sánh có sẵn ( == ) do có các ký tự NULL trong chuỗi cần so sánh
				//Hàm trả về TRUE khi giống nhau và FALSE khi khác nhau
				int i=0;
				while (*(str1+i) == *(str2+i))
				{
					i++;
					if (i == 50)
						return true;
				}

				return false;

			 }
	private: System::Void scan(System::String ^strPath)
			 {
				if (isScan == true)
				{
					System::String ^strFile;
					System::String ^tmp;
					char strDatFile[50];

					 //Liệt kê file trong thư mục hiện tại
					 for each (strFile in System::IO::Directory::GetFiles(strPath))
					 {
						//Mở file cần được quét ra làm việc
						FILE *fs;
						//Do trong strFile là kiểu string
						//cần phải chuyển đổi ra thành kiểu Char để đưa vào hàm
						int itmp = strFile->Length;
						char *chTmpData = new char[itmp+1];
						for(int i = 0; i<itmp;i++)
						{ 
							*(chTmpData + i) = strFile[i];
						};
						*(chTmpData + itmp) = '\0';

						fopen_s(&fs,chTmpData,"rb");
						
							FILE *f;
							char strPathSign[]="c:\\test.txt";
							fopen_s(&f,strPathSign,"rb");
							m_Sign sign;
							
							int i=0;
							
							int posEnd;
							
							//Xác định kích thước file
							fseek(f,0,SEEK_END);
							posEnd=ftell(f);
							
							//Trả về vị trí ban đầu
							fseek(f,0,SEEK_SET);
							
							//Tiến hành vòng lặp liệt kê mã nhận dạng
							while (ftell(f) < posEnd)
							{
								//Đọc mẫu tin lưu mã nhận dạng virus
								fread(&sign,sizeof(m_Sign),1,f);

								//Nhảy trong file muốn quét tới offset muốn xét
								fseek(fs,sign.lPos,SEEK_SET);
								int cur;
								cur=ftell(fs);
								//

								//Lấy 50 byte tại offset đó
								fread(strDatFile,50,1,fs);

								if (compareStr(strDatFile,sign.Sign) == true)
								{
									//Nhận dạng đúng là virus
									tmp = gcnew System::String(sign.Name);
									lstRe->Items->Add(L"Phát hiện : " + tmp + L" đường dẫn :" + strFile);
									detected++;
									lblDetected->Text = Convert::ToString(detected);
								}
							}
							fclose(f);

						fclose(fs);

						//Ghi ra listBox thông báo đã quét file này
						tmp = gcnew System::String(strFile);
						lstFile->Items->Add(tmp);
						scaned++;
						lblScaned->Text =  Convert::ToString(scaned);
					 }

					 //Tiến hành liệt kê các tập tin trong thư mục
					 for each (strFile in System::IO::Directory::GetDirectories(strPath))
					 {
						 try
						 {
							 //Lặp đệ qui
							 scan(strFile);
						 }
						 catch(Exception ^e)
						 {
							 //Bắt lỗi
							 //lstErr->Items->Add(e->Message);
						 }
					 }
				}
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				isScan=false;
				//Test ghi cấu trúc
				//FILE *dungdien;
				//fopen_s(&dungdien,"c:\\test.dat","wb");
				//m_Sign duygioi;
				//char duy[]="1111111111111111111";
				//strcpy(duygioi.Name,duy);
				//strcpy(duygioi.Sign,duy);
				//duygioi.lPos = 13873;
				//fwrite(&duygioi,sizeof(duygioi),1,dungdien);
				//fclose(dungdien);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				FILE *f;
				char strPathSign[]="c:\\test.txt";
				fopen_s(&f,strPathSign,"rb");
				m_Sign sign;

				System::String ^tmp,^tmp1;
				int i=0;

				int posEnd;
				//fseek(f,34,SEEK_SET);

				//Xác định kích thước file
				fseek(f,0,SEEK_END);
				posEnd=ftell(f);
				
				//Trả về vị trí ban đầu
				fseek(f,0,SEEK_SET);
				
				//Tiến hành vòng lặp liệt kê mã nhận dạng
				while (ftell(f) < posEnd)
				{
					fread(&sign,sizeof(m_Sign),1,f);
					
					tmp = gcnew System::String(sign.Sign);
					listBox1->Items->Add(tmp);
					
					listBox2->Items->Add(sign.lPos);
					
					tmp1 = gcnew System::String(sign.Name);
					listBox3->Items->Add(tmp1);
				};
				fclose(f);

			 }
private: System::Void cmdScan_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (isScan == false)
			 {
				scaned=0;
				detected=0;
				cmdScan->Text=L"Dừng";
				isScan = true;
				scan("C:\\Users\\NguyenDung\\Desktop\\Bkav");
			 }
			 else
			 {
				isScan = false;
				cmdScan->Text=L"Quét";
			 }
		 }
};
}
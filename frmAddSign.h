/*
	3AV
	Họ và tên : Đoàn Đắc Ngọc Anh
	
*/

#pragma once
#include <windows.h>
#include <stdio.h>
#include "hSign.h"
#include <string.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace SimpleAV {

	/// <summary>
	/// Summary for frmAddSign
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmAddSign : public System::Windows::Forms::Form
	{
	public:
		frmAddSign(void)
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
		~frmAddSign()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cmdAdd;
	protected: 
	private: System::Windows::Forms::TextBox^  txtOffset;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  cmdBrowse;
	private: System::Windows::Forms::TextBox^  txtPath;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  cmdBack;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFile;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAddSign::typeid));
			this->cmdAdd = (gcnew System::Windows::Forms::Button());
			this->txtOffset = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmdBrowse = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmdBack = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// cmdAdd
			// 
			this->cmdAdd->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cmdAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdAdd->ForeColor = System::Drawing::Color::Lime;
			this->cmdAdd->Location = System::Drawing::Point(262, 178);
			this->cmdAdd->Name = L"cmdAdd";
			this->cmdAdd->Size = System::Drawing::Size(65, 29);
			this->cmdAdd->TabIndex = 42;
			this->cmdAdd->Text = L"Thêm";
			this->cmdAdd->UseVisualStyleBackColor = false;
			this->cmdAdd->Click += gcnew System::EventHandler(this, &frmAddSign::cmdAdd_Click);
			// 
			// txtOffset
			// 
			this->txtOffset->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtOffset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOffset->ForeColor = System::Drawing::Color::Lime;
			this->txtOffset->Location = System::Drawing::Point(76, 110);
			this->txtOffset->Name = L"txtOffset";
			this->txtOffset->Size = System::Drawing::Size(130, 20);
			this->txtOffset->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(0, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Offset :";
			// 
			// cmdBrowse
			// 
			this->cmdBrowse->Location = System::Drawing::Point(378, 84);
			this->cmdBrowse->Name = L"cmdBrowse";
			this->cmdBrowse->Size = System::Drawing::Size(27, 20);
			this->cmdBrowse->TabIndex = 39;
			this->cmdBrowse->Text = L"...";
			this->cmdBrowse->UseVisualStyleBackColor = true;
			this->cmdBrowse->Click += gcnew System::EventHandler(this, &frmAddSign::cmdBrowse_Click);
			// 
			// txtPath
			// 
			this->txtPath->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtPath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPath->ForeColor = System::Drawing::Color::Lime;
			this->txtPath->Location = System::Drawing::Point(76, 84);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(300, 20);
			this->txtPath->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(20, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(249, 25);
			this->label4->TabIndex = 36;
			this->label4->Text = L"THÊM MÃ NHẬN DẠNG";
			this->label4->Click += gcnew System::EventHandler(this, &frmAddSign::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(0, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Đường dẫn:";
			// 
			// cmdBack
			// 
			this->cmdBack->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cmdBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmdBack->ForeColor = System::Drawing::Color::Lime;
			this->cmdBack->Location = System::Drawing::Point(333, 178);
			this->cmdBack->Name = L"cmdBack";
			this->cmdBack->Size = System::Drawing::Size(65, 29);
			this->cmdBack->TabIndex = 43;
			this->cmdBack->Text = L"Cancel";
			this->cmdBack->UseVisualStyleBackColor = false;
			this->cmdBack->Click += gcnew System::EventHandler(this, &frmAddSign::cmdBack_Click);
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::Color::Lime;
			this->txtName->Location = System::Drawing::Point(76, 136);
			this->txtName->MaxLength = 20;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(130, 20);
			this->txtName->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(0, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Tên:";
			// 
			// openFile
			// 
			this->openFile->FileName = L"*";
			this->openFile->Filter = L"Tất cả loại file|*.*";
			// 
			// frmAddSign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(410, 209);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdBack);
			this->Controls->Add(this->cmdAdd);
			this->Controls->Add(this->txtOffset);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmdBrowse);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmAddSign";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"36 AV Thêm mã nhận dạng";
			this->Load += gcnew System::EventHandler(this, &frmAddSign::frmAddSign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean compareStr(char *str1, char *str2, int iLen)
		{
		//Hàm dùng để so sánh 2 chuỗi ký tự có giống nhau không
		//Với iLen là chiều dài muốn so sánh giữa các chuỗi
		//Ở đây không dùng hàm so sánh có sẵn ( == ) do có các ký tự NULL trong chuỗi cần so sánh
		//Hàm trả về TRUE khi giống nhau và FALSE khi khác nhau
			int i=0;
			while (*(str1+i) == *(str2+i))
			{
				i++;
				if (i == iLen)
					return true;
			}
			return false;
		}

	private: System::Void cmdBrowse_Click(System::Object^  sender, System::EventArgs^  e) {

				 /*System::IO::Stream filePath;
				 openFile->ShowDialog();
				 filePath=txtPath->Text=openFile->OpenFile();
				 txtPath->Text=filePath.ToString;*/
				openFile->ShowDialog();
				txtPath->Text=openFile->FileName;
			 }
private: System::Void frmAddSign_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cmdBack_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->~frmAddSign();
		 }
private: System::Void cmdAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Xử lý các lỗi có thể xảy ra
			if (System::IO::File::Exists(txtPath->Text) == false)
				System::Windows::Forms::MessageBox::Show(L"File không tồn tại",L"Lỗi");
			if (txtOffset->Text == "")
				System::Windows::Forms::MessageBox::Show(L"Giá trị offset bỏ trống",L"Lỗi");
			if (txtName->Text == "")
				System::Windows::Forms::MessageBox::Show(L"Bỏ trống ô tên virus",L"Lỗi");
			//Xử lý kiểm tra xem mẫu tin virus đã tồn tại hay chưa
			//Kiểm tra gồm kiểm tra mã nhận dạng virus
			//Kiểm tra tên virus
					System::String ^strFile;
					System::String ^tmp;
					FILE *f;
					//Mở file sẽ được lấy mẫu
					FILE *fs;
					char strPathSign[]="Sign.vir";
					char strDatFile[50];
					m_Sign sign;
					System::Boolean isHave=false;
					int iTmpOffset;
					int i;
							 strFile = txtPath->Text;
							//Convert từ chuỗi trong TextBox qua chuỗi dạng chuẩn của chương trình
							//Từ đưa về chuỗi với 20 ký tự
							//Chuyển từ dạng String -> Char
							char tmpName[21];
							System::String ^strTmpName;
							strTmpName = txtName->Text;
							for (i=0; i < strTmpName->Length;i++)
							{
								tmpName[i] = strTmpName[i];
							}
								for (int i=strTmpName->Length; i <= 20;i++)
							{
								tmpName[i] = 32;
							}
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
								fopen_s(&f,strPathSign,"a+b");
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
									//Offset này lấy từ sign.lPos
									fseek(fs,sign.lPos,SEEK_SET);
									//Lấy 50 byte tại offset đó
									fread(strDatFile,50,1,fs);
									if (compareStr(strDatFile,sign.Sign,50))
									{
										//Nhận dạng trùng mã nhận dạng
										tmp = gcnew System::String(sign.Name);
										isHave=true;
										System::Windows::Forms::MessageBox::Show(L"Mã nhận dạng này đã có trong bảng mã",L"Trùng mã nhận dạng");
										break;
									}
									if (compareStr(tmpName,sign.Name,20))
									{
										//Nhận dạng trùng tên virus đã lưu
										tmp = gcnew System::String(sign.Name);
										isHave=true;
										System::Windows::Forms::MessageBox::Show(L"Tên virus này đã có trong bảng mã nhận dạng",L"Trùng mã nhận dạng");
										break;
									}
								}
								
								if (!isHave)
								{
									//Sau khi kiểm tra là chưa có mã nhận dạng này + Tên virus là thao tác ghi mẫu tin dữ liệu virus mới vào
									//Lấy dữ liệu tại Offset cần lấy (Tại txtOffset)
									iTmpOffset=System::Int32::Parse(txtOffset->Text);
									fseek(fs,iTmpOffset,SEEK_SET);
									fread(strDatFile,50,1,fs);
									//Đưa dữ liệu vào một biến theo Struct m_Sign
									//Hàm strcpy xử lý lỗi trong những trường hợp này (Do có ký tự NULL)
									//Vì vậy hàm copy 2 mảng char sẽ cần tự code lại
									for (i=0;i < 50;i++)
										sign.Sign[i]=strDatFile[i];
									sign.lPos=iTmpOffset;
									strcpy(sign.Name,tmpName);	
									//Nhảy đến cuối file
									fseek(f,0,SEEK_END);
									//Ghi dữ liệu vào cuối file
									fwrite(&sign,sizeof(sign),1,f);
									System::Windows::Forms::MessageBox::Show(L"Đã lưu xong mẫu tin dữ liệu virus mới",L"Thành công");
								}
								fclose(f);
							fclose(fs);
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

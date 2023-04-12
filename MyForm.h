#pragma once
#include "Character.h"

namespace ProgectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ butCM;
	private: System::Windows::Forms::Button^ butCA;
	private: System::Windows::Forms::Button^ butCT;
	private: System::Windows::Forms::Label^ UnderwearMsg;
	private: System::Windows::Forms::Label^ UnderwearMsg2;
	private: System::Windows::Forms::Label^ Total1;
	private: System::Windows::Forms::Label^ Total2;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->butCM = (gcnew System::Windows::Forms::Button());
			this->butCA = (gcnew System::Windows::Forms::Button());
			this->butCT = (gcnew System::Windows::Forms::Button());
			this->UnderwearMsg = (gcnew System::Windows::Forms::Label());
			this->UnderwearMsg2 = (gcnew System::Windows::Forms::Label());
			this->Total1 = (gcnew System::Windows::Forms::Label());
			this->Total2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(588, 782);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 850);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(190, 0, 190, 0);
			this->label1->Size = System::Drawing::Size(593, 79);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Player";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1272, 850);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(230, 0, 230, 0);
			this->label2->Size = System::Drawing::Size(592, 79);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Bot";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1272, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(588, 782);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// butCM
			// 
			this->butCM->BackColor = System::Drawing::Color::Goldenrod;
			this->butCM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butCM->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butCM->Location = System::Drawing::Point(681, 252);
			this->butCM->Name = L"butCM";
			this->butCM->Size = System::Drawing::Size(562, 89);
			this->butCM->TabIndex = 4;
			this->butCM->Text = L"Create Magician";
			this->butCM->UseVisualStyleBackColor = false;
			this->butCM->Click += gcnew System::EventHandler(this, &MyForm::butCM_Click);
			// 
			// butCA
			// 
			this->butCA->BackColor = System::Drawing::Color::Goldenrod;
			this->butCA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butCA->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butCA->Location = System::Drawing::Point(681, 409);
			this->butCA->Name = L"butCA";
			this->butCA->Size = System::Drawing::Size(562, 89);
			this->butCA->TabIndex = 5;
			this->butCA->Text = L"Create Assasin";
			this->butCA->UseVisualStyleBackColor = false;
			this->butCA->Click += gcnew System::EventHandler(this, &MyForm::butCA_Click);
			// 
			// butCT
			// 
			this->butCT->BackColor = System::Drawing::Color::Goldenrod;
			this->butCT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butCT->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butCT->Location = System::Drawing::Point(681, 564);
			this->butCT->Name = L"butCT";
			this->butCT->Size = System::Drawing::Size(562, 89);
			this->butCT->TabIndex = 6;
			this->butCT->Text = L"Create Tank";
			this->butCT->UseVisualStyleBackColor = false;
			this->butCT->Click += gcnew System::EventHandler(this, &MyForm::butCT_Click);
			// 
			// UnderwearMsg
			// 
			this->UnderwearMsg->AutoSize = true;
			this->UnderwearMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UnderwearMsg->ForeColor = System::Drawing::Color::Red;
			this->UnderwearMsg->Location = System::Drawing::Point(62, 7);
			this->UnderwearMsg->Name = L"UnderwearMsg";
			this->UnderwearMsg->Size = System::Drawing::Size(0, 29);
			this->UnderwearMsg->TabIndex = 7;
			// 
			// UnderwearMsg2
			// 
			this->UnderwearMsg2->AutoSize = true;
			this->UnderwearMsg2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UnderwearMsg2->ForeColor = System::Drawing::Color::Red;
			this->UnderwearMsg2->Location = System::Drawing::Point(1280, 16);
			this->UnderwearMsg2->Name = L"UnderwearMsg2";
			this->UnderwearMsg2->Size = System::Drawing::Size(0, 29);
			this->UnderwearMsg2->TabIndex = 8;
			// 
			// Total1
			// 
			this->Total1->AutoSize = true;
			this->Total1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Total1->Location = System::Drawing::Point(676, 106);
			this->Total1->Name = L"Total1";
			this->Total1->Size = System::Drawing::Size(0, 29);
			this->Total1->TabIndex = 9;
			// 
			// Total2
			// 
			this->Total2->AutoSize = true;
			this->Total2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Total2->Location = System::Drawing::Point(676, 184);
			this->Total2->Name = L"Total2";
			this->Total2->Size = System::Drawing::Size(0, 29);
			this->Total2->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1917, 1014);
			this->Controls->Add(this->Total2);
			this->Controls->Add(this->Total1);
			this->Controls->Add(this->UnderwearMsg2);
			this->Controls->Add(this->UnderwearMsg);
			this->Controls->Add(this->butCT);
			this->Controls->Add(this->butCA);
			this->Controls->Add(this->butCM);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: int FC, EFC;

private: System::Void butCM_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void butCA_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butCT_Click(System::Object^ sender, System::EventArgs^ e);
private: Character* Enemy();
private: void Result(int HeroScore, int EnemyScore);
};
}

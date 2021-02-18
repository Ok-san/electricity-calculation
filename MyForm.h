#pragma once
#include "Task.h"

namespace LR3 
{

	using namespace System;
	using namespace System::Text::RegularExpressions;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		bool LeftMove;
		MyForm(void)
		{
			InitializeComponent();
			Draw();
			Animation();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBoxPrevious;
	private: System::Windows::Forms::TextBox^ textBoxCurrent;
	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::Label^ totalAmount;
	private: System::Windows::Forms::Button^ buttonCalculate;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ taskToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ packman;
	private: System::Windows::Forms::PictureBox^ pictureBoxGraph;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ lamp1;
	private: System::Windows::Forms::PictureBox^ lamp2;
	private: System::Windows::Forms::PictureBox^ lamp3;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBoxPrevious = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCurrent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->totalAmount = (gcnew System::Windows::Forms::Label());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxGraph = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->taskToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->packman = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lamp1 = (gcnew System::Windows::Forms::PictureBox());
			this->lamp2 = (gcnew System::Windows::Forms::PictureBox());
			this->lamp3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraph))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->packman))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxPrevious
			// 
			this->textBoxPrevious->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxPrevious->Location = System::Drawing::Point(210, 37);
			this->textBoxPrevious->MaximumSize = System::Drawing::Size(210, 58);
			this->textBoxPrevious->Name = L"textBoxPrevious";
			this->textBoxPrevious->Size = System::Drawing::Size(105, 34);
			this->textBoxPrevious->TabIndex = 1;
			this->textBoxPrevious->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPrevious_TextChanged);
			this->textBoxPrevious->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxPrevious_KeyPress);
			// 
			// textBoxCurrent
			// 
			this->textBoxCurrent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCurrent->Location = System::Drawing::Point(210, 98);
			this->textBoxCurrent->MaximumSize = System::Drawing::Size(210, 58);
			this->textBoxCurrent->Name = L"textBoxCurrent";
			this->textBoxCurrent->Size = System::Drawing::Size(105, 34);
			this->textBoxCurrent->TabIndex = 2;
			this->textBoxCurrent->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPrevious_TextChanged);
			this->textBoxCurrent->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxPrevious_KeyPress);
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxPrice->Location = System::Drawing::Point(210, 155);
			this->textBoxPrice->MaximumSize = System::Drawing::Size(210, 58);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(105, 34);
			this->textBoxPrice->TabIndex = 3;
			this->textBoxPrice->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPrevious_TextChanged);
			this->textBoxPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxPrevious_KeyPress);
			// 
			// totalAmount
			// 
			this->totalAmount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->totalAmount->AutoSize = true;
			this->totalAmount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->totalAmount->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->totalAmount->Location = System::Drawing::Point(6, 25);
			this->totalAmount->MaximumSize = System::Drawing::Size(229, 0);
			this->totalAmount->Name = L"totalAmount";
			this->totalAmount->Size = System::Drawing::Size(18, 26);
			this->totalAmount->TabIndex = 4;
			this->totalAmount->Text = L" ";
			this->totalAmount->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCalculate->BackColor = System::Drawing::Color::CadetBlue;
			this->buttonCalculate->Enabled = false;
			this->buttonCalculate->Location = System::Drawing::Point(397, 197);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(283, 49);
			this->buttonCalculate->TabIndex = 5;
			this->buttonCalculate->Text = L"Calculate";
			this->buttonCalculate->UseVisualStyleBackColor = false;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 40);
			this->label2->MaximumSize = System::Drawing::Size(238, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 42);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Previous counter reading:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 101);
			this->label3->MaximumSize = System::Drawing::Size(380, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 27);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Сurrent counter reading:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 158);
			this->label4->MaximumSize = System::Drawing::Size(252, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 27);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Price per 1 kW:";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxPrevious);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxCurrent);
			this->groupBox1->Controls->Add(this->textBoxPrice);
			this->groupBox1->Location = System::Drawing::Point(12, 42);
			this->groupBox1->MaximumSize = System::Drawing::Size(758, 408);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(379, 204);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter data";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(321, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 27);
			this->label7->TabIndex = 11;
			this->label7->Text = L"rub";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(321, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"kWh";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(321, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 27);
			this->label5->TabIndex = 9;
			this->label5->Text = L"kWh";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox2->Controls->Add(this->pictureBoxGraph);
			this->groupBox2->Controls->Add(this->totalAmount);
			this->groupBox2->Location = System::Drawing::Point(397, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 149);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Amount to be paid:";
			// 
			// pictureBoxGraph
			// 
			this->pictureBoxGraph->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBoxGraph->Location = System::Drawing::Point(6, 51);
			this->pictureBoxGraph->Name = L"pictureBoxGraph";
			this->pictureBoxGraph->Size = System::Drawing::Size(271, 92);
			this->pictureBoxGraph->TabIndex = 5;
			this->pictureBoxGraph->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::CadetBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->taskToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(692, 30);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// taskToolStripMenuItem
			// 
			this->taskToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskToolStripMenuItem->Name = L"taskToolStripMenuItem";
			this->taskToolStripMenuItem->Size = System::Drawing::Size(61, 26);
			this->taskToolStripMenuItem->Text = L"Task";
			this->taskToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::taskToolStripMenuItem_Click);
			// 
			// packman
			// 
			this->packman->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->packman->BackColor = System::Drawing::Color::MintCream;
			this->packman->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"packman.BackgroundImage")));
			this->packman->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"packman.Image")));
			this->packman->Location = System::Drawing::Point(0, 252);
			this->packman->Name = L"packman";
			this->packman->Size = System::Drawing::Size(50, 50);
			this->packman->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->packman->TabIndex = 13;
			this->packman->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// lamp1
			// 
			this->lamp1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lamp1->BackColor = System::Drawing::Color::MintCream;
			this->lamp1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamp1.BackgroundImage")));
			this->lamp1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamp1.Image")));
			this->lamp1->Location = System::Drawing::Point(137, 263);
			this->lamp1->Name = L"lamp1";
			this->lamp1->Size = System::Drawing::Size(24, 30);
			this->lamp1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lamp1->TabIndex = 13;
			this->lamp1->TabStop = false;
			// 
			// lamp2
			// 
			this->lamp2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lamp2->BackColor = System::Drawing::Color::MintCream;
			this->lamp2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamp2.BackgroundImage")));
			this->lamp2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamp2.Image")));
			this->lamp2->Location = System::Drawing::Point(336, 263);
			this->lamp2->Name = L"lamp2";
			this->lamp2->Size = System::Drawing::Size(24, 30);
			this->lamp2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lamp2->TabIndex = 13;
			this->lamp2->TabStop = false;
			this->lamp2->Visible = false;
			// 
			// lamp3
			// 
			this->lamp3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->lamp3->BackColor = System::Drawing::Color::MintCream;
			this->lamp3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lamp3.Image")));
			this->lamp3->Location = System::Drawing::Point(536, 263);
			this->lamp3->Name = L"lamp3";
			this->lamp3->Size = System::Drawing::Size(24, 30);
			this->lamp3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lamp3->TabIndex = 13;
			this->lamp3->TabStop = false;
			this->lamp3->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->ClientSize = System::Drawing::Size(692, 305);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->lamp3);
			this->Controls->Add(this->lamp2);
			this->Controls->Add(this->lamp1);
			this->Controls->Add(this->packman);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximumSize = System::Drawing::Size(6650, 3500);
			this->Name = L"MyForm";
			this->Text = L"LR3. Calculation of payment for electricity.";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraph))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->packman))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lamp3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBoxPrevious_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{

		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
			return;
		if (e->KeyChar == '.')
		{
			e->KeyChar = ',';
			return;
		}
		if (e->KeyChar == ',')
			return;
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
				buttonCalculate->Focus();
			return;
		}
		e->Handled = true;
	}

	private: System::Void textBoxPrevious_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxPrevious->Text->Length == 0) || (textBoxCurrent->Text->Length == 0) || (textBoxPrice->Text->Length == 0))
			buttonCalculate->Enabled = false;
		else
			buttonCalculate->Enabled = true;
	}

	private: System::Void taskToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Task^ form2 = gcnew Task();
		form2->Show();
	}

	private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Regex^ reg = gcnew Regex("^[0-9]*[,]?[0-9]+$");
		Match^ name_ex = reg->Match(textBoxPrevious->Text);
		Match^ name_ex2 = reg->Match(textBoxCurrent->Text);
		Match^ name_ex3 = reg->Match(textBoxPrice->Text);
		if (name_ex->Success && name_ex2->Success && name_ex3->Success)
		{
			double previous, current, price, amount;
			previous = Convert::ToDouble(textBoxPrevious->Text);
			current = Convert::ToDouble(textBoxCurrent->Text);
			price = Convert::ToDouble(textBoxPrice->Text);
			if (previous != 0 && current != 0 && price != 0)
			{
				if (previous <= current)
				{
					amount = (current - previous) * price;
					double resultAmount = Math::Round(amount, 2);
					totalAmount->Text = System::Convert::ToString(resultAmount) + L" rub";
					Draw(resultAmount);
				}
				else
					MessageBox::Show("The current reading must not be less than the previous one!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				MessageBox::Show("Values cannot be zero! Try again.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			MessageBox::Show("Invalid number entry! Try again.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

	private: System::Void Draw()
	{
		Bitmap^ bmp = gcnew Bitmap(pictureBoxGraph->Width, pictureBoxGraph->Height);
		Graphics^ graph = Graphics::FromImage(bmp);
		Pen^ pen = gcnew Pen(Color::Gray, 3);
		Pen^ pen2 = gcnew Pen(Color::Gray, 5);
		int x1 = 269, x2 = x1 - 2;
		for (int i = 0; i < 2; i++)
		{
			int  x2 = x1 - 2;
			graph->DrawLine(pen, x1, 87, x1, 60);// для 0 1  4 5 6 7 8 9
			graph->DrawLine(pen, x1, 55, x1, 28);// 0 1 2 3 4 7 8 9
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);// 0 2 6 8
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);// 0 4 5 6 7 8 9
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);// 0 2 3 5 6 8 9
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);// 0 2 3 5 6 7 8 9
			x1 = x1 - 27 - 15;
		}
		graph->DrawLine(pen2, x1, 87, x1, 90);
		x1 = x1 - 15;
		for (int i = 0; i < 4; i++)
		{
			int  x2 = x1 - 2;
			graph->DrawLine(pen, x1, 87, x1, 60);// для 0 1  4 5 6 7 8 9
			graph->DrawLine(pen, x1, 55, x1, 28);// 0 1 2 3 4 7 8 9
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);// 0 2 6 8
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);// 0 4 5 6 7 8 9
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);// 0 2 3 5 6 8 9
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);// 0 2 3 5 6 7 8 9
			x1 = x1 - 27 - 15;
		}
		pictureBoxGraph->Image = bmp;
	}

	private: System::Void Draw(double resultAmount)
	{

		Bitmap^ bmp = gcnew Bitmap(pictureBoxGraph->Width, pictureBoxGraph->Height);
		Graphics^ graph = Graphics::FromImage(bmp);
		Pen^ pen = gcnew Pen(Color::Black, 4);
		Pen^ penGray = gcnew Pen(Color::LightGray, 3);
		Pen^ pen2 = gcnew Pen(Color::Black, 5);
		int x1 = 269, x2 = x1 - 2;
		String^ str = System::Convert::ToString(resultAmount);
		int pos = str->IndexOf(',', 0);
		pictureBoxGraph->Image = nullptr;
		if (resultAmount >= 20000)
		{
			MessageBox::Show("The number is large and may not be displayed correctly in the image!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		if (pos != -1)
		{
			int fractPart = str->Length - pos - 1;
			if (fractPart == 1)
			{
				str += L'0';
			}

			for (int i = str->Length - 1; i > pos; i--)
			{
				int  x2 = x1 - 2;
				DrawNumbers(str[i], x1, x2, graph, pen, penGray);
				x1 = x1 - 27 - 15;
			}

			graph->DrawLine(pen2, x1, 87, x1, 90);
			x1 = x1 - 15;

			for (int i = pos - 1; i >= 0; i--)
			{
				int  x2 = x1 - 2;
				DrawNumbers(str[i], x1, x2, graph, pen, penGray);
				x1 = x1 - 27 - 15;
			}
		}
		else {
			for (int i = str->Length - 1; i >= 0; i--) {
				int  x2 = x1 - 2;
				DrawNumbers(str[i], x1, x2, graph, pen, penGray);
				x1 = x1 - 27 - 15;
			}
		}
		pictureBoxGraph->Image = bmp;
	}

	private: System::Void DrawNumbers(wchar_t num, int x1, int x2, Graphics^ graph, Pen^ pen, Pen^ penGray)
	{
		if (num == '0')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(penGray, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '1')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(penGray, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(penGray, x2, 90, x2 - 23, 90);
			graph->DrawLine(penGray, x2, 57, x2 - 23, 57);
			graph->DrawLine(penGray, x2, 24, x2 - 23, 24);
		}
		if (num == '2')
		{
			graph->DrawLine(penGray, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(penGray, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '3')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(penGray, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '4')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(penGray, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(penGray, x2, 24, x2 - 23, 24);
		}
		if (num == '5')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(penGray, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '6')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(penGray, x1, 55, x1, 28);
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '7')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(penGray, x2, 90, x2 - 23, 90);
			graph->DrawLine(penGray, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '8')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(pen, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
		if (num == '9')
		{
			graph->DrawLine(pen, x1, 87, x1, 60);
			graph->DrawLine(pen, x1, 55, x1, 28);
			graph->DrawLine(penGray, x1 - 27, 87, x1 - 27, 60);
			graph->DrawLine(pen, x1 - 27, 55, x1 - 27, 28);
			graph->DrawLine(pen, x2, 90, x2 - 23, 90);
			graph->DrawLine(pen, x2, 57, x2 - 23, 57);
			graph->DrawLine(pen, x2, 24, x2 - 23, 24);
		}
	}

	private: System::Void Animation() {

	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		lamp1->Visible = true;
		lamp2->Visible = true;
		lamp3->Visible = true;

		if (LeftMove)
		{
			if (packman->Right >= lamp1->Left) {
				lamp1->Visible = false;
			}
			if (packman->Right >= lamp2->Left) {
				lamp2->Visible = false;
			}
			if (packman->Right >= lamp3->Left) {
				lamp3->Visible = false;
			}
			packman->Left += 10;
		}
		if (!LeftMove)
		{
			if (packman->Left <= lamp1->Right) {
				lamp1->Visible = false;
			}
			if (packman->Left <=lamp2->Right) {
				lamp2->Visible = false;
			}
			if (packman->Left <= lamp3->Right) {
				lamp3->Visible = false;
			}
			packman->Left -= 10;
		}
		if (packman->Left <= ClientRectangle.Left) {
			LeftMove = true;
			packman->Image = Image::FromFile("Img/pngegg1.png");
		}
		if (packman->Right >= ClientRectangle.Right) {
			LeftMove = false;
			packman->Image = Image::FromFile("Img/pngegg2.png");
		}
	}
	};
}

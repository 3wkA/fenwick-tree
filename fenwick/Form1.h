#pragma once
#include <fstream>
#include <string>
#include <chrono>
#include <msclr\marshal_cppstd.h>
#include "FenwickTree.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	fenwick tree(0);

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void){InitializeComponent();}
	protected:
		~Form1(){if (components)delete components;}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::ComponentModel::Container ^components;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: int size = 0; bool toggle = true;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(134, 204);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1316134912, 2328, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(169, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(314, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Создать дерево";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(131, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Количество элементов в дереве";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Загрузить дерево";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(1, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(136, 407);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->Visible = false;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"#";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 35;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Значение";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(314, 122);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 37);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Изменить элемент";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(313, 85);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(85, 20);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ввод значение";
			this->label2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Location = System::Drawing::Point(179, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"X:";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Location = System::Drawing::Point(290, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Y:";
			this->label5->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(202, 55);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(85, 20);
			this->numericUpDown3->TabIndex = 11;
			this->numericUpDown3->Visible = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Location = System::Drawing::Point(313, 57);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(85, 20);
			this->numericUpDown4->TabIndex = 12;
			this->numericUpDown4->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->CausesValidation = false;
			this->radioButton1->Location = System::Drawing::Point(152, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(229, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ввести значение следующего элемента";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->CausesValidation = false;
			this->radioButton2->Location = System::Drawing::Point(152, 26);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(241, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Изменить значение в диапозоне от X до Y";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 373);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Location = System::Drawing::Point(152, 185);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Сумма в диапозоне от X до Y равна...";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->Location = System::Drawing::Point(179, 207);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"X:";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->Location = System::Drawing::Point(290, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Y:";
			this->label8->Visible = false;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(202, 204);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(85, 20);
			this->numericUpDown5->TabIndex = 19;
			this->numericUpDown5->Visible = false;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Enabled = false;
			this->numericUpDown6->Location = System::Drawing::Point(314, 205);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(85, 20);
			this->numericUpDown6->TabIndex = 20;
			this->numericUpDown6->Visible = false;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(315, 318);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 37);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 422);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Дерево Фенвика";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (toggle)
		{
			this->Text = L"Дерево Фенвика / Заполение и обработка";
			toggle = !toggle;
			size = (int)numericUpDown1->Value;
			numericUpDown3->Maximum = size - 1;
			numericUpDown4->Maximum = size - 1;
			radioButton1->Visible = true;
			radioButton1->Checked = true;
			radioButton2->Visible = true;
			numericUpDown2->Visible = true;
			numericUpDown3->Visible = true;
			numericUpDown4->Visible = true;
			numericUpDown5->Visible = true;
			numericUpDown6->Visible = true;
			label2->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			label8->Visible = true;
			button3->Visible = true;
			button4->Visible = true;
			label1->Visible = false;
			button2->Visible = false;
			numericUpDown1->Visible = false;
			button1->Text = "Назад";
			tree.create(size);
		}
		else if (!toggle)
		{
			this->Text = L"Дерево Фенвика / Создание";
			toggle = !toggle;
			button1->Text = "Создать";
			button2->Visible = true;
			button3->Visible = false;
			button4->Visible = false;
			button4->Enabled = false;
			numericUpDown1->Value = 1;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			dataGridView1->Visible = false;
			numericUpDown1->Visible = true;
			numericUpDown2->Visible = false;
			numericUpDown3->Visible = false;
			numericUpDown4->Visible = false;
			numericUpDown5->Visible = false;
			numericUpDown6->Visible = false;
			numericUpDown5->Enabled = false;
			numericUpDown6->Enabled = false;
			dataGridView1->Rows->Clear();
			radioButton1->Visible = false;
			radioButton2->Visible = false;
			label1->Visible = true;
			label2->Visible = false;
			label3->Text = "";
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			label8->Visible = false;
			label6->Enabled = false;
			label7->Enabled = false;
			label8->Enabled = false;
			label6->Text = "Сумма в диапозоне от X до Y равна...";
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->InitialDirectory = "";
		openFileDialog1->Filter = "TXT (*.txt)|*.txt";
		openFileDialog1->FileName = "";
		openFileDialog1->Title = "Загрузить дерево";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::ifstream file(msclr::interop::marshal_as<std::string>(openFileDialog1->FileName));
			if (file.is_open())
			{
				std::string line;
				int counter = 0;
				while (std::getline(file, line))
					counter++;
				if (counter > 0)
				{
					size = counter;
					tree.create(size);
					try
					{
						int v;
						this->Text = L"Дерево Фенвика / Заполение и обработка";
						button1->Text = "Назад";
						button2->Visible = false;
						button3->Visible = true;
						radioButton1->Visible = true;
						radioButton1->Checked = true;
						radioButton2->Visible = true;
						numericUpDown3->Maximum = size - 1;
						numericUpDown4->Maximum = size - 1;
						numericUpDown1->Visible = false;
						numericUpDown2->Visible = true;
						numericUpDown3->Visible = true;
						numericUpDown4->Visible = true;
						numericUpDown5->Visible = true;
						numericUpDown6->Visible = true;
						numericUpDown5->Enabled = true;
						numericUpDown6->Enabled = true;
						label1->Visible = false;
						label2->Visible = true;
						label4->Visible = true;
						label5->Visible = true;
						label6->Visible = true;
						label7->Visible = true;
						label8->Visible = true;
						label6->Enabled = true;
						label7->Enabled = true;
						label8->Enabled = true;
						label6->Text = "Сумма в диапозоне от X до Y равна...";
						toggle = !toggle;
						dataGridView1->Visible = true;
						file.close();
						file.open(msclr::interop::marshal_as<std::string>(openFileDialog1->FileName));
						while (std::getline(file, line))
						{
							v = atoi(line.c_str());
							tree.add(dataGridView1->RowCount, v);
							dataGridView1->Rows->Add(dataGridView1->RowCount, tree.getTreeValue(dataGridView1->RowCount));
						}
						numericUpDown5->Maximum = dataGridView1->RowCount - 1;
						numericUpDown6->Maximum = dataGridView1->RowCount - 1;
					}
					catch(...){}

				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->RowCount == 0)
		{
			dataGridView1->Visible = true;
			label6->Enabled = true;
			label7->Enabled = true;
			label8->Enabled = true;
			numericUpDown5->Enabled = true;
			numericUpDown6->Enabled = true;
		}

		if ((int)numericUpDown3->Value <= (int)numericUpDown4->Value)
		{
			if (radioButton1->Checked)
			{
				if (dataGridView1->RowCount != size)
				{
					auto begin = std::chrono::high_resolution_clock::now();
					tree.add(dataGridView1->RowCount, (int)numericUpDown2->Value);
					auto end = std::chrono::high_resolution_clock::now();
					label3->Text = "Выполнено за " + std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() + " нс";
					dataGridView1->Rows->Add(dataGridView1->RowCount, tree.getTreeValue(dataGridView1->RowCount));
				}
			}
			else
			{
				auto begin = std::chrono::high_resolution_clock::now();
				tree.add((int)numericUpDown3->Value, (int)numericUpDown4->Value, (int)numericUpDown2->Value);
				auto end = std::chrono::high_resolution_clock::now();
				label3->Text = "Выполнено за " + std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() + " нс";
				if (dataGridView1->RowCount == 0 || numericUpDown4->Value >= dataGridView1->RowCount)
				{
					dataGridView1->Rows->Clear();
					for (int i = 0; i <= (int)numericUpDown4->Value; i++)
						dataGridView1->Rows->Add(dataGridView1->RowCount, tree.getTreeValue(i));
				}
				else
				{
					for (int i = (int)numericUpDown3->Value; i <= (int)numericUpDown4->Value; i++)
						dataGridView1[1, i]->Value = tree.getTreeValue(i);
				}
			}
		}
		numericUpDown5->Maximum = dataGridView1->RowCount - 1;
		numericUpDown6->Maximum = dataGridView1->RowCount - 1;
		button4->Enabled = true;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked)
		{
			numericUpDown3->Enabled = false;
			numericUpDown4->Enabled = false;
			label4->Enabled = false;
			label5->Enabled = false;
		}
		else
		{
			numericUpDown3->Enabled = true;
			numericUpDown4->Enabled = true;
			label4->Enabled = true;
			label5->Enabled = true;
		}
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int left = (int)numericUpDown5->Value;
		int right = (int)numericUpDown6->Value;
		auto begin = std::chrono::high_resolution_clock::now();
		int summary = tree.sum(left, right);
		auto end = std::chrono::high_resolution_clock::now();
		label3->Text = "Выполнено за " + std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() + " нс";
		label6->Text = "Сумма в диапозоне от " + numericUpDown5->Value + " до " + numericUpDown6->Value + " равна " + summary;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->InitialDirectory = "";
		saveFileDialog1->Filter = "TXT (*.txt)|*.txt";
		saveFileDialog1->FileName = "";
		saveFileDialog1->Title = "Сохранить дерево";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::ofstream file(msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName));
			if (file.is_open())
			{
				for (int i = 0; i < size; i++)
				{
					file << tree.getValue(i);
					if (i != size - 1) file << std::endl;
				}
				file.close();
				MessageBox::Show("Данные сохранены в файл.\nРасположение данных: " + saveFileDialog1->FileName, "Оповещение");
			}
		}
	}
};
}
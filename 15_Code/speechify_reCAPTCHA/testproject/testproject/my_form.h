#pragma once

#include <iostream>
#include<sstream>
#include <cstdlib>
#include<ctime>
#include<string>
#include"prediction2.h"
#include"home_page.h"
#include"live_testing.h"
#include"login_unsuccessful.h"

int img_index = 0;
int predicted ;
int attempts = 3;
bool attempts_remaining = true;
bool login = false;

char* word[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};


namespace testproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for my_form
	/// </summary>
	public ref class my_form : public System::Windows::Forms::Form
	{
	public:
		my_form(void)
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
		~my_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(my_form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(114, 462);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &my_form::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(82, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Speech based captcha";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &my_form::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(130, 151);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(156, 113);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &my_form::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Location = System::Drawing::Point(306, 255);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 57);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &my_form::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(206, 55);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &my_form::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(206, 87);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(101, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"User Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(111, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(41, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"You Spoke:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(306, 151);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 46);
			this->button3->TabIndex = 10;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &my_form::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(127, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Identify this number : ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Location = System::Drawing::Point(114, 527);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 47);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Live Training";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &my_form::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(130, 388);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 35);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(192, 406);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"I am not a robot";
			this->label6->Click += gcnew System::EventHandler(this, &my_form::label6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(130, 290);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &my_form::textBox3_TextChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(130, 332);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 32);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(259, 332);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(27, 32);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(195, 332);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 32);
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &my_form::pictureBox5_Click);
			// 
			// my_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(468, 596);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"my_form";
			this->Text = L"Speechify reCAPTCHA";
			this->Load += gcnew System::EventHandler(this, &my_form::my_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //login button
				 if(login)
				 {
					 textBox3->Text = " ";
					 button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(192)));
					 button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
					 login  = false;
					 //button2->Enabled = true;
					 //button3->Enabled = true;
					 Image^ image = Image::FromFile(L"cb.png");
					 this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					 
					 pictureBox3->Visible = false;
					 pictureBox4->Visible = false;
					 pictureBox5->Visible = false;

					 attempts = 3;
					 this->Hide();
					 home_page^ form2 = gcnew home_page(this);
					 form2->ShowDialog();
				 }
				 
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Do nothing
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //record button
			 //start recording 
			 //and predict the recorded word
			 predicted = predict();
			 login = false;
			 button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			 button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			
			 String ^predicted_word = gcnew String(word[predicted]);
			 textBox3->Text = predicted_word;
			 if(predicted==img_index)
			 {
				 button1->BackColor = System::Drawing::Color::Blue;
				 button1->ForeColor = System::Drawing::Color::White;
				 Image^ image = Image::FromFile(L"cb_green.png");
				 pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
				 login = true;
			 }
			 else
			 {
				 attempts--;
				 if(attempts==2)
				 {
					 pictureBox5->Visible = true;
				 }

				 else if(attempts==1)
				 {
					 pictureBox3->Visible = true;
				 }

				 else if(attempts==0)
				 {
					 pictureBox4->Visible = true;
				 }

				 else if(attempts<0)
				 {
					 //button2->Enabled = false;
					 //button3->Enabled = false;
					 attempts_remaining = false;
					 textBox3->Text = " ";
					 Image^ image = Image::FromFile(L"cb_red.png");
					 this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					 this->Hide();
					 login_unsuccessful^ form = gcnew login_unsuccessful(this);
					 form->ShowDialog();
				 }
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Refresh button
			 if(attempts_remaining)
			 {
				 Image^ image = Image::FromFile(L"cb.png");
				 this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					
			 }
			 textBox3->Text = " ";
			 button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			 this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			 login = false;
			 int rn = (rand() % 17);
			 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(my_form::typeid));
			 
			 if(rn==0){
				 img_index = 0;
					Image^ image = Image::FromFile(L"img0.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }	
			 else if(rn==1){
					img_index = 1;
					Image^ image = Image::FromFile(L"img1.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }
			 else if(rn==2){
					img_index = 2;
					Image^ image = Image::FromFile(L"img2.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }
			 else if(rn==3){
					img_index = 3;
					Image^ image = Image::FromFile(L"img3.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					
			 }
			 else if(rn==4){
					img_index = 4;
					Image^ image = Image::FromFile(L"img4.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }
			 else if(rn==5){
					img_index = 5;
					Image^ image = Image::FromFile(L"img5.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }
			 else if(rn==6){
					img_index = 6;
					Image^ image = Image::FromFile(L"img6.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }

			 else if(rn==7){
					img_index = 7;
					Image^ image = Image::FromFile(L"img7.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }

			 else if(rn==8){
					img_index = 8;
					Image^ image = Image::FromFile(L"img8.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }

			 else if(rn==9){
					img_index = 9;
					Image^ image = Image::FromFile(L"img9.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Identify this number : ";
			 }

			 else if(rn==10){
					//CAR
					img_index = 4;
					Image^ image = Image::FromFile(L"img10.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"In which block can you see a car?";
			 }

			 else if(rn==11){
					//book
					img_index = 3;
					Image^ image = Image::FromFile(L"img11.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"In which block can you see books?";
			 }

			 else if(rn==12){
					//house
					img_index = 2;
					Image^ image = Image::FromFile(L"img12.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"In which block can you see a house?";
			 }

			 else if(rn==13){
					// 9/1
					img_index = 9;
					Image^ image = Image::FromFile(L"img13.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Evaluate this expression and speak the result:";
			 }

			 else if(rn==14){
					// 4*1
					img_index = 4;
					Image^ image = Image::FromFile(L"img14.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Evaluate this expression and speak the result:";
			 }

			 else if(rn==15){
					//2-2
					img_index = 0;
					Image^ image = Image::FromFile(L"img15.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Evaluate this expression and speak the result:";
			 }

			 else if(rn==16){
					//6+2
					img_index = 8;
					Image^ image = Image::FromFile(L"img16.png");
					this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(image));
					label5->Text = L"Evaluate this expression and speak the result:";
			 }			 

		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void my_form_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
					textBox3->Text = " ";
					this->Hide();
					live_testing^ form3 = gcnew live_testing(this);
				    form3->ShowDialog();		
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

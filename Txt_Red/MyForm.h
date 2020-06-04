#pragma once
#include <filesystem> // ϳ��������� �������� filesystem

namespace fs = std::filesystem;


using std::string;


namespace TxtRed {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;

	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;


	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ColorDialog^ colorDialog3;
	private: System::Windows::Forms::ColorDialog^ colorDialog4;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog3 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog4 = (gcnew System::Windows::Forms::ColorDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Red;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->��������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->����������ToolStripMenuItem, this->����������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->redoToolStripMenuItem,
					this->undoToolStripMenuItem, this->fontToolStripMenuItem, this->colorToolStripMenuItem, this->�����������ToolStripMenuItem, this->�����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�����������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(1272, 38);
			this->menuStrip1->Stretch = false;
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->�������ToolStripMenuItem->ToolTipText = L"³������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->����������ToolStripMenuItem->ToolTipText = L"�������� ��";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->����������ToolStripMenuItem->ToolTipText = L"������� ���";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->�������ToolStripMenuItem->ToolTipText = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoToolStripMenuItem.Image")));
			this->redoToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->redoToolStripMenuItem->ToolTipText = L"���������";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->undoToolStripMenuItem->ToolTipText = L"��������� ����";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->fontToolStripMenuItem->ToolTipText = L"���� ������";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorToolStripMenuItem.Image")));
			this->colorToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->colorToolStripMenuItem->ToolTipText = L"���� ������� ������";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����������ToolStripMenuItem.Image")));
			this->�����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->�����������ToolStripMenuItem->ToolTipText = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����ToolStripMenuItem.Image")));
			this->�����ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->�����ToolStripMenuItem->ToolTipText = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->������ToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->������ToolStripMenuItem->ToolTipText = L"������ �� ������� �����";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����������������ToolStripMenuItem.Image")));
			this->�����������������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->�����������������ToolStripMenuItem->ToolTipText = L"��������� ��������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 38);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1272, 500);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(676, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
			this->textBox1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1272, 538);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Simple Text Editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ filename;
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("������ �������� ���� ?", "Simple Text Editor",
			MessageBoxButtons::YesNoCancel);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
		{
			filename = "Untitled";
			saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
			saveFileDialog1->FileName = filename;
			saveFileDialog1->RestoreDirectory = true;
			saveFileDialog1->ShowDialog();
			IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
			richTextBox1->Clear();
		}
		break;
		case System::Windows::Forms::DialogResult::No: richTextBox1->Clear();
			break;
		case System::Windows::Forms::DialogResult::Cancel: break;
		}
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled.txt";
		openFileDialog1->FileName = filename;
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		openFileDialog1->ShowDialog();
		richTextBox1->Text = IO::File::ReadAllText(openFileDialog1->FileName);
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("������ �������� ���� ?", "Simple Text Editor", MessageBoxButtons
			::YesNoCancel);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
		{
			saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
			saveFileDialog1->FileName = filename;
			saveFileDialog1->RestoreDirectory = true;
			saveFileDialog1->ShowDialog();
			IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
			richTextBox1->Clear(); Application::Exit();
		} break;
		case System::Windows::Forms::DialogResult::No: richTextBox1->Clear(); Application::Exit(); break;
		case System::Windows::Forms::DialogResult::Cancel: break;
		}
	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("��������� ��������\n��������� ��������� � �����\n���������� ���������� �� ����'������� ���������\n", "��� ��������");
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
		saveFileDialog1->FileName = filename;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->ShowDialog();
		IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		if (fs::exists("C://Txt_Red/") == 1) // �������� �������� ����� �� �������� �������
		{
			if (fs::exists("C://Txt_Red/MyText.txt") == 1) // �������� �������� ����� �� �������� �������
			{
				// ���� ������ ��� ������ 䳿 � ������� �������� �����
				System::Windows::Forms::DialogResult res;
				res = MessageBox::Show("������ ������������ ���� MyText.txt � ���� C:" + R"(\\)" + "Txt_Red ?", "Simple Text Editor", MessageBoxButtons
					::YesNoCancel);
				switch (res)
				{
				case System::Windows::Forms::DialogResult::Yes: // ��������� �����
				{
					IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // ���������� �����
					MessageBox::Show("���� ��������� �: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n � ������: MyText.txt", "Simple Text Editor"); // ���� ����������� � ������� �� �����
				} break;
				case System::Windows::Forms::DialogResult::No: // ���� ���������� �� ���� �������������� ����, ������� ����� ���������� �����
				{
					saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
					saveFileDialog1->FileName = filename;
					saveFileDialog1->RestoreDirectory = true;
					saveFileDialog1->ShowDialog();
					IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
				} break;
				case System::Windows::Forms::DialogResult::Cancel: break; // ���������� �� ���� ���������� ���� 䳿 � ����������
				}
			}
			else
			{
				// ���� ���� �������, �� �������� ���� � ���������� ��������
				IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // ���������� �����
				MessageBox::Show("���� ��������� �: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n � ������: MyText.txt", "Simple Text Editor"); // ���� ����������� � ������� �� �����
			}
		}
		else
		{
			// ���� ����� �������, �� �������� �� �� �������� ���� ����
			fs::create_directory("C://Txt_Red/"); // ��������� �������� 
			IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // ���������� �����
			MessageBox::Show("���� ��������� �: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n � ������: MyText.txt", "Simple Text Editor"); // ���� ����������� � ������� �� �����
		}
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Copy();
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Paste();
	}

	private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Undo();
	}
	private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Redo();
	}

	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowDialog();
		richTextBox1->Font = fontDialog1->Font;
	}
	private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		richTextBox1->ForeColor = colorDialog1->Color;
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectAll();
	};

private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int len = richTextBox1->TextLength; // ���������� ������� ������
	int index = 0;
	int lastIndex = richTextBox1->Text->LastIndexOf(textBox1->Text); // ���������� ������� ������� � ������ �� ���� ���������� ��������� ����������� �������
	while (index < lastIndex)
	{
		richTextBox1->Find(textBox1->Text, index, len, RichTextBoxFinds::None); // ����� ������ ��������� ������������ ��� �������� ����
		richTextBox1->SelectionBackColor = Color::Red; // ����� ������� ���� ������ �� ��������
		richTextBox1->SelectionColor = Color::Black; // ����� ������� ������ �� ������
		index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1; // ���������� ������� � ������ �� ���� ���������� ��������� �������� ����������� �����
	}
}
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int len = richTextBox1->TextLength;  // ���������� ������� ������
	int index = 0;
	int lastIndex = richTextBox1->Text->LastIndexOf(textBox1->Text); // ���������� ������� ������� � ������ �� ���� ���������� ��������� ����������� �������
	while (index < lastIndex)
	{
		richTextBox1->Find(textBox1->Text, index, len, RichTextBoxFinds::None); // ����� ������ ��������� ������������ ��� ���������� ��������
		richTextBox1->SelectionBackColor = Color::White; // ����� ������� ���� ������ �� ����
		richTextBox1->SelectionColor = colorDialog1->Color; // ����� ������� ������ �� ����������� ��� �� �������� ������������
		index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1; // ���������� ������� � ������ �� ���� ���������� ��������� �������� ����������� �����
	}
}
};
}
#pragma once
#include <filesystem> // Підключення бібліотеки filesystem

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
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ створитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ копіюватиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиЯкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вирізатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вставитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вийтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ вибратиВсеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ знайтиToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ скасуватиВиділенняToolStripMenuItem;








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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->створитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиЯкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вибратиВсеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копіюватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вирізатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->знайтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скасуватиВиділенняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->створитиToolStripMenuItem,
					this->відкритиToolStripMenuItem, this->зберегтиToolStripMenuItem, this->зберегтиЯкToolStripMenuItem, this->вибратиВсеToolStripMenuItem,
					this->копіюватиToolStripMenuItem, this->вирізатиToolStripMenuItem, this->вставитиToolStripMenuItem, this->redoToolStripMenuItem,
					this->undoToolStripMenuItem, this->fontToolStripMenuItem, this->colorToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->вийтиToolStripMenuItem,
					this->знайтиToolStripMenuItem, this->скасуватиВиділенняToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(1272, 38);
			this->menuStrip1->Stretch = false;
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// створитиToolStripMenuItem
			// 
			this->створитиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"створитиToolStripMenuItem.Image")));
			this->створитиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->створитиToolStripMenuItem->Name = L"створитиToolStripMenuItem";
			this->створитиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->створитиToolStripMenuItem->ToolTipText = L"Створити";
			this->створитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::створитиToolStripMenuItem_Click);
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"відкритиToolStripMenuItem.Image")));
			this->відкритиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->відкритиToolStripMenuItem->ToolTipText = L"Відкрити";
			this->відкритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::відкритиToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"зберегтиToolStripMenuItem.Image")));
			this->зберегтиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->зберегтиToolStripMenuItem->ToolTipText = L"Зберегти";
			this->зберегтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зберегтиToolStripMenuItem_Click);
			// 
			// зберегтиЯкToolStripMenuItem
			// 
			this->зберегтиЯкToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"зберегтиЯкToolStripMenuItem.Image")));
			this->зберегтиЯкToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->зберегтиЯкToolStripMenuItem->Name = L"зберегтиЯкToolStripMenuItem";
			this->зберегтиЯкToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->зберегтиЯкToolStripMenuItem->ToolTipText = L"Зберегти як";
			this->зберегтиЯкToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// вибратиВсеToolStripMenuItem
			// 
			this->вибратиВсеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вибратиВсеToolStripMenuItem.Image")));
			this->вибратиВсеToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->вибратиВсеToolStripMenuItem->Name = L"вибратиВсеToolStripMenuItem";
			this->вибратиВсеToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->вибратиВсеToolStripMenuItem->ToolTipText = L"Вибрати все";
			this->вибратиВсеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вибратиВсеToolStripMenuItem_Click);
			// 
			// копіюватиToolStripMenuItem
			// 
			this->копіюватиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"копіюватиToolStripMenuItem.Image")));
			this->копіюватиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->копіюватиToolStripMenuItem->Name = L"копіюватиToolStripMenuItem";
			this->копіюватиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->копіюватиToolStripMenuItem->ToolTipText = L"Копіювати";
			this->копіюватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::копіюватиToolStripMenuItem_Click);
			// 
			// вирізатиToolStripMenuItem
			// 
			this->вирізатиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вирізатиToolStripMenuItem.Image")));
			this->вирізатиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->вирізатиToolStripMenuItem->Name = L"вирізатиToolStripMenuItem";
			this->вирізатиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->вирізатиToolStripMenuItem->ToolTipText = L"Вирізати";
			this->вирізатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вирізатиToolStripMenuItem_Click);
			// 
			// вставитиToolStripMenuItem
			// 
			this->вставитиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вставитиToolStripMenuItem.Image")));
			this->вставитиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->вставитиToolStripMenuItem->Name = L"вставитиToolStripMenuItem";
			this->вставитиToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->вставитиToolStripMenuItem->ToolTipText = L"Вставити";
			this->вставитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставитиToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoToolStripMenuItem.Image")));
			this->redoToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->redoToolStripMenuItem->ToolTipText = L"Повторити";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->undoToolStripMenuItem->ToolTipText = L"Скасувати зміни";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->fontToolStripMenuItem->ToolTipText = L"Вибір шрифту";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorToolStripMenuItem.Image")));
			this->colorToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->colorToolStripMenuItem->ToolTipText = L"Вибір кольору тексту";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"проПрограмуToolStripMenuItem.Image")));
			this->проПрограмуToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->проПрограмуToolStripMenuItem->ToolTipText = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// вийтиToolStripMenuItem
			// 
			this->вийтиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вийтиToolStripMenuItem.Image")));
			this->вийтиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->вийтиToolStripMenuItem->Name = L"вийтиToolStripMenuItem";
			this->вийтиToolStripMenuItem->Size = System::Drawing::Size(42, 34);
			this->вийтиToolStripMenuItem->ToolTipText = L"Вийти";
			this->вийтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вийтиToolStripMenuItem_Click);
			// 
			// знайтиToolStripMenuItem
			// 
			this->знайтиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"знайтиToolStripMenuItem.Image")));
			this->знайтиToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->знайтиToolStripMenuItem->Name = L"знайтиToolStripMenuItem";
			this->знайтиToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->знайтиToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->знайтиToolStripMenuItem->ToolTipText = L"Знайти та виділити текст";
			this->знайтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::знайтиToolStripMenuItem_Click);
			// 
			// скасуватиВиділенняToolStripMenuItem
			// 
			this->скасуватиВиділенняToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"скасуватиВиділенняToolStripMenuItem.Image")));
			this->скасуватиВиділенняToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->скасуватиВиділенняToolStripMenuItem->Name = L"скасуватиВиділенняToolStripMenuItem";
			this->скасуватиВиділенняToolStripMenuItem->Size = System::Drawing::Size(40, 34);
			this->скасуватиВиділенняToolStripMenuItem->ToolTipText = L"Скасувати виділення";
			this->скасуватиВиділенняToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::скасуватиВиділенняToolStripMenuItem_Click);
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
	private: System::Void створитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Бажаєте зберегти файл ?", "Simple Text Editor",
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
	private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled.txt";
		openFileDialog1->FileName = filename;
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		openFileDialog1->ShowDialog();
		richTextBox1->Text = IO::File::ReadAllText(openFileDialog1->FileName);
	}
	private: System::Void вийтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Бажаєте зберегти файл ?", "Simple Text Editor", MessageBoxButtons
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
	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Текстовий редактор\nСтворений студентом І курсу\nФакультету Електроніки та Комп'ютерних технологій\n", "Про програму");
	}
	private: System::Void зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
		saveFileDialog1->FileName = filename;
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->ShowDialog();
		IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
	}
	private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		filename = "Untitled";
		if (fs::exists("C://Txt_Red/") == 1) // Перевірка наявності папки за вказаною адресою
		{
			if (fs::exists("C://Txt_Red/MyText.txt") == 1) // Перевірка наявності файла за вказаною адресою
			{
				// Вивід діалогу для вибору дії у випадку наявності файлу
				System::Windows::Forms::DialogResult res;
				res = MessageBox::Show("Бажаєте перезаписати файл MyText.txt у теці C:" + R"(\\)" + "Txt_Red ?", "Simple Text Editor", MessageBoxButtons
					::YesNoCancel);
				switch (res)
				{
				case System::Windows::Forms::DialogResult::Yes: // Перезапис файлу
				{
					IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // Збереження файлу
					MessageBox::Show("Файл збережено у: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n З назвою: MyText.txt", "Simple Text Editor"); // Вивід повідомлення з адресою до файлу
				} break;
				case System::Windows::Forms::DialogResult::No: // Якщо користувач не бажає перезаписувати файл, відкрити діалог збереження файлу
				{
					saveFileDialog1->Filter = "txt files(*.txt)|*.txt|bat files(*.bat)|*.bat|All files (*.*)|*.*";
					saveFileDialog1->FileName = filename;
					saveFileDialog1->RestoreDirectory = true;
					saveFileDialog1->ShowDialog();
					IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
				} break;
				case System::Windows::Forms::DialogResult::Cancel: break; // Користувач не бажає виконувати жодні дії з документом
				}
			}
			else
			{
				// Якщо файл відсутній, то зберегти його у стандартній директорії
				IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // Збереження файлу
				MessageBox::Show("Файл збережено у: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n З назвою: MyText.txt", "Simple Text Editor"); // Вивід повідомлення з адресою до файлу
			}
		}
		else
		{
			// Якщо папка відсутня, то створити її та записати туди файл
			fs::create_directory("C://Txt_Red/"); // Створення директорії 
			IO::File::WriteAllText("C://Txt_Red/MyText.txt", richTextBox1->Text); // Збереження файлу
			MessageBox::Show("Файл збережено у: C:" + R"(\\)" + "Txt_Red" + R"(\)" + "\n З назвою: MyText.txt", "Simple Text Editor"); // Вивід повідомлення з адресою до файлу
		}
	}
	private: System::Void копіюватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Copy();
	}
	private: System::Void вирізатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
	}
	private: System::Void вставитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void вибратиВсеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectAll();
	};

private: System::Void знайтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int len = richTextBox1->TextLength; // Повернення довжини тексту
	int index = 0;
	int lastIndex = richTextBox1->Text->LastIndexOf(textBox1->Text); // Повернення позиції індексу з відліком від нуля останнього входження зазначеного символу
	while (index < lastIndex)
	{
		richTextBox1->Find(textBox1->Text, index, len, RichTextBoxFinds::None); // Пошук тексту введеного користувачем для виділення його
		richTextBox1->SelectionBackColor = Color::Red; // Заміна кольору фону тексту на червоний
		richTextBox1->SelectionColor = Color::Black; // Заміна кольору тексту на чорний
		index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1; // Повернення індексу з відліком від нуля наступного входження значення зазначеного рядка
	}
}
private: System::Void скасуватиВиділенняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int len = richTextBox1->TextLength;  // Повернення довжини тексту
	int index = 0;
	int lastIndex = richTextBox1->Text->LastIndexOf(textBox1->Text); // Повернення позиції індексу з відліком від нуля останнього входження зазначеного символу
	while (index < lastIndex)
	{
		richTextBox1->Find(textBox1->Text, index, len, RichTextBoxFinds::None); // Пошук тексту введеного користувачем для скасування виділення
		richTextBox1->SelectionBackColor = Color::White; // Заміна кольору фону тексту на білий
		richTextBox1->SelectionColor = colorDialog1->Color; // Заміна кольору тексту на стандартний або на вибраний користувачем
		index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1; // Повернення індексу з відліком від нуля наступного входження значення зазначеного рядка
	}
}
};
}
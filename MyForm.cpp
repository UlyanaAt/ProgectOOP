#include "MyForm.h"
#include <ctime>
#include <iostream>
#include "CharacterDirector.h"
#include "MagicianBuilder.h"
#include "Director.h"
#include "AssassinBuilder.h"
#include "TankBuilder.h"

#include "Suplimental.h"

using namespace ProgectOOP;
using namespace System::Windows::Forms;


// Application entry point
[STAThreadAttribute]
void main(array<String^>^ args) {
	srand(time(0));
	// Initial Application Parameters:
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProgectOOP::MyForm form;
	Application::Run(% form);
	
}

System::Void ProgectOOP::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\Screensaver.jpg");
	pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\Screensaver2.jpg");
}

Character* ProgectOOP::MyForm::Enemy()
{
	CharacterDirector CharacterDirEnemy;
	Director dirEnemy;
	int RandE = Suplimental::RandZeroToHundr();

	if (RandE <= 33)
	{
		MagicianBuilder MagicianBuildEnemy;
		Character* enemy = CharacterDirEnemy.CreateCharacter(MagicianBuildEnemy, dirEnemy);
		EFC = enemy->FullCharacteristics;
		Total2->Text = "Enemy total combat strenght: " + EFC.ToString();

		if (enemy->isUnderwear)
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\Magician2.jpg");
			UnderwearMsg2->Text = "";
		}
		else
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\sillyMagician2.jpg");
			UnderwearMsg2->Text = "Enemy has no underwear! He gets -40 total combat strength";
		}
		return enemy;
	}
	else if (RandE > 33 && RandE <= 66)
	{
		AssassinBuilder AssassinBuildEnemy;
		Character* enemy = CharacterDirEnemy.CreateCharacter(AssassinBuildEnemy, dirEnemy);
		EFC = enemy->FullCharacteristics;
		Total2->Text = "Enemy total combat strenght: " + EFC.ToString();

		if (enemy->isUnderwear)
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\Assasin2.jpg");
			UnderwearMsg2->Text = "";
		}
		else
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\sillyAssasin2.png");
			UnderwearMsg2->Text = "Enemy has no underwear! He gets -40 total combat strength";
		}
		return enemy;
	}
	else
	{
		TankBuilder TankBuildEnemy;
		Character* enemy = CharacterDirEnemy.CreateCharacter(TankBuildEnemy, dirEnemy);
		EFC = enemy->FullCharacteristics;
		Total2->Text = "Enemy total combat strenght: " + EFC.ToString();

		if (enemy->isUnderwear)
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\Tank2.jpg");
			UnderwearMsg2->Text = "";
		}
		else
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("game\\sillyTank2.jpg");
			UnderwearMsg2->Text = "Enemy has no underwear! He gets -40 total combat strength";
		}
		return enemy;
	}
}

void ProgectOOP::MyForm::Result(int HeroScore, int EnemyScore)
{
	if (HeroScore > EnemyScore)
	{
		MessageBox::Show(this, "You've won this battle! To continue battles press OK", "Result", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	else if (HeroScore == EnemyScore)
	{
		MessageBox::Show(this, "You have a tie! To continue battles press OK", "Result", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	else
	{
		MessageBox::Show(this, "You've lost this battle! To continue battles press OK", "Result", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
}

System::Void ProgectOOP::MyForm::butCM_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	CharacterDirector CharacterDir;
	MagicianBuilder MagicianBuild;
	Director dir;

	Character* character = CharacterDir.CreateCharacter(MagicianBuild, dir);
	FC = character->FullCharacteristics;

	if (character->isUnderwear)
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\Magician1.jpg");
		UnderwearMsg->Text = "";
	}
	else
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\sillyMagician1.jpg");
		UnderwearMsg->Text = "Your character has no underwear! You get -40 total combat strength";
	}
	Total1->Text = "Your total combat strenght: " + FC.ToString();

	Character* enemy = Enemy();

	Result(FC, EFC);
}

System::Void ProgectOOP::MyForm::butCA_Click(System::Object^ sender, System::EventArgs^ e)
{
	CharacterDirector CharacterDir;
	AssassinBuilder AssassinBuild;
	Director dir;
	Character* character = CharacterDir.CreateCharacter(AssassinBuild, dir);
	FC = character->FullCharacteristics;

	if (character->isUnderwear)
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\Assasin1.jpg");
		UnderwearMsg->Text = "";
	}
	else
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\sillyAssasin1.png");
		UnderwearMsg->Text = "Your character has no underwear! You get -40 total combat strength";
	}
	Total1->Text = "Your total combat strenght: " + FC.ToString();

	Character* enemy = Enemy();

	Result(FC, EFC);
}

System::Void ProgectOOP::MyForm::butCT_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	CharacterDirector CharacterDir;
	TankBuilder TankBuild;
	Director dir;
	Character* character = CharacterDir.CreateCharacter(TankBuild, dir);
	FC = character->FullCharacteristics;

	if (character->isUnderwear)
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\Tank1.jpg");
		UnderwearMsg->Text = "";
	}
	else
	{
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("game\\sillyTank1.jpg");
		UnderwearMsg->Text = "Your character has no underwear! You get -40 total combat strength";
	}
	Total1->Text = "Your total combat strenght: " + FC.ToString();

	Character* enemy = Enemy();

	Result(FC, EFC);
}











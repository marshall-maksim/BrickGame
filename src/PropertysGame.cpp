#include "include/PropertysGame.hpp"
#include <iostream>


PropertysGame::PropertysGame()
{
	this -> score_ = 0;
	this -> level_ = 0;
	this -> speed_ = 0;
	this -> pause_ = true;

	this->setFramePropertys();
};

void PropertysGame::setScore(unsigned int score)
{
	this -> score_ += score;
};

void PropertysGame::setLevel(unsigned int level)
{
	this -> level_ += level;
};

void PropertysGame::setSpeed(unsigned int speed)
{
	this->speed_ += speed;
};

unsigned int PropertysGame::getScore()
{
	return this->score_;
};

unsigned int PropertysGame::getLevel()
{
	return this->level_;
};

unsigned int PropertysGame::getSpeed()
{
	return this->speed_;
};

void PropertysGame::setPause()
{
	this->pause_ = true;
};

void PropertysGame::unsetPause()
{
	this->pause_ = false;
};

bool PropertysGame::isPause()
{
	return this->pause_;
};

void PropertysGame::setFramePropertys()
{
	static int loc_takt_cnt = 0;
	for (int i = 0; i < HEIGHT_PROPERTYS; i++)
	{
		switch (i)
		{	// очки
			case 0:
				this->propertys_line[i] = "score";
				break;
			case 1:
				this->propertys_line[i] = "     ";
				this->propertys_line[i].replace(0, std::to_string(this->score_).size(), std::to_string(this->score_));
				break;
				// 2 - пустая строка

				// уровень
			case 3:
				this->propertys_line[i] = "level";
				break;
			case 4:
				this->propertys_line[i] = "     ";
				this->propertys_line[i].replace(0, std::to_string(this->level_).size(), std::to_string(this->level_));
				break;

				// скорость
			case 5:
				this->propertys_line[i] = "speed";
				break;
			case 6:
				this->propertys_line[i] = "     ";
				this->propertys_line[i].replace(0, std::to_string(this->speed_).size(), std::to_string(this->speed_));
				break;
				// 8 .. - пустые строки

				// ПАУЗА в последней строке
			case HEIGHT_PROPERTYS - 1:
				if (pause_ && (loc_takt_cnt%FREQ > FREQ/2))		// отображение "PAUSE" в проблеске
				{
					this->propertys_line[i] = "PAUSE";
				}
				else
				{
					this->propertys_line[i] = "     ";
				}
				break;
			default:
				this->propertys_line[i] = "     ";
		}	// end switch
	}	// end for
	loc_takt_cnt++;
};

void PropertysGame::update() {
	this->setFramePropertys();
}

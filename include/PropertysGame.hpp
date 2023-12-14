#pragma once

#include "include/GlobalDefinition.hpp"
#include <string>

class Frame;

class PropertysGame
{
	friend class Frame;

private:

	unsigned int score_;
	unsigned int level_;
	unsigned int speed_;
	bool pause_;
	std::string propertys_line[HEIGHT_PROPERTYS];	// зона кадра с отображением свойств игры

	void setFramePropertys();

public:

	PropertysGame();
	void setScore(unsigned int score);
	void setLevel(unsigned int level);
	void setSpeed(unsigned int speed);
	unsigned int getScore();
	unsigned int getLevel();
	unsigned int getSpeed();
	void setPause();
	void unsetPause();
	bool isPause();
	void update();
};
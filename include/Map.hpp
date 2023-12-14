#pragma once
#include "include/Frame.hpp"

class Frame;

class Map
{
	
private:
	std::string map_line[HEIGHT_MAP];
public:
	Map();
	friend class Frame;
};
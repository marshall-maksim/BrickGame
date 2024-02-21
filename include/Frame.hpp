#pragma once

#include "GlobalDefinition.hpp"
#include <iostream>
#include <string>
#include "include/PropertysGame.hpp"

class PropertysGame;

class Frame
{
    private:
        const std::string Brick = { (char)219, (char)219 };
        std::string _frameLine[HEIGHT_FRAME];
        std::string _bufGameMap[HEIGHT_MAP];

    public:
        PropertysGame propertys;

        Frame();
        void getMapToFrame();
        void getPropertysToFrame();
        void insertBrickToMap(unsigned int xPos, unsigned int yPos);
   //     void update(void);
        virtual ~Frame(void){};
   //     void getButton();
        void showFrame();
};                                    
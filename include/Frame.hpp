#pragma once

#include "GlobalDefinition.hpp"
#include <iostream>
#include <string>
#include "include/Map.hpp"

class Map;
class PropertysGame;

class Frame
{
    private:
        std::string frame_line[HEIGHT_FRAME];

    public:
        Frame(T_FRAME type_frame);
        void getMap(const Map &);
        void getPropertys(const PropertysGame&);
   //     void update(void);
        virtual ~Frame(void){};
   //     void getButton();
        void showFrame();
};                                    
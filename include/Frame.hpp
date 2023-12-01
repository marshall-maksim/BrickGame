#pragma once

#include "GlobalDefinition.hpp"
#include <iostream>
#include <string>


class Frame
{
    private:
        int width_map;  
        int height_map;
        std::string line[HEIGHT_FRAME];

    public:
        Frame(T_FRAME type_frame);
        virtual ~Frame(void){};
        void insert(char**);    // Вставка в кадр графического объекта (копирование двумерного массива символов меньшего размера)
        void clear();           // Очистка всех вставленных в кадр объектов
        void showFrame();
};
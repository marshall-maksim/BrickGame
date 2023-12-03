#include "include/BrickGame.hpp"
#include "include/Frame.hpp"

Frame::Frame(T_FRAME t_frame)
{
    this->width_map = WIDTH_FRAME - 6;
    this->height_map = HEIGHT_FRAME;
    // верхняя строка
    for (int column = 1; column <= width_map; column++)
    {
        this->line[0] = this->line[0] + "_";
    }

    // строки 2 ... HEIGHT_FRAME - 1
    for (int str = 2; str < height_map; str++)
    {
        for (int column = 1; column <= width_map; column++)
        {
            if (column == 1 || column == width_map)
                this->line[str - 1] += "|";
            else
                this->line[str - 1] += " ";
        }
    }

    // нижняя строка
    for (int column = 1; column <= width_map; column++)
    {
        this->line[height_map - 1] = this->line[height_map - 1] + "_";
    }


};

void Frame::insert(char** ins)
{
    
};

void Frame::clear()
{
    return;
};

void Frame::showFrame()
{
    for (int str = 0; str < HEIGHT_FRAME; str++)
    {
        std::cout << this->line[str] << std::endl;
    }
};
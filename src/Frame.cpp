#include "include/BrickGame.hpp"
#include "include/Frame.hpp"


Frame::Frame(T_FRAME t_frame)
{   
    this->frame_line[0] +=  "      ______________________      ";
    this->frame_line[1] +=  "      |             |      |      ";
    this->frame_line[2] +=  "      |             |      |      ";
    this->frame_line[3] +=  "      |             |      |      ";
    this->frame_line[4] +=  "      |             |      |      ";
    this->frame_line[5] +=  "      |             |      |      ";
    this->frame_line[6] +=  "      |             |      |      ";
    this->frame_line[7] +=  "      |             |      |      ";
    this->frame_line[8] +=  "      |             |      |      ";
    this->frame_line[9] +=  "      |             |      |      ";
    this->frame_line[10] += "      |             |      |      ";
    this->frame_line[11] += "      |             |      |      ";
    this->frame_line[12] += "      |_____________|______|      ";
    this->frame_line[13] += "                                  ";
    this->frame_line[14] += "       o        o        o        ";
    this->frame_line[15] += "  start/pause on/off    MUTE      ";
    this->frame_line[16] += "           __                     ";
    this->frame_line[17] += "          (__)           __       ";
    this->frame_line[18] += "       __  up  __       /  \\      ";
    this->frame_line[19] += "      (__)    (__)      \\__/      ";
    this->frame_line[20] += "      left __ reght    Rotate     ";
    this->frame_line[21] += "          (__)                    ";
    this->frame_line[22] += "          down                    ";
    this->frame_line[23] += "                                  ";
    this->frame_line[24] += "             BRICK GAME           ";
    this->frame_line[25] += "                         9999     ";
    this->frame_line[26] += "                                  ";
};

void Frame::getMap(const Map& map)
{
    for (int i = 0; i < HEIGHT_MAP; i++)
    {
        this->frame_line[i+1].replace(7, WIDTH_MAP, map.map_line[i]);
    }
};

void Frame::getPropertys(const PropertysGame& propertys)
{
    for (int i = 0; i < HEIGHT_PROPERTYS; i++)
    {
        this->frame_line[i + 1].replace(21, WIDTH_PROPERTYS-1, propertys.propertys_line[i]);
    }
};

/*
void Frame::update{

};
*/

void Frame::showFrame()
{
    for (int str = 0; str < HEIGHT_FRAME; str++)
    {
        std::cout << this->frame_line[str] << std::endl;
    }
};
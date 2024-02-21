#include "include/BrickGame.hpp"
#include "include/Frame.hpp"


Frame::Frame()
{   
    this->_frameLine[0] +=  "      _____________________________      ";
    this->_frameLine[1] +=  "      |                    |      |      ";
    this->_frameLine[2] +=  "      |                    |      |      ";
    this->_frameLine[3] +=  "      |                    |      |      ";
    this->_frameLine[4] +=  "      |                    |      |      ";
    this->_frameLine[5] +=  "      |                    |      |      ";
    this->_frameLine[6] +=  "      |                    |      |      ";
    this->_frameLine[7] +=  "      |                    |      |      ";
    this->_frameLine[8] +=  "      |                    |      |      ";
    this->_frameLine[9] +=  "      |                    |      |      ";
    this->_frameLine[10] += "      |                    |      |      ";
    this->_frameLine[11] += "      |                    |      |      ";
    this->_frameLine[12] += "      |                    |      |      ";
    this->_frameLine[13] += "      |                    |      |      ";
    this->_frameLine[14] += "      |                    |      |      ";
    this->_frameLine[15] += "      |                    |      |      ";
    this->_frameLine[16] += "      |                    |      |      ";
    this->_frameLine[17] += "      |                    |      |      ";
    this->_frameLine[18] += "      |                    |      |      ";
    this->_frameLine[19] += "      |                    |      |      ";
    this->_frameLine[20] += "      |                    |      |      ";
    this->_frameLine[21] += "      |____________________|______|      ";
    this->_frameLine[22] += "                                         ";
    this->_frameLine[23] += "           o        o        o           ";
    this->_frameLine[24] += "      start/pause on/off    MUTE         ";
    this->_frameLine[25] += "              __                         ";
    this->_frameLine[26] += "             (__)           __           ";
    this->_frameLine[27] += "          __  up  __       /  \\         ";
    this->_frameLine[28] += "         (__)    (__)      \\__/         ";
    this->_frameLine[29] += "         left __ reght    Rotate         ";
    this->_frameLine[30] += "             (__)                        ";
    this->_frameLine[31] += "             down                        ";
    this->_frameLine[32] += "                                         ";
    this->_frameLine[33] += "                BRICK GAME               ";
    this->_frameLine[34] += "                         9999            ";
    this->_frameLine[35] += "                                         ";


    this->_bufGameMap[0] += "                    ";
    this->_bufGameMap[1] += "                    ";
    this->_bufGameMap[2] += "                    ";
    this->_bufGameMap[3] += "                    ";
    this->_bufGameMap[4] += "                    ";
    this->_bufGameMap[5] += "                    ";
    this->_bufGameMap[6] += "                    ";
    this->_bufGameMap[7] += "                    ";
    this->_bufGameMap[8] += "     BRICK GAME     ";
    this->_bufGameMap[9] += "                    ";
    this->_bufGameMap[10] += "                    ";
    this->_bufGameMap[11] += "                    ";
    this->_bufGameMap[12] += "                    ";
    this->_bufGameMap[13] += "                    ";
    this->_bufGameMap[14] += "                    ";
    this->_bufGameMap[15] += "                    ";
    this->_bufGameMap[16] += "                    ";
    this->_bufGameMap[17] += "                    ";
    this->_bufGameMap[18] += "                    ";
    this->_bufGameMap[19] += "                    ";    
};

void Frame::getMapToFrame()
{
    for (int i = 0; i < HEIGHT_MAP; i++)
    {
        int insertPosition = 6 + 1; // отступ от левого края окна + левая граница игрового поля
        this->_frameLine[i+1].replace(insertPosition,
                                      WIDTH_MAP, 
                                      this->_bufGameMap[i]);
    }
};

void Frame::getPropertysToFrame()
{
    int insertPosition = 6 + WIDTH_MAP + 2; // отступ от левого края окна + ширина карты + левая и правая границы игрового поля
    for (int i = 0; i < HEIGHT_PROPERTYS; i++)
    {
        this->_frameLine[i + 1].replace(insertPosition,
                                        WIDTH_PROPERTYS-1, 
                                        this->propertys.propertys_line[i]);
    }
};

void Frame::insertBrickToMap(unsigned int xPos, unsigned int yPos)
{
    this->_bufGameMap[yPos].replace(2*xPos, Brick.size(), Brick);
};



/*
void Frame::update{

};
*/

void Frame::showFrame()
{
    for (int str = 0; str < HEIGHT_FRAME; str++)
    {
        std::cout << this->_frameLine[str] << std::endl;
    }
};
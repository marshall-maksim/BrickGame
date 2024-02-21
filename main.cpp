#include "include/BrickGame.hpp"



static Frame frame;


int main()
{
    Init();
  //  SettingsGame();
   // Tetris tetris = Tetris(frame);

    do
    {

        KeyProcessing();
        frame.propertys.update();           // обновлени содержимого поля "Свойства"
        frame.getMapToFrame();              // копирование содержимого игровой карты в окно игры
        frame.getPropertysToFrame();        // копирование содержимого поля "Свойства" в окно игры
        frame.showFrame();                  // отрисовка окна в консоли
 
        ReturnCursor();
        ++taktCnt;
    } while (stateKeyOnOff != PRESS);
        //(GetKeyState(VK_ESCAPE) >= 0);
    return 0;
}
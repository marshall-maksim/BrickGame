#include "include/BrickGame.hpp"


int main()
{
    Init();
    SettingsGame();
    Frame frame(GAME);
    Map map;
    PropertysGame propertys;
    do
    {
        propertys.update();
        frame.getMap(map);
        frame.getPropertys(propertys);
        frame.showFrame();
        SetFrame();
        ShowFrame();
    } while (GetKeyState(VK_ESCAPE) >= 0);
    return 0;
}
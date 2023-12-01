#include "include/BrickGame.hpp"

int main()
{
    Init();
    SettingsGame();
    Frame frame(GAME);
    do
    {
        frame.showFrame();
        SetFrame();
        ShowFrame();
    } while (GetKeyState(VK_ESCAPE) >= 0);
    return 0;
}
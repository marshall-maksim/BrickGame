#include "include/BrickGame.hpp"

int main()
{
    Init();
    SettingsGame();
    do
    {
        SetFrame();
        ShowFrame();
    } while (GetKeyState(VK_ESCAPE) >= 0);
    return 0;
}
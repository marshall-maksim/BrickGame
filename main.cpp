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
        frame.propertys.update();           // ��������� ����������� ���� "��������"
        frame.getMapToFrame();              // ����������� ����������� ������� ����� � ���� ����
        frame.getPropertysToFrame();        // ����������� ����������� ���� "��������" � ���� ����
        frame.showFrame();                  // ��������� ���� � �������
 
        ReturnCursor();
        ++taktCnt;
    } while (stateKeyOnOff != PRESS);
        //(GetKeyState(VK_ESCAPE) >= 0);
    return 0;
}
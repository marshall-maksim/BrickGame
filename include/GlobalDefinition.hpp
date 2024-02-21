#pragma once

/* ------------------- ��������� ------------------ */

// ������� �������� ����
static const int WIDTH_MAP = 20;
static const int HEIGHT_MAP = 20;

// ������ ���� ������� �� ������ BrickGame
static const int WIDTH_PROPERTYS = 6;
static const int HEIGHT_PROPERTYS = HEIGHT_MAP;

// ������� ���� �������
static const int WIDTH_FRAME = WIDTH_MAP + WIDTH_PROPERTYS + 15;      // ������ ����� + ������ ���� ������� + ������� �� ����� ���� � ����������� �����
static const int HEIGHT_FRAME = HEIGHT_MAP + 16;                      // ������ ����� + ������������ ������� �� ����� ������


// ������������ ������� � ��
static const int T_SEC = 1000;

// �������� ������� (��)
static const int FREQ = 25;

/*----------- ���������� ���������� -----------------*/

// �������� �������
extern unsigned int taktCnt;

// ��������� ������
extern bool stateKeyRight;
extern bool stateKeyLeft;
extern bool stateKeyUp;
extern bool stateKeyDown;
extern bool stateKeyRotate;
extern bool stateKeyPause;
extern bool stateKeyOnOff;


typedef enum {
    MENU,
    GAME,
    END_GAME
}T_FRAME;

// �����������
typedef enum {
    LEFT,
    UP,
    RIGHT,
    DOWN
}T_DIRECTION;

typedef enum {
    RELEASE = 0,
    PRESS   = 1
}T_KEY_STATE;



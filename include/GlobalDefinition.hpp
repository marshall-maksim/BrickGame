#pragma once

/* ------------------- КОНСТАНТЫ ------------------ */

// Размеры игрового поля
static const int WIDTH_MAP = 20;
static const int HEIGHT_MAP = 20;

// Рамеры окна свойств на экране BrickGame
static const int WIDTH_PROPERTYS = 6;
static const int HEIGHT_PROPERTYS = HEIGHT_MAP;

// Размеры окна консоли
static const int WIDTH_FRAME = WIDTH_MAP + WIDTH_PROPERTYS + 15;      // ширина карты + ширина поля свойств + отступы от краев окна и разделители полей
static const int HEIGHT_FRAME = HEIGHT_MAP + 16;                      // высота карты + вертикальные отступы от краев экрана


// длительность секунды в мс
static const int T_SEC = 1000;

// тактовая частота (Гц)
static const int FREQ = 25;

/*----------- ГЛОБАЛЬНЫЕ ПЕРЕМЕННЫЕ -----------------*/

// Тактовый счетчик
extern unsigned int taktCnt;

// состояния кнопок
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

// направления
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



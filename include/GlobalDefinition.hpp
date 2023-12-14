#pragma once

// Размеры окна консоли
static const int WIDTH_FRAME = 32;      // ширина
static const int HEIGHT_FRAME = 28;     // высота

// Размеры игрового поля
static const int WIDTH_MAP = 13;
static const int HEIGHT_MAP = 11;

// Рамеры окна свойств на экране BrickGame
static const int WIDTH_PROPERTYS = 6;
static const int HEIGHT_PROPERTYS = HEIGHT_MAP;

// длительность секунды в мс
static const int T_SEC = 1000;

// тактовая частота (Гц)
static const int FREQ = 25;


   


typedef
enum {
    MENU,
    GAME,
    END_GAME
}T_FRAME;


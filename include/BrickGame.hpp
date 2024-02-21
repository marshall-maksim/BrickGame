#pragma once

// includes files
#include <iostream>
#include <windows.h>

// classes
#include "include/Frame.hpp"
#include "include/PropertysGame.hpp"
#include "include/games/Tetris.hpp"




////////////////////////
// function prototypes //
////////////////////////

// Инициалиация внутренних данных при запуске игры
void Init(void);
// Обработка клавиш
void KeyProcessing(void);

// Отображение кадра на экране
void ReturnCursor(void);
// Перемещение курсора
void MovCursor(int position_x, int position_y);
// Переключение курсора в невидимый режим
void SetInvisibleCursor(void);

// Установка рамеров консольного окна
void SetSizeConsole(int console_width, int console_height);
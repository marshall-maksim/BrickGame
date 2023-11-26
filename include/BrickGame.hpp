#pragma once

// includes files
#include <iostream>
#include <windows.h>

// classes
#include "include/Frame.hpp"

// constants
static const int WIDTH_MAP = 12;        // the width of the playing field + the boundaries of the field
static const int HEIGHT_MAP = 22;       // the height of the playing field + the boundaries of the field

////////////////////////
// function rototypes //
////////////////////////

// Инициалиация внутренних данных при запуске игры
void Init(void);
// Настройка режима игры
void SettingsGame(void);
// Формирование кадра
void SetFrame(void);
// Отображение кадра на экране
void ShowFrame(void);
// Перемещение курсора
void MovCursor(int position_x, int position_y);
// Переключение курсора в невидимый режим
void SetInvisibleCursor();
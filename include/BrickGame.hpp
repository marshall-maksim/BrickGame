#pragma once

// includes files
#include <iostream>
#include <windows.h>

// classes
#include "include/Frame.hpp"



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
void SetInvisibleCursor(void);

// Установка рамеров консольного окна
void SetSizeConsole(int console_width, int console_height);
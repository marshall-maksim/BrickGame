#pragma once

// includes files
#include <iostream>

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
void SetFrame(void);
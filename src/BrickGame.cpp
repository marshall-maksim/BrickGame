#include "include/BrickGame.hpp"

// Инициалиация внутренних данных при запуске игры
void Init()
{
    system("mode con cols=38 lines=26");  // установка размеров консольного окна
	SetInvisibleCursor();
    return;
}

// Настройка режима игры
void SettingsGame()
{
    return;
}

// Формирование кадра
void SetFrame()
{
    return;
}

// Отображение кадра на экране
void ShowFrame()
{
    MovCursor(0,0);
    return;
}

// Перемещение курсора
void MovCursor(int position_x, int position_y)
{
	COORD coord;
	coord.X = position_x;
	coord.Y = position_y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	Sleep(40);
}

// Переключение курсора в невидимый режим
void SetInvisibleCursor()
{
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = 0;
	lpCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}
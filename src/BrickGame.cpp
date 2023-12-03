#include "include/BrickGame.hpp"
#include "include/GlobalDefinition.hpp"

// Инициалиация внутренних данных при запуске игры
void Init()
{
	SetSizeConsole(WIDTH_FRAME+1, HEIGHT_FRAME);  // установка размеров консольного окна
	SetInvisibleCursor();						  // скрытие курсора
}

// Настройка режима игры
void SettingsGame()
{
   /*----------*/
}

// Формирование кадра
void SetFrame()
{
    /*----------------*/
}

// Отображение кадра на экране
void ShowFrame()
{
    MovCursor(0,0);		// Возврат курсора в левый верхний угол каждые 40мс

}

// Перемещение курсора в левый верхний угол
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
	lpCursor.bVisible = false;
	lpCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}

void SetSizeConsole(int console_width, int console_height)
{
	// "mode con cols=WIDTH lines=HEIGHT"
	std::string mode_con = "mode con cols=";
	mode_con += std::to_string(console_width);
	mode_con += " lines=";
	mode_con += std::to_string(console_height);

	system(mode_con.c_str());  // установка размеров консольного окна
}
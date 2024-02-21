#include "include/BrickGame.hpp"
#include "include/GlobalDefinition.hpp"

// Инициалиация внутренних данных при запуске игры
void Init()
{
	SetSizeConsole(WIDTH_FRAME+2, HEIGHT_FRAME+2);  // установка размеров консольного окна
	SetInvisibleCursor();							// скрытие курсора
}



// Обработка клавиш
void KeyProcessing()
{
	if (GetKeyState(VK_RIGHT) < 0)  { stateKeyRight = PRESS; }
	else						{ stateKeyRight = RELEASE; }

	if (GetKeyState(VK_LEFT) < 0)   { stateKeyLeft = PRESS; }
	else						{ stateKeyLeft = RELEASE; }

	if (GetKeyState(VK_DOWN) < 0)   { stateKeyDown = PRESS; }
	else						{ stateKeyDown = RELEASE; }

	if (GetKeyState(VK_UP) < 0)		{ stateKeyUp = PRESS; }
	else						{ stateKeyUp = RELEASE; }

	if (GetKeyState(VK_SHIFT) < 0)  { stateKeyRotate = PRESS; }
	else						{ stateKeyRotate = RELEASE; }

	if (GetKeyState(VK_SPACE) < 0)  { stateKeyPause = PRESS; }
	else						{ stateKeyPause = RELEASE; }

	if (GetKeyState(VK_ESCAPE) < 0)  
	{ stateKeyOnOff = PRESS; }
	else						
	{ stateKeyOnOff = RELEASE; }
}


// Отображение кадра на экране
void ReturnCursor()
{
    MovCursor(0,0);		// Возврат курсора в левый верхний угол каждые 40мс
	return;
}

// Перемещение курсора в левый верхний угол
void MovCursor(int position_x, int position_y)
{
	COORD coord;
	coord.X = position_x;
	coord.Y = position_y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	Sleep(T_SEC/FREQ);
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
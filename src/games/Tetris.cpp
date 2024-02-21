#include "include/games/Tetris.hpp"

Tetris::Tetris(Frame& frame)
{
	for (int i = 0; i < 4; i++)
	{
		this->unit[i] = { 0, 0 };
	}
	
	// очищаем игровое поле
	for (int i = 0; i < HEIGHT_MAP; i++)
	{
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			
		}
		//frame.map.setMapLine(i, "             ");
	}
	// выводим в центре игрового поля название игры
	//frame.map.setMapLine(4, "   TETRIS    ");
}
/*
void mov(T_DIRECTION direction)
{

}
*/
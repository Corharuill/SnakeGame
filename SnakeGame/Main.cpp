#include <iostream>
#include <Windows.h>
#include <conio.h>

const int widht = 20;
const int height = 20;
int x, y, fruitX, fruitY;
int i, j;

void Setup()
{
	fruitX = rand() % widht;
	fruitY = rand() % height;
}
void Draw()
{

	for (int y = 0; y <= height; y++)
	{
		for (int x = 0; x <= widht; x++)
		{

			if (y == 0)
				std::cout << "1";
			if (i == y && j == x)
			{
				std::cout << "@";
			}
			else if (y == height)
			{
				std::cout << "2";
			}
			else if (x == 0 && y != widht)
			{
				std::cout << "3";
			}
			else if (x == height && y != widht)
			{
				std::cout << "4";
			}
			else if (y != 0 && y != widht)
			{
				std::cout << " ";
			}
			else if (x == fruitX && y == fruitY)
			{
				std::cout << "F";
			}
		}
		std::cout << std::endl;
	}
}

void gotoxy(short int x, short int y)
{
	HANDLE hStdOut = ::GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y };
	::SetConsoleCursorPosition(hStdOut, position);
}




int main() 
{
	
	srand(time(NULL));
	Draw();
	gotoxy(0, 22);
	std::cout << "Hello" <<std::endl;
	system("pause");
	
}


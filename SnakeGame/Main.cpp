#include <iostream>

const int widht = 20;
const int height = 20;

void Draw() 
{
	

	std::cout << std::endl;
	for (int y = 0; y < height; y++) 
	{
		
		std::cout << "+|"; //���� �� �������� �������� �� ������ ������ (�����) � ����� � ����� ��������� ������ �� ���������� � � � �� ��������� �������� � ������������ ������ ������ ���� ������������� ������� if
		
		
		
		for (int x = 0; x < widht; x++)
		{
			
			
			if (x == 0, x < height - 1) //��������� �������� ���������� �� ������ �� ������
			{

				std::cout << " ";
			}
			else 
				std::cout << "|+"; //���� �� �������� �������� �� ������ ������ (������)

			
			
		}
		std::cout << std::endl;
	}
	
	
	
	







	/*for(int i=0; i < height; i++)
	{
		for (int j = 0;j< widht; j++)
		{
			if (j == 0 || j == widht -1)
			{
				std::cout << " " << std::endl;
			}
			else 
				std::cout << " " << std::endl;
		}
		
	}*/
	

}



int main() 
{
	Draw();
}
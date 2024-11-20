#include <iostream>

const int widht = 20;
const int height = 20;

void Draw() 
{
	

	std::cout << std::endl;
	for (int y = 0; y < height; y++) 
	{
		
		std::cout << "+|"; //если не заполнет пустотой то рисует стенку (левую) и дльше в цикле отрисовки стенки по кординатам х и у он заполняет пустотой и дорисовывает правую стенку если удволетворены условия if
		
		
		
		for (int x = 0; x < widht; x++)
		{
			
			
			if (x == 0, x < height - 1) //заполняет пустотой расстояние от стенки до стенки
			{

				std::cout << " ";
			}
			else 
				std::cout << "|+"; //если не заполнет пустотой то рисует стенку (правую)

			
			
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
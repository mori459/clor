#include "Menu.hpp"
#include "ug.hpp"
#include "kaz.hpp"
#include "linn.hpp"

void Menu()
{
	char choice;

	while (true)
	{
		do
		{
			system("cls");
			std::cout << "����\n\n";
			std::cout << "1) N�17 �������\n";
			std::cout << "2) N�19 ���������� �������\n";
			std::cout << "3) N�22 �������\n";
			std::cout << "0) �����\n";
			std::cin >> choice;
		} while (choice < '0' || choice > '3');
		if (choice == '0')
		{
			break;
		}
		else if (choice == '1')
		{
			system("cls");
			kaz();
		}
		else if (choice == '2')
		{
			system("cls");
			linn();
		}
		else if (choice == '3')
		{
			system("cls");
			ug();
		}
		else
		{
			std::cerr << "Error: incorrect input choice\n";
		}
	}
}
#include "linn.hpp"

void linn()
{
	setlocale(LC_ALL, "ru");

	int arr1[3][3];
	int choice1;

	std::cout << "¬ведите число: ";
	std::cin >> choice1;
	arr1[1][0] = choice1;
	arr1[1][1] = arr1[1][0] * 2;
	arr1[1][2] = arr1[1][1] * 2;
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr1[1][i] << "\n";
	}

	int arr2[3][3];
	int choice2;

	std::cout << "¬ведите число: ";
	std::cin >> choice2;
	arr2[1][0] = choice2;
	arr2[1][1] = arr2[1][0] + 1;
	arr2[1][2] = arr2[1][1] + 1;
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr2[1][i] << "\n";
	}
	system("pause");
}
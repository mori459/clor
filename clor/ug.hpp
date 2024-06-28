#ifndef UG_HPP
#define UG_HPP
#include <iostream>
#include <algorithm>
#include <string>

void ug();

int LeapYearCheck(int year);
int DateGapCalc(int frst_year, int frst_month, int frst_day, int scnd_year, int scnd_month, int scnd_day);

double ArifAverage(int arr[], double size);

void ArrayNumTypeCount(int arr[], int size);

void CreateSqrMtrx(int**& arr, int side);
void CreateSqrMtrx(double**& arr, int side);
void CreateSqrMtrx(char**& arr, int side);
void DeleteSqrMtrx(int**& arr, int side);
void DeleteSqrMtrx(double**& arr, int side);
void DeleteSqrMtrx(char**& arr, int side);
void FillSqrMtrx(int**& arr, int side, std::string overload_type = "int");
void PrintSqrMtrx(int**& arr, int side);
int MaxSqrMtrx(int**& arr, int side);
double MaxSqrMtrx(double**& arr, int side);
char MaxSqrMtrx(char**& arr, int side);
int MinSqrMtrx(int**& arr, int side);
double MinSqrMtrx(double**& arr, int side);
char MinSqrMtrx(char**& arr, int side);
void SortSqrMtrx(int**& arr, int side);

int CommonDevis(int num1, int num2, int div = 0);

int BullsAndCows(std::string guess_num = "", int tries = 0);

#endif // !UG_HPP


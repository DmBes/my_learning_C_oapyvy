#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <process.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


//void my_print(int &massiv1, int &massive2);
void inputArray(int, double*, int*);// Прототип функции по заполнению массива

void main()
{
	setlocale(LC_CTYPE, "rus");
	system("cls");
	
	int user_N, user_M;  //
	int nomer = 1; // Номер массива "1 и 2"
	int *nomer_massive = &nomer; //Разыменование номера массива
	double *massivN, *massivM; //Создание массивов N и М 
	printf("Введите размер массива N: ");
	scanf_s("%d", &user_N); //Ввод размера массива N
	printf("\nВведите размер массива M: ");
	scanf_s("%d", &user_M); //Ввод размера массива M
	massivN = (double *)(calloc((user_N+1) , sizeof(double)));// выделяем память под массив N
	massivM = (double *)(calloc((user_M+1) , sizeof(double)));// Выделяем память под массив M
	inputArray(user_N, massivN, nomer_massive); //Вызов функции по вводу массива
	system("pause");


}


void inputArray(int Cikl, double *array, int *nomer_massiva) // Создание функции
{
	double summ = 0; // Создание внутри функции переменной для расчета значений массива
	for (int begin = 0; begin < Cikl; begin++)
	{
		printf_s("\nВведите значения массива [%d],[%d]= ", &nomer_massiva, begin);
		scanf_s("%lf", &array+begin);//Может нужно убрать &
		printf_s("%lf\n", array + begin);
		//summ += &array + begin;   // Добавление суммы значений массива в последнюю ячейку массива

	}
	//nomer_massiva++;  // Увеличение массива на единицу.
}
#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <process.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


//void my_print(int &massiv1, int &massive2);
void inputArray(int, double*, int*);// �������� ������� �� ���������� �������

void main()
{
	setlocale(LC_CTYPE, "rus");
	system("cls");
	
	int user_N, user_M;  //
	int nomer = 1; // ����� ������� "1 � 2"
	int *nomer_massive = &nomer; //������������� ������ �������
	double *massivN, *massivM; //�������� �������� N � � 
	printf("������� ������ ������� N: ");
	scanf_s("%d", &user_N); //���� ������� ������� N
	printf("\n������� ������ ������� M: ");
	scanf_s("%d", &user_M); //���� ������� ������� M
	massivN = (double *)(calloc((user_N+1) , sizeof(double)));// �������� ������ ��� ������ N
	massivM = (double *)(calloc((user_M+1) , sizeof(double)));// �������� ������ ��� ������ M
	inputArray(user_N, massivN, nomer_massive); //����� ������� �� ����� �������
	system("pause");


}


void inputArray(int Cikl, double *array, int *nomer_massiva) // �������� �������
{
	double summ = 0; // �������� ������ ������� ���������� ��� ������� �������� �������
	for (int begin = 0; begin < Cikl; begin++)
	{
		printf_s("\n������� �������� ������� [%d],[%d]= ", &nomer_massiva, begin);
		scanf_s("%lf", &array+begin);//����� ����� ������ &
		printf_s("%lf\n", array + begin);
		//summ += &array + begin;   // ���������� ����� �������� ������� � ��������� ������ �������

	}
	//nomer_massiva++;  // ���������� ������� �� �������.
}
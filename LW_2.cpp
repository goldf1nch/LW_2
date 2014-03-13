// LW_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	printf("Лабораторная работа №2");
	printf_s("\n");
	int n, buf;
	int k=0;
	printf_s("\nВведите число элементов в массиве: "); scanf_s ("%d", &n);
	int *mas;
	mas=new int [n];
	printf_s("\nМассив до сортировки: \n");
	for (int i=0; i<n; i++) mas[i]=rand()%201-100; /// Генерируем случайные числа для массива 
	for (int i=0; i<n; i++) printf("\n[%d]: %d", i+1, mas[i]); /// Печать массива
	printf_s("\n\nМассив после сортировки: \n");
	/*!
	Фрагмент кода ниже - реализация алгоритма сортировки методом пузырька.
	Писать более корректный способ поленился, поэтому для повторных циклов используется метка.
	*/
	mt:for (int i=0; i<(n-1); i++)
	{
		if (mas[i]>mas[i+1]) 
		{
			buf=mas[i];
			mas[i]=mas[i+1];
			mas[i+1]=buf;
			k++;
		}
	}
	if (k>0)
	{
		k=0;
		goto mt;
	}
	else for (int i=0; i<n; i++) printf("\n[%d]: %d", i+1, mas[i]);
	delete [] mas;
	_getch();
	return 0;
}



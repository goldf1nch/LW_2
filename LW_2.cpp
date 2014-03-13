/// LW_2.cpp : Defines the entry point for the console application.
///
///UPD: adding commentaries in the style of Doxygen
/*!UPD: Cyrillic symbols do not support? =\*/
/// \file LW_2.cpp
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	printf("Laboratory work 2");
	printf_s("\n");
	int n, buf;
	int k=0;
	printf_s("\Enter numbers of symbols: "); scanf_s ("%d", &n);
	int *mas;
	mas=new int [n];
	printf_s("\nUnsorting massive: \n");
	for (int i=0; i<n; i++) mas[i]=rand()%201-100; /// ...
	for (int i=0; i<n; i++) printf("\n[%d]: %d", i+1, mas[i]); /// ...
	printf_s("\n\nSorting massive: \n");
	/*!
	Commentaries in the style Doxygen...
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



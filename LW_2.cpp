/// LW_2.cpp : Defines the entry point for the console application.
///
///UPD: adding commentaries in the style of Doxygen
/*!UPD: Cyrillic symbols do not support? =\*/

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	printf("������������ ������ �2");
	printf_s("\n");
	int n, buf;
	int k=0;
	printf_s("\n������� ����� ��������� � �������: "); scanf_s ("%d", &n);
	int *mas;
	mas=new int [n];
	printf_s("\n������ �� ����������: \n");
	for (int i=0; i<n; i++) mas[i]=rand()%201-100; /// ���������� ��������� ����� ��� ������� 
	for (int i=0; i<n; i++) printf("\n[%d]: %d", i+1, mas[i]); /// ������ �������
	printf_s("\n\n������ ����� ����������: \n");
	/*!
	�������� ���� ���� - ���������� ��������� ���������� ������� ��������.
	������ ����� ���������� ������ ���������, ������� ��� ��������� ������ ������������ �����.
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



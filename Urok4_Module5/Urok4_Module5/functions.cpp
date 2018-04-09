#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void task7(int *arr, int *row, int *col)
{
	/* ��������� ������ �� ��������� �������� */
	double *vectCol = GetMemoryVectD(row);
	double *vectAverCol= GetMemoryVectD(col);

	/* ��������� ������ �� ��������� ����� */
	int *vectRow = GetMemoryVect(row);
	int *vecRowMin = GetMemoryVect(row);
	int *vecRowMax = GetMemoryVect(row);

	int stub = 1; // stub - ��������

	/* ���� ������� �������������� ������� ������� */
	for (int j = 0; j < *col; j++)
	{
		int k = 0;
		for (int i = 0; i < *row; i++)
		{
			*(vectCol + i) = *(arr + j + i * *row);
			k++;
		}
		//printArray(vectCol, &stub, row);
		*(vectAverCol + j) = averArray(vectCol, row); // ���������� ������� �������������� ������� �������
	}
	printf("������ ������� �������������� ������� �������:\n");
	printArray(vectAverCol, &stub, col);

	/* ���� ����������� ������� � ������ */
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
			*(vectRow + j) = *(arr + i * *row + j);

		*(vecRowMin + i) = minArray(vectRow, col); // ���������� ���������� �������
	}
	printf("������ ���������� ��������� � ������:\n");
	printArray(vecRowMin, &stub, row);

	/* ���� ������������ ������� � ������ */
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
			*(vectRow + j) = *(arr + i * *row + j);

		*(vecRowMax + i) = maxArray(vectRow, col); // ���������� ���������� �������
	}
	printf("������ ���������� ��������� � ������:\n");
	printArray(vecRowMax, &stub, row);
}

int task9(int *arr, int *row, int *col)
{
	int count = 0;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) == 7)
				count++;
		}
	}
	return count;
}
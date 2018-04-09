#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void task7(int *arr, int *row, int *col)
{
	/* Формируем массив из элементов столбцов */
	double *vectCol = GetMemoryVectD(row);
	double *vectAverCol= GetMemoryVectD(col);

	/* Формируем массив из элементов строк */
	int *vectRow = GetMemoryVect(row);
	int *vecRowMin = GetMemoryVect(row);
	int *vecRowMax = GetMemoryVect(row);

	int stub = 1; // stub - заглушка

	/* ищем среднее арифметическое каждого столбца */
	for (int j = 0; j < *col; j++)
	{
		int k = 0;
		for (int i = 0; i < *row; i++)
		{
			*(vectCol + i) = *(arr + j + i * *row);
			k++;
		}
		//printArray(vectCol, &stub, row);
		*(vectAverCol + j) = averArray(vectCol, row); // записываем среднее арифметическое каждого столбца
	}
	printf("Массив средних арифметических каждого столбца:\n");
	printArray(vectAverCol, &stub, col);

	/* ищем минимальный элемент в строке */
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
			*(vectRow + j) = *(arr + i * *row + j);

		*(vecRowMin + i) = minArray(vectRow, col); // записываем наименьший элемент
	}
	printf("Массив наименьших элементов в строке:\n");
	printArray(vecRowMin, &stub, row);

	/* ищем максимальный элемент в строке */
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
			*(vectRow + j) = *(arr + i * *row + j);

		*(vecRowMax + i) = maxArray(vectRow, col); // записываем наибольший элемент
	}
	printf("Массив наибольших элементов в строке:\n");
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
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void task2(double *arr1, double *arr2, int *len1, int *len2)
{
	int stub = 1;
	/* Формируем массив из 16 элементов */
	
	int len = *len1 + *len2;
	double *vectCol = GetMemoryVectD(&len);
			
	for (int i = 0; i < len; i++)
	{
		if(i<*len1)
			*(vectCol + i) = *(arr1 + i);
		else if (i>=*len1)
			*(vectCol + i) = *(arr2 + i - 7);		
	}
	printArray(vectCol, &stub, &len);
	bubbleSortDesc(vectCol, &len);
	printArray(vectCol, &stub, &len);

	/*for (int i = 0; i < *row; i++)
		*(arr + i * *row + 4) = *(vectCol + i);*/

	/*printf("Массив, отсортированный по убыванию элементов последнего столбца:\n");
	printArray(arr, row, col);*/
}


void task5(int *arr, int *row, int *col)
{
	int stub = 1;
	/* Формируем массив из элементов строк */
	int *vectCol = GetMemoryVect(row);
	int *vectSortCol = GetMemoryVect(row);

	for (int i = 0; i < *row; i++)
		*(vectCol + i) = *(arr + i * *row + 4);

		//printArray(vectCol, &stub, row);
	bubbleSortDesc(vectCol, row);
		//printArray(vectCol, &stub, row);

	for (int i = 0; i < *row; i++)
		*(arr + i * *row + 4) = *(vectCol + i);

		printf("Массив, отсортированный по убыванию элементов последнего столбца:\n");
		printArray(arr, row, col);
}


/*6. В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в
первой и третей строке.*/
void task6(int *arr, int *row, int *col)
{
	int stub = 1;
	/* Формируем массив из элементов строк */
	int *vectRow = GetMemoryVect(row);
	int *vectRowMin = GetMemoryVect(row);
	int *vectRowMin1 = GetMemoryVect(row);
	int *vectRowMin2 = GetMemoryVect(row);

	/* ищем максимальный элемент в строке */
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
			*(vectRow + j) = *(arr + i * *row + j);

		*(vectRowMin + i) = minArray(vectRow, col); // записываем наименьший элемент
	}

	printf("Массив минимальных элементов строк:\n");

	for (int i = 0; i < *col; i++)
	{
		*(vectRowMin1 + i) = *(arr + 0 * *row + i);
	}

	for (int i = 0; i < *col; i++)
	{
		*(vectRowMin2 + i) = *(arr + 2 * *row + i);
	}

	printArray(vectRowMin, &stub, row);

	int min1, minIndex1=NULL, min3, minIndex3= NULL, max, maxIndex, temp;
	extremunArray(vectRowMin1, col, &min1, &minIndex1, &max, &maxIndex);
	extremunArray(vectRowMin2, col, &min3, &minIndex3, &max, &maxIndex);

	printf("min1 = %d, minInd1 = %d, min3 = %d, minInd3 = %d\n", min1, minIndex1, min3, minIndex3);

	temp = *(arr + 0 * 3 + minIndex1);
	*(arr + 0 * 3 + minIndex1) = *(arr + 2 * 3 + minIndex3);
	*(arr + 2 * 3 + minIndex3) = temp;
	printf("Массив после перестановки:\n");
	printArray(arr, row, col);
}

/*7. Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца,
определить максимум и минимум каждой строки. */
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
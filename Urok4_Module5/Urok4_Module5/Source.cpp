#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &n);

		switch (n)
		{
			case 1:
			{
				/*1. Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. 
				Составить программу перевода этого числа в восьмеричную систему счисления.*/


		
				//free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 2:
			{
				/*2. Ввести два массива действительных чисел, состоящих из 7 и 9 элементов. 
				Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/

			

				/*free(arr);
				free(vecPos);
				free(vecNeg);*/

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				/* 3. Ввести массив, в котором только два одинаковых элемента. 
				Определить их местоположение.*/

				int A[2] = { 2,2 };

				int *p1 = A;
				int *p2 = A+1;
	
				printf("Адрес элемента A[0] = %d: %p\n",*(A), p1);
				printf("Адрес элемента A[1] = %d: %p\n",*(A+1), p2);

				system("pause");
				system("cls");
			}
			break;

			case 4:
			{
				/*4. Задан целочисленный массив. Определить, образуют ли значения его элементов
				геометрическую прогрессию. Если «да» – вывести знаменатель прогрессии, 
				если «нет» – ответ «не образуют». */



				//free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 5:
			{
				/*5. Отсортировать по убыванию элементов последнего столбца целочисленный 
				двухмерный массив 5×4*/

	

				//free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 6:
			{
				/*6. В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в 
				первой и третей строке.*/

		

				//free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 7:
			{
				/*7. Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца, 
				определить максимум и минимум каждой строки. */

				int row = 0, col = 0, minElem = 0, maxElem = 50, stub = 1, minElement, minIndRow, minIndCol;
				printf("Формируем двумерный массив размерностью 5 х 6 элементов.\n");
				int *arr = GetMemory(&row, &col);
				fillArray(arr, &row, &col, &minElem, &maxElem);
				printArray(arr, &row, &col);

				task7(arr, &row, &col);

				free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 8:
			{
				/*8. Дан двухмерный массив n×m элементов, найти количество четных и 
				нечетных чисел в массиве.*/

				int row = 0, col = 0, minElem = 0, maxElem = 50, stub = 1, minElement, minIndRow, minIndCol;
				printf("Формируем двумерный массив размерностью n х m элементов.\n");
				int *arr = GetMemory(&row, &col);
				fillArray(arr, &row, &col, &minElem, &maxElem);
				printArray(arr, &row, &col);

				printf("Количество четных чисел в массиве: %d\n", evenElemArray(arr, &row, &col));
				printf("Количество нечетных чисел в массиве: %d\n", oddElemArray(arr, &row, &col));

				free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 9:
			{
				/*9. Дан двухмерный массив n × m элементов. Определить, сколько раз встречается
				число 7 среди элементов массива.*/

				int row = 0, col = 0, minElem = 0, maxElem = 50, stub = 1, minElement, minIndRow, minIndCol;
				printf("Формируем двумерный массив размерностью n х m элементов.\n");
				int *arr = GetMemory(&row, &col);
				fillArray(arr, &row, &col, &minElem, &maxElem);
				printArray(arr, &row, &col);

				printf("Число 7 встречается среди элементов массива %d раз(а).\n", task9(arr, &row, &col));

				free(arr);

				system("pause");
				system("cls");
			}
			break;

			case 10:
			{
				/*10. Дан массив из n x m элементов. Найти индексы первого наименьшего элемента массива  */

				int row = 0, col = 0, minElem = 0, maxElem = 50, stub = 1, minElement, minIndRow, minIndCol;
				printf("Формируем двумерный массив размерностью n х m элементов.\n");
				int *arr = GetMemory(&row, &col);
				fillArray(arr, &row, &col, &minElem, &maxElem);
				printArray(arr, &row, &col);

				minArray(arr, &row, &col, &minElement, &minIndRow, &minIndCol);

				printf("Первый наименьший элемент массива: min[ %d, %d] = %d\n", minIndRow+1, minIndCol+1, minElement);

				free(arr);

				system("pause");
				system("cls");
			}
			break;
		}

	} while (n != 0);

}

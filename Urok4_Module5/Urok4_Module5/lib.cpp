#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

void fillArray(int *arr, int *row, int *col, int *min, int *max)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(arr + i * *row + j) = (*max - *min)*rand() / RAND_MAX + *min;
		}
	}
}

void fillArray(float *arr, int *row, int *col, float *min, float *max)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(arr + i * *row + j) = (float)((*max - *min)*rand() / RAND_MAX + *min);
		}
	}
}

void fillArray(double *arr, int *row, int *col, double *min, double *max)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			*(arr + i * *row + j) = (double)((*max - *min)*rand() / RAND_MAX + *min);
		}
	}
}

void printArray(int *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3d; ", *(arr + i * *row + j));
		}
		printf("\n");
	}
	printf("\n");
}

void printArray(float *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3.2lf; ", *(arr + i * *row + j));
		}
		printf("\n");
	}
	printf("\n");
}

void printArray(double *arr, int *row, int *col)
{
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			printf("%3.2lf; ", *(arr + i * *row + j));
		}
		printf("\n");
	}
	printf("\n");
}

/* �������� ����������� �������������� ������� */
int *GetMemoryVect(int *len)
{
	int *arr = NULL;
	/*printf("������� ����� �������: ");
	scanf("%d", len);*/
	arr = (int*)calloc(*len, sizeof(int));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* �������� ����������� ������� ���� float */
float *GetMemoryVectF(int *len)
{
	float *arr = NULL;
	/*printf("������� ����� �������: ");
	scanf("%d", len);*/
	arr = (float*)calloc(*len, sizeof(float));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* �������� ����������� ������� ���� double */
double *GetMemoryVectD(int *len)
{
	double *arr = NULL;
	/*printf("������� ����� �������: ");
	scanf("%d", len);*/
	arr = (double*)calloc(*len, sizeof(double));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* �������� ���������� �������������� ������� */
int *GetMemory(int *row, int *col)
{
	int *arr = NULL;
	printf("������� ���������� ����� �������: ");
	scanf("%d", row);
	printf("������� ���������� �������� �������: ");
	scanf("%d", col);
	arr = (int*)calloc(*row**col, sizeof(int));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* �������� ���������� ������� ���� float */
float *GetMemoryFloat(int *row, int *col)
{
	float *arr = NULL;
	printf("������� ���������� ����� �������: ");
	scanf("%d", row);
	printf("������� ���������� �������� �������: ");
	scanf("%d", col);
	arr = (float*)calloc(*row**col, sizeof(float));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* �������� ���������� ������� ���� double */
double *GetMemoryDouble(int *row, int *col)
{
	double *arr = NULL;
	printf("������� ���������� ����� �������: ");
	scanf("%d", row);
	printf("������� ���������� �������� �������: ");
	scanf("%d", col);
	arr = (double*)calloc(*row**col, sizeof(double));

	if (arr == NULL)
	{
		printf("Not enough memory.\n");
		exit(0);
	}
	else
		return arr;
}

/* ���������� ����������� ������� ���� int: �����������, ������������ �������� � �� ������� */
void extremunArray(int *arr, int *len, int *min, int *minIndex, int *max, int *maxIndex)
{
	*min = *max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
			*minIndex = i;
		}
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
			*maxIndex = i;
		}
	}
}

/* ���������� ����������� ������� ���� float: �����������, ������������ �������� � �� ������� */
void extremunArray(float *arr, int *len, float *min, int *minIndex, float *max, int *maxIndex)
{
	*min = *max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
			*minIndex = i;
		}
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
			*maxIndex = i;
		}
	}
}

/* ���������� ����������� ������� ���� double: �����������, ������������ �������� � �� ������� */
void extremunArray(double *arr, int *len, double *min, int *minIndex, double *max, int *maxIndex)
{
	*min = *max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
			*minIndex = i;
		}
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
			*maxIndex = i;
		}
	}
}

/* ����������� ������� int array */
int minArray(int *arr, int *len)
{
	int min = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < min)
			min = *(arr + i);
	}
	return min;
}

/* ����������� ������� float array */
float minArray(float *arr, int *len)
{
	float min = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < min)
			min = *(arr + i);
	}
	return min;
}

/* ����������� ������� double array */
double minArray(double *arr, int *len)
{
	double min = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) < min)
			min = *(arr + i);
	}
	return min;
}

/* ����������� ������� ���������� ������� int array */
void minArray(int *arr, int *row, int *col, int *min, int *minIndRow, int *minIndCol)
{
	*min = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) < *min)
			{
				*min = *(arr + i * *row + j);
				*minIndRow = i;
				*minIndCol = j;
			}
			
		}	
	}
}

/* ����������� ������� ���������� ������� float array */
void minArray(int *arr, int *row, int *col, float *min, int *minIndRow, int *minIndCol)
{
	*min = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) < *min)
			{
				*min = *(arr + i * *row + j);
				*minIndRow = i;
				*minIndCol = j;
			}

		}
	}
}

/* ����������� ������� ���������� ������� double array */
void minArray(int *arr, int *row, int *col, double *min, int *minIndRow, int *minIndCol)
{
	*min = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) < *min)
			{
				*min = *(arr + i * *row + j);
				*minIndRow = i;
				*minIndCol = j;
			}

		}
	}
}


/* ������������ ������� ���������� ������� int array */
void maxArray(int *arr, int *row, int *col, int *max, int *maxIndRow, int *maxIndCol)
{
	*max = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) > *max)
			{
				*max = *(arr + i * *row + j);
				*maxIndRow = i;
				*maxIndCol = j;
			}

		}
	}
}

/* ������������ ������� ���������� ������� float array */
void maxArray(float *arr, int *row, int *col, float *max, float *maxIndRow, float *maxIndCol)
{
	*max = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) > *max)
			{
				*max = *(arr + i * *row + j);
				*maxIndRow = i;
				*maxIndCol = j;
			}

		}
	}
}

/* ������������ ������� ���������� ������� double array */
void maxArray(double *arr, int *row, int *col, double *max, double *maxIndRow, double *maxIndCol)
{
	*max = *arr;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) > *max)
			{
				*max = *(arr + i * *row + j);
				*maxIndRow = i;
				*maxIndCol = j;
			}

		}
	}
}

/* ������������ ������� int array */
int maxArray(int *arr, int *len)
{
	int max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) > max)
			max = *(arr + i);
	}
	return max;
}

/* ������������ ������� float array */
float maxArray(float *arr, int *len)
{
	float max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) > max)
			max = *(arr + i);
	}
	return max;
}

/* ������������ ������� double array */
double maxArray(double *arr, int *len)
{
	double max = *arr;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) > max)
			max = *(arr + i);
	}
	return max;
}

/*������� �������������� �������*/
double averArray(int *arr, int *len)
{
	int sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum / *len;
}

/*������� �������������� �������*/
double averArray(float *arr, int *len)
{
	float sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum / *len;
}

/*������� �������������� �������*/
double averArray(double *arr, int *len)
{
	double sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum / *len;
}

/* ���������� ����������� ������� ����� ����� ������� ��������.*/
void bubbleSort(int *arr, int *len)
{
	for (int i = 0; i < (*len - 1); i++)
	{
		for (int j = (*len - 1); j > i; j--)
		{
			if (*(arr + j - 1) > *(arr + j))
			{
				int temp = *(arr + j - 1);
				*(arr + j - 1) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
}

/* ���������� ����������� ������� ����� ����� ������� ��������.*/
void bubbleSort(float *arr, int *len)
{
	for (int i = 0; i < (*len - 1); i++)
	{
		for (int j = (*len - 1); j > i; j--)
		{
			if (*(arr + j - 1) > *(arr + j))
			{
				float temp = *(arr + j - 1);
				*(arr + j - 1) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
}

/* ���������� ����������� ������� ����� ����� ������� ��������.*/
void bubbleSort(double *arr, int *len)
{
	for (int i = 0; i < (*len - 1); i++)
	{
		for (int j = (*len - 1); j > i; j--)
		{
			if (*(arr + j - 1) > *(arr + j))
			{
				double temp = *(arr + j - 1);
				*(arr + j - 1) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
}

/* ����� ����� � ������� */
void searchNumber(int *arr, int *len, int *srcNum)
{
	int count = 0, stub = 1;

	bubbleSort(arr, len);

	printf("������ ����� ����������.\n");
	printArray(arr, &stub, len);

	int left = 0;
	int right = *len - 1;
	int search = -1;

	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2;

		//printf("������ ��������: %d, ������� �������: %d\n", mid, *(arr + mid));

		if (*srcNum == *(arr + mid))
		{
			search = mid;
			break;
		}

		if (*srcNum < *(arr + mid))
			right = mid - 1;
		else
			left = mid + 1;
	}

	if (search == -1)
		printf("������� �� ������!\n");
	else
		printf("arr[%d] = %d (�� %d ��������).\n", search, *(arr + search), count);
}

/* ����� ����� � ������� */
void searchNumber(float *arr, int *len, float *srcNum)
{
	int count = 0, stub = 1;

	bubbleSort(arr, len);

	printf("������ ����� ����������.\n");
	printArray(arr, &stub, len);

	int left = 0;
	int right = *len - 1;
	int search = -1;

	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2;

		//printf("������ ��������: %d, ������� �������: %d\n", mid, *(arr + mid));

		if (*srcNum == *(arr + mid))
		{
			search = mid;
			break;
		}

		if (*srcNum < *(arr + mid))
			right = mid - 1;
		else
			left = mid + 1;
	}

	if (search == -1)
		printf("������� �� ������!\n");
	else
		printf("arr[%d] = %d (�� %d ��������).\n", search, *(arr + search), count);
}

/* ����� ����� � ������� */
void searchNumber(double *arr, int *len, double *srcNum)
{
	int count = 0, stub = 1;

	bubbleSort(arr, len);

	printf("������ ����� ����������.\n");
	printArray(arr, &stub, len);

	int left = 0;
	int right = *len - 1;
	int search = -1;

	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2;

		//printf("������ ��������: %d, ������� �������: %d\n", mid, *(arr + mid));

		if (*srcNum == *(arr + mid))
		{
			search = mid;
			break;
		}

		if (*srcNum < *(arr + mid))
			right = mid - 1;
		else
			left = mid + 1;
	}

	if (search == -1)
		printf("������� �� ������!\n");
	else
		printf("arr[%d] = %d (�� %d ��������).\n", search, *(arr + search), count);
}

/* ����� ��������� ������� */
int arrSum(int *arr, int *len)
{
	int sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum;
}

/* ����� ��������� ������� */
float arrSum(float *arr, int *len)
{
	int sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum;
}

/* ����� ��������� ������� */
double arrSum(double *arr, int *len)
{
	int sum = 0;
	for (int i = 0; i < *len; i++)
		sum += *(arr + i);
	return sum;
}

/* ������������ ��������� ������� */
int *swapNum(int *arr, int *len, int *first, int *second)
{
	int fInd, sInd;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) == *first)
			fInd = i;

		if (*(arr + i) == *second)
			sInd = i;
	}
	int temp = *(arr + fInd);
	*(arr + fInd) = *(arr + sInd);
	*(arr + sInd) = temp;
	return arr;
}

/* ������������ ��������� ������� */
float *swapNum(float *arr, int *len, float *first, float *second)
{
	int fInd, sInd;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) == *first)
			fInd = i;

		if (*(arr + i) == *second)
			sInd = i;
	}
	float temp = *(arr + fInd);
	*(arr + fInd) = *(arr + sInd);
	*(arr + sInd) = temp;
	return arr;
}

/* ������������ ��������� ������� */
double *swapNum(double *arr, int *len, double *first, double *second)
{
	int fInd, sInd;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) == *first)
			fInd = i;

		if (*(arr + i) == *second)
			sInd = i;
	}
	double temp = *(arr + fInd);
	*(arr + fInd) = *(arr + sInd);
	*(arr + sInd) = temp;
	return arr;
}

/* �������� ������� �� ����������� */
int ascArr(int *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) <= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}

/* �������� ������� �� ����������� */
int ascArr(float *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) <= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}

/* �������� ������� �� ����������� */
int ascArr(double *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) <= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}



/* �������� ������� �� �������� */
int descArr(int *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) >= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}

/* �������� ������� �� �������� */
int descArr(float *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) >= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}

/* �������� ������� �� �������� */
int descArr(double *arr, int *len)
{
	int flag = 0;
	for (int i = 0; i < *len - 1; i++)
	{
		if (*(arr + i) >= *(arr + i + 1))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag)   return 1;
	else		return 0;
}


/* ���������� ������ ��������� ������� */
int evenElemVect(int *arr, int *len)
{
	int count = 0;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) % 2 == 0)
			count++;
	}
	return count;
}

/* ���������� ������ ��������� ������� */
int evenElemArray(int *arr, int *row, int *col)
{
	int count = 0;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) % 2 == 0)
				count++;
		}
	}
	return count;
}

/* ���������� �������� ��������� ������� */
int oddElemVect(int *arr, int *len)
{
	int count = 0;
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) % 2 != 0)
			count++;
	}
	return count;
}

/* ���������� �������� ��������� ������� */
int oddElemArray(int *arr, int *row, int *col)
{
	int count = 0;
	for (int i = 0; i < *row; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			if (*(arr + i * *row + j) % 2 != 0)
				count++;
		}
	}
	return count;
}

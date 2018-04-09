#pragma once

void fillArray(int *arr, int *row, int *col, int *min, int *max);
void fillArray(double *arr, int *row, int *col, double *min, double *max);
void fillArray(float *arr, int *row, int *col, float *min, float *max);
void printArray(int *arr, int *row, int *col);
void printArray(float *arr, int *row, int *col);
void printArray(double *arr, int *row, int *col);
int *GetMemoryVect(int *len);
float *GetMemoryVectF(int *len);
double *GetMemoryVectD(int *len);
int *GetMemory(int *row, int *col);
float *GetMemoryFloat(int *row, int *col);
double *GetMemoryDouble(int *row, int *col);
void extremunArray(int *arr, int *len, int *min, int *minIndex, int *max, int *maxIndex);
void extremunArray(float *arr, int *len, float *min, int *minIndex, float *max, int *maxIndex);
void extremunArray(double *arr, int *len, double *min, int *minIndex, double *max, int *maxIndex);
int minArray(int *arr, int *len);
float minArray(float *arr, int *len);
double minArray(double *arr, int *len);
int maxArray(int *arr, int *len);
float maxArray(float *arr, int *len);
double maxArray(double *arr, int *len);
void searchNumber(int *arr, int *len, int *srcNum);
void searchNumber(float *arr, int *len, float *srcNum);
void searchNumber(double *arr, int *len, double *srcNum);
void bubbleSort(int *arr, int *len);
void bubbleSort(float *arr, int *len);
void bubbleSort(double *arr, int *len);
double averArray(int *arr, int *len);
double averArray(float *arr, int *len);
double averArray(double *arr, int *len);
int arrSum(int *arr, int *len);
float arrSum(float *arr, int *len);
double arrSum(double *arr, int *len);
int *swapNum(int *arr, int *len, int *first, int *second);
float *swapNum(float *arr, int *len, float *first, float *second);
double *swapNum(double *arr, int *len, double *first, double *second);
int ascArr(int *arr, int *len);
int ascArr(float *arr, int *len);
int ascArr(double *arr, int *len);
int descArr(int *arr, int *len);
int descArr(float *arr, int *len);
int descArr(double *arr, int *len);
void minArray(int *arr, int *row, int *col, int *min, int *minIndRow, int *minIndCol);
void minArray(int *arr, int *row, int *col, float *min, int *minIndRow, int *minIndCol);
void minArray(int *arr, int *row, int *col, double *min, int *minIndRow, int *minIndCol);
void maxArray(int *arr, int *row, int *col, int *max, int *maxIndRow, int *maxIndCol);
void maxArray(float *arr, int *row, int *col, float *max, float *maxIndRow, float *maxIndCol);
void maxArray(double *arr, int *row, int *col, double *max, double *maxIndRow, double *maxIndCol);
int evenElemVect(int *arr, int *len);
int evenElemArray(int *arr, int *row, int *col);
int oddElemVect(int *arr, int *len);
int oddElemArray(int *arr, int *row, int *col);

void task7(int *arr, int *row, int *col);
int task9(int *arr, int *row, int *col);






//
// Created by kacper on 17.03.2024.
//

#ifndef TECHINF_ARRAY_H
#define TECHINF_ARRAY_H
void changeItem(int *array, int size);
int *changeSize(int *array, int *size, int newSize);
void displayArray(int *array, int size);
float calcAverage(int *array, int size);
int calcMin(int *array, int size);
int calcMax(int *array, int size);
int calcMedian(int *array, int size);
void fetchData(int *array, int size);
void bubbleSort(int *array, int size);
template <typename T>
void swap (T *a, T *b);

#endif //TECHINF_ARRAY_H

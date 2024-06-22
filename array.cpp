//
// Created by kacper on 17.03.2024.
//

#include <cstdio>
#include <cstdlib>
#include "array.h"
void changeItem(int *array, int size){
    int index, value;
    printf(" podaj nr elementu");
    scanf("%d", &index);
    printf("podaj wartosc ");
    scanf("%d", &value);
    if(index < 0 || index >= size){
        printf("nieprawidlowa wartosc indexu");
        return;
    }
    *(array + index) = value;
}

int *changeSize(int *array, int *size, int newSize){
    int *newPointer = (int *) realloc(array, newSize * sizeof(int));
    if(newPointer){
        *size = newSize;
        return newPointer;
    }
    printf("relokacja nie udala sie");
    return array;
}

void displayArray(int *array, int size){
    for (int i = 0; i < size; ++i) {
        printf("*(array + %d) = %d\n",i, *(array+i));
    }
}

float calcAverage(int *array, int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum+= *(array+i);
    }
    return (float) sum / size;
}

int calcMin(int *array, int size){
    int min = *array;
    for (int i = 1; i < size; ++i) {
        if(*(array + i) < min)
            min = *(array + i);
    }
    return min;
}
int calcMax(int *array, int size){
    int max = *array;
    for (int i = 1; i < size; ++i) {
        if(*(array + i) > max)
            max = *(array + i);
    }
    return max;
}

int calcMedian(int *array, int size){
    int tempArray[size];
    for (int i = 0; i < size; ++i) {
        *(tempArray + i) = *(array +i);
    }
    bubbleSort(tempArray, size);
    int median;
    if (size % 2 == 0){
        median = (*(tempArray + (size/2)) + *(tempArray + (size/2) -1)) / 2;
    }
    else{
        median = *(tempArray + (size/2));
    }

    return median;
}

void fetchData(int *array, int size){
    for (int i = 0; i < size; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", (array + i));
    }
}
void bubbleSort(int *array, int size){
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size - 1; j++ )
        {
            if (array[j] > array[j + 1]) {
                swap((array + j), (array + j + 1));
            }
        }
    }
}
template <typename T>
void swap (T *a, T *b)
{
    T c =  *a;
    *a = *b;
    *b = c;
}

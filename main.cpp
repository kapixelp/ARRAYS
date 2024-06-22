#include <iostream>
#include "array.h"

void displayMenu(){
    printf("1. Wprowadz dane\n");
    printf("2. wyswietl dane\n");
    printf("3. oblicz srednia\n");
    printf("4. oblicz maksimum\n");
    printf("5. oblicz minimum\n");
    printf("6. sortuj\n");
    printf("7. wyznaczenie mediany\n");
    printf("8. zmiana wartosci pojedynczego elementu\n");
    printf("9. zmiana rozmiaru tableli\n");
    printf("0. koniec\n\n");
    printf("twoj wybror to: ");
}
void clear(){
    while (getchar() != '\n');
}

int main() {
    int size = 0;
    printf("podaj poczatkowy rozmiar tablicy");
    scanf("%d", &size);

    int *array =(int*) malloc(size * sizeof(int));
    int input;
    int input2;

    do{
        displayMenu();
        scanf("%d", &input);
        clear();
        switch (input) {
            case 1:
                fetchData(array, size);
                break;
            case 2:
                displayArray(array, size);
                getchar();
                break;
            case 3:
                printf("Srednia wynosi %f\n", calcAverage(array, size));
                getchar();
                break;
            case 4:
                printf("maksimum wynosi: %d\n", calcMax(array, size));
                getchar();
                break;
            case 5:
                printf("minimum wynosi: %d\n", calcMin(array, size));
                getchar();
                break;
            case 6:
                bubbleSort(array, size);
                displayArray(array, size);
                getchar();
                break;
            case 7:
                printf("mediana wynosi: %d\n", calcMedian(array, size));
                getchar();
                break;
            case 8:
                changeItem(array, size);
                break;
            case 9:
                printf("podaj nowy rozmiar tableli");
                scanf("%d", &input2);
                array = changeSize(array, &size, input2);
                break;
            default:
                printf("podano bledny wybor");
                break;
        }
        printf("\n\n\n\n\n\n");

    } while (input);

    return 0;
}

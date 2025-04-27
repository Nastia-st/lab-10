#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void inputArray(int arr[], int *n) {
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", n);
    printf("Введіть %d елементів масиву:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void analyzeArray(int arr[], int n, int limit) {
    int sum = 0;
    double product = 1.0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < limit) {
            sum += arr[i];
            product *= arr[i];
            count++;
        }
    }

    printf("Сума позитивних елементів менших за %d: %d\n", limit, sum);
    if (count > 0) {
        double geomMean = pow(product, 1.0 / count);
        printf("Середнє геометричне: %.3f\n", geomMean);
    } else {
        printf("Немає елементів для обчислення середнього геометричного.\n");
    }
}

int main() {
    system("chcp 65001");
    int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE];
    int n1, n2, n3;
    int limit;

    printf("Введіть обмежувальне число: ");
    scanf("%d", &limit);

    printf("\n--- Масив 1 ---\n");
    inputArray(arr1, &n1);

    printf("\n--- Масив 2 ---\n");
    inputArray(arr2, &n2);

    printf("\n--- Масив 3 ---\n");
    inputArray(arr3, &n3);

    printf("\nРезультати для Масиву 1:\n");
    analyzeArray(arr1, n1, limit);

    printf("\nРезультати для Масиву 2:\n");
    analyzeArray(arr2, n2, limit);

    printf("\nРезультати для Масиву 3:\n");
    analyzeArray(arr3, n3, limit);

    return 0;
}
// Write a C program to multiply two matrices using recursion.

#include <stdio.h>

void multi(int[][10], int[][10], int[][10], int, int);

int main() {
    int arr[10][10], arr1[10][10], arr2[10][10], i, j, m, n;
    printf("Enter the number of rows and columns of matrix:");
    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element of first matrix at position %d,%d:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element of second matrix at position %d,%d:", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Initialize arr2 to zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            arr2[i][j] = 0;
        }
    }

    multi(arr, arr1, arr2, m, n);

    // Print the result
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multi(int arr[10][10], int arr1[10][10], int arr2[10][10], int m, int n) {
    int i = 0, j = 0, k = 0;

    if (i >= m) {
        return;
    } else if (i < m) {
        if (j < n) {
            if (k < n) {
                arr2[i][j] += arr[i][k] * arr1[k][j];
                k++;
                multi(arr, arr1, arr2, m, n);
            } else {
                k = 0;
                j++;
                multi(arr, arr1, arr2, m, n);
            }
        } else {
            j = 0;
            i++;
            multi(arr, arr1, arr2, m, n);
        }
    }
}

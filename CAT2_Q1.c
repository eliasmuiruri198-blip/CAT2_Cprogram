/*
Name:Muiruri Elias
Reg no:CT100/G/26169/25
Description:2D array program for matrix
*/

#include <stdio.h>

int main() {

    // ii. Declare and initialize a 2D array named scores
    int scores[2][2][2] = {
        { {65, 92}, {84, 72} },
        { {35, 70}, {59, 67} }
    };
    printf("The elements of the array are:\n");
    for (int i = 0; i < 2; i++) {
        printf("Matrix %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", scores[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
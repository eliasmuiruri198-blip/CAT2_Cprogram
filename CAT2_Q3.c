/*
Name:Muiruri Elias
Reg no:CT100/G/26169/25
Description:c handling program 

*/

#include <stdio.h>

// Function 
void writeInputFile();
void processNumbers();
void displayFiles();

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}

//Function to prompt user for 10 integers 
void writeInputFile() {
    FILE *fp;
    int num, i;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open input.txt for writing.\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    printf("Data successfully written to input.txt\n\n");

return 0;
}

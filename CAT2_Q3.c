/*
Name:Muiruri Elias
Reg no:CT100/G/26169/25
Description:c handling program 

*/

#include <stdio.h>
#include <stdlib.h>

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
}

// Function to read integers from input.txt, calculate sum & average, write to output.txt
void processNumbers() {
    FILE *inFile, *outFile;
    int num, count = 0;
    int sum = 0;
    float average;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        exit(1);
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(inFile);

    if (count == 0) {
        printf("Error: No numbers found in input.txt\n");
        exit(1);
    }

    average = (float)sum / count;

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        exit(1);
    }

    fprintf(outFile, "Sum = %d\n", sum);
    fprintf(outFile, "Average = %.2f\n", average);

    fclose(outFile);
    printf("Results written to output.txt\n\n");
}

// Function to display contents of input.txt and output.txt
void displayFiles() {
    FILE *fp;
    char ch;

    printf("Contents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open output.txt for reading.\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\n");
}
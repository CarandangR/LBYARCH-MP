#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void scalarCompute(float A, float X[], float Y[], float Z[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
	{
        Z[i] = (A * X[i]) + Y[i];
    }
}

extern void assemblyCompute(float A, float *X, float *Y, float *Z, int size);

void menu() 
{
    printf("\n--- SAXPY Program ---\n");
    printf("1. Compute SAXPY in C\n");
    printf("2. Compute SAXPY in Assembly via C interface\n");
    printf("3. Exit\n");
    printf("Choose an option: ");
}

int main() 
{
    int choice;
    int size = 1048576;
    float A = 2.0;

    float *X = (float *)malloc(size * sizeof(float));
    float *Y = (float *)malloc(size * sizeof(float));
    float *Z = (float *)malloc(size * sizeof(float));

    if (!X || !Y || !Z) 
	{
        printf("Memory allocation failed. Exiting.\n");
        free(X);
        free(Y);
        free(Z);
        return 1;
    }

    srand((unsigned int)time(NULL));
    int i;
    for (i = 0; i < size; i++) 
	{
        X[i] = (float)(rand() % 100) + 1;
        Y[i] = (float)(rand() % 100) + 1;
    }

    while (1) 
	{
        menu();
        scanf("%d", &choice);

        if (choice == 1) 
		{
            printf("\nRunning SAXPY in C...\n");
            clock_t start = clock();
            scalarCompute(A, X, Y, Z, size);
            clock_t end = clock();
            double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
            printf("Time taken by scalarCompute: %.6f seconds\n", elapsed_time);

            printf("First 10 elements of Z:\n");
            int i;
            for (i = 0; i < 10; i++) 
			{
                printf("Z[%d] = %.2f\n", i, Z[i]);
            }
        } 

		else if (choice == 2) 
		{
            printf("\nRunning SAXPY in Assembly via C interface...\n");
            clock_t start = clock();
            assemblyCompute(A, X, Y, Z, size);
            clock_t end = clock();
            double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
            printf("Time taken by assemblyCompute: %.6f seconds\n", elapsed_time);

            printf("First 10 elements of Z:\n");
            int i;
            for (i = 0; i < 10; i++) {
                printf("Z[%d] = %.2f\n", i, Z[i]);
            }
        } 

		else if (choice == 3) 
		{
            printf("\nExiting program. Goodbye!\n");
            break;
        } 
		
		else 
		{
            printf("\nInvalid option. Please try again.\n");
        }
    }

    free(X);
    free(Y);
    free(Z);

    return 0;
}

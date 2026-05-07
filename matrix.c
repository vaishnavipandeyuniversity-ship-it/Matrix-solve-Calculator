```c
#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int tra[10][10], Sum[10][10], sca[10][10];
    int i, j, k, r1, c1, r2, c2, choice;

    printf("CALCULATOR TO SOLVE MATRIX OPERATIONS\n");

    // First matrix input
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Second matrix input
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Display first matrix
    printf("\nFirst matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nSecond matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the choice which operation you want to perform:\n");
    printf("1-Multiplication\n");
    printf("2-Transpose\n");
    printf("3-Addition\n");
    printf("4-Subtraction\n");
    printf("5-Scalar Multiplication\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

        // Matrix Multiplication
        if(c1 == r2)
        {
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    c[i][j] = 0;

                    for(k = 0; k < c1; k++)
                    {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            printf("\nResultant matrix:\n");

            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("\nMatrix multiplication not possible.\n");
            printf("Columns of first matrix must equal rows of second matrix.\n");
        }

        break;

        case 2:

        // Transpose
        printf("\nTranspose of a Matrix\n");

        printf("Enter the choice:\n");
        printf("1 - Matrix A\n");
        printf("2 - Matrix B\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    tra[j][i] = a[i][j];
                }
            }

            printf("\nTranspose of Matrix A:\n");

            for(i = 0; i < c1; i++)
            {
                for(j = 0; j < r1; j++)
                {
                    printf("%d ", tra[i][j]);
                }
                printf("\n");
            }

            break;

            case 2:

            for(i = 0; i < r2; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    tra[j][i] = b[i][j];
                }
            }

            printf("\nTranspose of Matrix B:\n");

            for(i = 0; i < c2; i++)
            {
                for(j = 0; j < r2; j++)
                {
                    printf("%d ", tra[i][j]);
                }
                printf("\n");
            }

            break;

            default:
            printf("Invalid choice\n");
        }

        break;

        case 3:

        // Addition
        printf("\nAddition of Matrices\n");

        if(r1 == r2 && c1 == c2)
        {
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    Sum[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("\nSum Matrix:\n");

            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    printf("%d ", Sum[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Addition is not Possible\n");
        }

        break;

        case 4:

        // Subtraction
        printf("\nSubtraction of Matrices\n");
        printf("Enter the choice:\n");
        printf("1 - A - B\n");
        printf("2 - B - A\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

            if(r1 == r2 && c1 == c2)
            {
                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        Sum[i][j] = a[i][j] - b[i][j];
                    }
                }

                printf("\nResult Matrix:\n");

                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        printf("%d ", Sum[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Subtraction is not Possible\n");
            }

            break;

            case 2:

            if(r1 == r2 && c1 == c2)
            {
                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        Sum[i][j] = b[i][j] - a[i][j];
                    }
                }

                printf("\nResult Matrix:\n");

                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        printf("%d ", Sum[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Subtraction is not Possible\n");
            }

            break;

            default:
            printf("Invalid choice\n");
        }

        break;

        case 5:

        // Scalar Multiplication
        {
            int n;

            printf("\nScalar Multiplication of Matrix\n");

            printf("Enter the number for Scalar multiplication: ");
            scanf("%d", &n);

            printf("Enter the choice:\n");
            printf("1 - Matrix A\n");
            printf("2 - Matrix B\n");

            scanf("%d", &choice);

            switch(choice)
            {
                case 1:

                printf("\nScalar multiplication of Matrix A:\n");

                for(i = 0; i < r1; i++)
                {
                    for(j = 0; j < c1; j++)
                    {
                        sca[i][j] = a[i][j] * n;
                        printf("%d ", sca[i][j]);
                    }
                    printf("\n");
                }

                break;

                case 2:

                printf("\nScalar multiplication of Matrix B:\n");

                for(i = 0; i < r2; i++)
                {
                    for(j = 0; j < c2; j++)
                    {
                        sca[i][j] = b[i][j] * n;
                        printf("%d ", sca[i][j]);
                    }
                    printf("\n");
                }

                break;

                default:
                printf("Invalid choice\n");
            }
        }

        break;

        default:
        printf("Invalid choice\n");
    }

    return 0;
}
```

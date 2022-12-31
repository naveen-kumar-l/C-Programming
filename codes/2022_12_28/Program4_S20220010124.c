#include <stdio.h>

void print(float matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2f  ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

void main()
{
    float det, mat[3][3] = {}, minor[3][3], adj[3][3];
    for (int i; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the (%d, %d) element: ", i+1, j+1);
            scanf("%f", &mat[i][j]);
        }
    }

    det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]);

    printf("Your matrix:\n");
    print(mat);
    printf("Determinet: %.2f\n\n", det);

    if (det == 0)
    {
        printf("No inverser exist for this matrix\n");
    }
    else
    {
        minor[0][0] = mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1];
        minor[0][1] = mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0];
        minor[0][2] = mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0];
        minor[1][0] = mat[0][1] * mat[2][2] - mat[0][2] * mat[2][1];
        minor[1][1] = mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0];
        minor[1][2] = mat[0][0] * mat[2][1] - mat[0][1] * mat[2][0];
        minor[2][0] = mat[0][1] * mat[1][2] - mat[1][1] * mat[0][2];
        minor[2][1] = mat[0][0] * mat[1][2] - mat[1][0] * mat[0][2];
        minor[2][2] = mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];

        printf("Minor Matrix of your given matrix:\n");
        print(minor);

        // converting minor to co-factor matrix
        for (int i; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if ((i + j) % 2 == 1)
                    minor[i][j] *= -1;
            }
        }

        printf("Co-Factor Matrix of your given matrix:\n");
        print(minor);

        // converting co-factor to adjoint matrix
        for (int i; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[j][i] = minor[i][j];
            }
        }

        printf("Adjoint Matrix of your given matrix:\n");
        print(mat);

        // finding the inverse of the matrix
        for (int i; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[j][i] /= det;
            }
        }

        printf("Inverse of the given matrix is: \n");
        print(mat);
    }
}
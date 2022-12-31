#include <stdio.h>
#include <math.h>

#define SIZE 100

int get_nearest_point(int point[], int arr[SIZE][2]);
float get_distance(int point1[], int point2[]);

void main()
{
    int xCoordinates, yCoordinates, add, index, point[2], arr[SIZE][2] = {{2, 3}, [SIZE - 1] = {200, 300}};

    xCoordinates = (arr[SIZE - 1][0] - arr[0][0]) / (SIZE - 1);
    yCoordinates = (arr[SIZE - 1][1] - arr[0][1]) / (SIZE - 1);
    
    for (int i = 1; i < SIZE; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            add = (j == 0) ? xCoordinates : yCoordinates;
            arr[i][j] = arr[i - 1][j] + add;
        }
    }

    printf("Enter the X-Coordinate: ");
    scanf("%d", &point[0]);
    printf("Enter the Y-Coordinate: ");
    scanf("%d", &point[1]);
    index = get_nearest_point(point, arr);

    printf("\nYour nearest point is: (%d, %d)\n", arr[index][0], arr[index][1]);
    printf("The shortest distance is %.2f\n", get_distance(point, arr[index]));
}

int get_nearest_point(int point[], int arr[SIZE][2])
{
    int index = 0;
    float distance, least_distance = 0;
    for (int i = 0; i < SIZE; i++)
    {
        distance = get_distance(arr[i], point);
        if (distance == 0)
        {
            index = i;
            break;
        }
        if (least_distance == 0) {
            least_distance = distance;
        }
        if (distance < least_distance)
        {
            index = i,
            least_distance = distance;
        }
    }
    return index;
}

float get_distance(int point1[], int point2[])
{
    int xdiff, ydiff;
    xdiff = pow((point1[0] - point2[0]), 2);
    ydiff = pow((point1[1] - point2[1]), 2);
    return sqrt(xdiff + ydiff);
}
#include <stdio.h>

// Constant 
const int N = 3;

// Prototype
// Compute the average
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    // Print average
    printf("Average: %f\n", average(N, scores));

    return 0;
}

// Function to calculate average
float average(int length, int array[])
{
    
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)sum / length;
}

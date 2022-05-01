// Bubble sort

#include <stdio.h>

void bubbleSort(int array[], int n)
{

    // Outer loop
    for (int i = 0; i < n - 1; ++i)
    {

        // Inner loop to compare array elements
        for (int j = 0; j < n - i - 1; ++j)
        {

            // compare two elements
            if (array[j] > array[j + 1])
            {

                // swap if element are not in order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// function
void printArray(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {-5, 4, 0, -9, 15};

    // find the array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order :\n");
    printArray(data, size);
}
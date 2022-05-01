// Bubble sort

import java.util.Arrays;

class BubbleSort {

    static void bubbleSort(int array[]) {
        int size = array.length;

        // Outer loop
        for (int i = 0; i < size - 1; i++)

            // Inner loop to compare array elements
            for (int j = 0; j < size - i - 1; j++)

                // compare two elements
                if (array[j] > array[j + 1]) {

                    // swap if element are not in order
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
    }

    public static void main(String args[]) {

        int[] data = { -5, 4, 0, -9, 15 };

        // method call
        BubbleSort.bubbleSort(data);

        System.out.println("Sorted Array in Ascending Order:");
        System.out.println(Arrays.toString(data));
    }
}
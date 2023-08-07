#include <iostream>

using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Select the pivot element
        int pivot = arr[high];

        // Partition the array around the pivot
        int i = low;
        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                i++;
            }
        }

        // Put the pivot element in its correct position
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;

        // Recursively sort the left and right subarrays
        quickSort(arr, low, i - 1);
        quickSort(arr, i + 1, high);
    }
}

int main()
{
    int arr[] = {10, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the unsorted array
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using quick sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

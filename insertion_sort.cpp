#include <iostream>

int main()
{
    int numbers[] = {56, 45, 8, 345, 9};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 1; i < n; i++)
    {
        int temp = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] > temp)
        {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = temp;
    }

    std::cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include "sort.h"

/**
 * @brief
 *
 * bubble_sort - function that implement the bubble sort
 * @param array: pointer to array
 * @param size : size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t temp, i, j, flag;

    for (i = 0; i <= size - 2; i++)
    {
        flag = 0;
        for (j = 0; j <= size - i - 2; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
                flag = 1;
            }
        }
        if (flag == 0)
            break;

    }
}
#include "sort.h"

/**
 * @brief
 * selection_sort - function implementing the selection sort algorithm
 * @param array: pointer to the array
 * @param size : size of the array
 */
void selection_sort(int *array, size_t size)
{
   size_t iMin, i, j, temp;

    for (i = 0; i < size - 2; i++)
    {
        iMin = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[iMin] > array[j])
            {
                iMin = j;
            }
        }
        temp = array[iMin];
        array[iMin] = array[i];
        array[i] = temp;
        print_array(array, size);
    }
}
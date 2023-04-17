#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array
*               of integers using jump search.
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
*         Otherwise, the first index where the value is located.
*
* Description: Prints a value every time it is compared in the array.
*              Uses the square root of the array size as the jump step.
*/
int jump_search(int *array, size_t size, int value)
{
if (array == NULL) {
return (-1);
}

// Determine the jump step
size_t jump_step = sqrt(size);

// Find the block that contains the value
size_t left = 0;
size_t right = jump_step;
while (right < size && array[right] < value) {
printf("Value checked array[%lu] = [%i]\n", value, right, array[right]);
left = right;
right += jump_step;
}

// Perform linear search within the block
for (size_t i = left; i <= fmin(right, size - 1); i++) {
printf("Comparing value %d with array[%zu] = %d\n", value, i, array[i]);
if (array[i] == value) {
return (i);
}
}

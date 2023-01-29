#include <main.h>
/**
 * bubble_sort - sorts an array
 * @array: array to be sorted
 * @size: size of array
 * Return: No return value
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, hold;

	/*for loop for passes*/
	for (i = 0; i < size - 1; i++)
	{
		/*For loop for comparison*/
		for (j = 0; j < size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				hold = array[j];
				array[j] = array[j + 1];
				array[j + 1] = hold;
			}
		}
	}
}
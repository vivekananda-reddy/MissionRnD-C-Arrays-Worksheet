/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
void shift(int *, int*, int, int);
int removeArrayDuplicates(int *Arr, int len)
{
	int i, j, count, k=-1,a[100];
	if (Arr == NULL || len < 0)
	{
		return -1;
	}
	count = len;
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (Arr[i] == Arr[j])
			{
				k++;
				a[k] = j;
			}
		}
		if (k != -1)
		{
			shift(Arr, a, k, count);
			count = count - k - 1;
			k = -1;
		}
	}
	return count;
	
}
void shift(int *Arr, int *a, int k, int count)
{
	int i, j=a[0],l=0;
	
	for (i = j+1; i < count; i++)
	{
		if (l <= k)
		{
			if (i == a[l])
			{
				l++;
				continue;
			}
		}
			Arr[j] = Arr[i];
			j++;
		
	}
}
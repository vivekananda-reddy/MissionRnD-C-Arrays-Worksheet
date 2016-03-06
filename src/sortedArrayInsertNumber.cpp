/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int first=0, last=len-1, mid, i;
	if (Arr == NULL || len<1)
	{
		return NULL;
	}
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (Arr[mid] == num)
		{
			break;
		}
		else if (Arr[mid] < num)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}
	Arr = (int*)realloc(Arr, (len + 1)*sizeof(int));
	i = len - 1;
	while (i > mid)
	{
		Arr[i+1] = Arr[i];
		i--;
	}
	if (num < Arr[mid])
	{
		Arr[mid + 1] = Arr[mid];
		i--;
	}
	Arr[i + 1] = num;
	return Arr;
}
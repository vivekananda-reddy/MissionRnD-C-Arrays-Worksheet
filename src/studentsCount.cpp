
/*
OVERVIEW:  Write a function that takes ascending sorted student's score array and tells how many number of students got more marks and how many students got less marks than the given student.
E.g.: Input array: [10, 20, 30, 40, 50], score: 30, lessCount value is 2 (10, 20 are less than 30), moreCount value is 2 (40, 50 are greater than 30).

INPUTS: Ascending sorted student marks array, length of the array, one student score, lessCount and moreCount are to be
used to store final results.

OUTPUT: Update lessCount and moreCount with number of students less than and more than given score.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <stdio.h>

void * studentsCount(int *Arr, int len, int score, int *lessCount, int *moreCount) {
	int  first=-1,last=0,i,count=0;
	if (Arr == NULL || len<1)
	{
		return NULL;
	}
	last = len - 1;
	for (i = 0; i < len; i++)
	{
		if (Arr[i] == score&&count == 0)
		{
			first = i;
			count = 1;
		
		}
		else if (Arr[i] > score)
		{
			last = i;
			break;
		}
		else if (Arr[i] < score)
		{
			first = i;
		}
		
	}
	if (count == 0)
	{
		*lessCount = first+1;
		*moreCount = len - i;
	}
	else
	{
		*lessCount = first;
		*moreCount = len - i;
	}
	
}


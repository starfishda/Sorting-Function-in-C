#include<stdio.h>
#include<stdlib.h>

void quicksort(int score[], int l, int r)
{
	int left = l;
	int right = r;
	int pivot = score[(l + r) / 2];

	while (left <= right)
	{
		while (score[left] < pivot) left++;
		while (score[right] > pivot) right--;

		if (left <= right)
		{
			int temp = score[left];
			score[left] = score[right];
			score[right] = temp;
			left++;
			right--;
		}
	}

	if (l < right)
		quicksort(score, l, right);

	if (r > left)
		quicksort(score, left, r);
}

int main(void)
{
	int data[10] = { 8,6,7,0,2,4,3,5,9,1 };
	quicksort(data, 0, 10-1); //Á¤·Ä 1,2.3...

	for (int i = 0; i < 10; i++)
		printf("%d\n", data[i]);
}
void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Shaker Sort
void	shaker_sort(int a[], int len)
{
	int left = 0, right = len - 1;
	int sorted;

	do {
		sorted = 0;

		for (int j = left; j < right; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
				sorted = 1;
			}
		}
		right--;

		for (int j = right; j > left; --j)
		{
			if (a[j] < a[j - 1])
			{
				swap(&a[j], &a[j - 1]);
				sorted = 1;
			}
		}
		left++;
	} while (sorted);
}

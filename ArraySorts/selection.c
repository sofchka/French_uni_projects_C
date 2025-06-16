void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Selection Sort
void	selection_sort(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < len; ++j)
		{
			if (a[j] < a[min])
				min = j;
		}
		if (min != i)
			swap(&a[i], &a[min]);
	}
}

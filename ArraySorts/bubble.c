void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Bubble Sort
void	bubble_sort(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}

// Bubble Sort Optimized
void	bubble_sort_opt(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		int swapped = 0;
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}

// Bubble Sort Recursive
void	bubble_sort_recurs(int a[], int len)
{
	if (len == 1)
		return ;

	int swapped = 0;
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			swap(&a[i], &a[i + 1]);
			swapped = 1;
		}
	}
	if (swapped == 0)
		return ;
	bubble_sort_recurs(a, len - 1);
}

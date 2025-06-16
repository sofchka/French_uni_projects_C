void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Quick Sort
int	split(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low - 1;

	for (int j = low; j < high; ++j)
	{
		if (pivot > a[j])
		{
			i++;
			swap(&a[j], &a[i]);
		}
	}
	i++;
	swap(&a[i], &a[high]);
	return (i);
}

void	quick_sort(int a[], int low, int high)
{
	if (low < high)
	{
		int split_index = split(a, low, high);
		quick_sort(a, low, split_index - 1);
		quick_sort(a, split_index + 1, high);
	}
}

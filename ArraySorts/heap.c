void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Heap Sort
void	heap_maker(int a[], int len, int i)
{
	int max = i;
	int child_1 = 2 * i + 1;
	int child_2 = 2 * i + 2;
	if (child_1 < len && a[child_1] > a[max])
		max = child_1;
	if (child_2 < len && a[child_2] > a[max])
		max = child_2;
	if (max != i)
	{
		swap(&a[max], &a[i]);
		heap_maker(a, len, max);
	}
}

void	heap_sort(int a[], int len)
{
	if (len <= 1)
		return ;
	for (int i = len / 2 - 1; i >= 0; --i)
		heap_maker(a, len, i);

	for (int i = len - 1; i > 0; --i)
	{
		swap(&a[0], &a[i]);
		heap_maker(a, i, 0);
	}
}

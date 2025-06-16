// Insertion Sort
void	insertion_sort(int a[], int len)
{
	for (int i = 1; i < len; ++i)
	{
		int tmp = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > tmp)
		{
			a[j] = a[j - 1];
			--j;
		}
		a[j] = tmp;
	}
}

// Merge Sort
void	merge(int a[], int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int *arr1 = (int *)malloc(n1 * sizeof(int));
	int *arr2 = (int *)malloc(n2 * sizeof(int));

	for (int i = 0; i < n1; i++)
		arr1[i] = a[left + i];
	for (int j = 0; j < n2; j++)
		arr2[j] = a[mid + 1 + j];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
	{
		if (arr1[i] <= arr2[j])
			a[k] = arr1[i++];
		else
			a[k] = arr2[j++];
		k++;
	}
	while (i < n1)
		a[k++] = arr1[i++];
	while (j < n2)
		a[k++] = arr2[j++];
    free(arr1);
    free(arr2);
}

void	merge_sort(int a[], int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;

		merge_sort(a, left, mid);
		merge_sort(a, mid + 1, right);

		merge(a, left, mid, right);
	}
}

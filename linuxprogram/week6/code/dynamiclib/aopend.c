int max(int *a, int n)
{
	int m, i;
	m = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] > m)
			m = a[i];
	}
	return m;
}

int sum(int *a, int n)
{
	int m, i;
	m = 0;
	for(i = 0; i < n; i++)
		m += a[i];
	return m;
}

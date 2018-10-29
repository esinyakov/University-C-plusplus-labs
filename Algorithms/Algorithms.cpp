#include "pch.h"
#include <iostream>
#include <conio.h>
#pragma warning (disable: 4996)

int main()
{
	const int n = 5;
	int a[n] = { 1,1,3,2,1 };
	int i = 0;
	int min = 0;
	int max = 0;
	int s = 0;
	int p = 1;
	int j = 0;
	int tmp = 0;
	int cnt = 0;

	printf("Source array: ");
	for (; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		min = a[0];
		max = a[0];
		if (a[i + 1] > a[i]) max = a[i + 1];
		if (a[i + 1] < a[i]) min = a[i + 1];
	}

	printf("\nMax: %d Min: %d", max, min);

	for (i = 0; i < n; s += a[i], p *= a[i++]);

	printf("\nSum: %d Composition: %d", s, p);

	for (i = 0; i < n - 1; i++)
	{
		cnt = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
				cnt++;
			}
		}
		if (!cnt)break;
	}

	printf("\nBubble sort: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	int an = 5;
	printf("\nSource array: ");
	for (i = 0; i < n; i++)
	{
		a[i] = an--;
		printf("%d ", a[i]);
	}


	int imin = 0;
	for (i = 0; i < n - 1; i++)
	{
		imin = i;
		for (j = i; j < n - 1; j++)
		{
			if (a[j + 1] < a[j]) imin = j + 1;
		}
		tmp = a[i];
		a[i] = a[imin];
		a[imin] = tmp;
	}

	printf("\nSelection sort my version: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	an = 5;
	printf("\nSource array: ");
	for (i = 0; i < n; i++)
	{
		a[i] = an--;
		printf("%d ", a[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[imin]) imin = j;
		}
		tmp = a[i];
		a[i] = a[imin];
		a[imin] = tmp;
	}

	printf("\nSelection BMSTU version: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	int l = a[0];
	int r = a[n - 1];
	int m = 0;
	int f = 0;
	int x = 1; //desired element

	while (l <= r)
	{
		m = (l + r) / 2;
		if (x == m)
		{
			f++; break;
		}
		else if (x < m)
		{
			r = --m;
		}
		else
		{
			l = ++m;
		}
	}

	printf("\nBinary search");
	if (f)
	{
		printf("\nDesired element %d is in array", x);
	}
	else
	{
		printf("\nDesired element %d is not in array", x);
	}

	f = 0;
	x = 5;
	printf("\nLinear search");
	for (i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			f++; break;
		}
	}

	if (f)
	{
		printf("\nDesired element %d is in array", x);
	}
	else
	{
		printf("\nDesired element %d is not in array", x);
	}

	const int nn = 6;
	int b[nn] = { 1,2,3,4,5,5 };

	i = 0;
	while (b[i] != x) i++;

	printf("\nLinear search with barrier");

	if (i == b[nn - 1])
	{
		printf("\nDesired element %d is not in array", x);
	}
	else
	{
		printf("\nDesired element %d is in array", x);
	}

	_getch();
}

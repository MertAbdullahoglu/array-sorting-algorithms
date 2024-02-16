#include <stdio.h>


void printNewArray(int* A, int n)
{

	for (int a = 0; a < n; a++)
	{
		printf("%d ", A[a]);
	}

	getchar();
}

void insertionSort(int* A, int n)
{
	for (int j = 1; j < n; j++)
	{
		int key = A[j];
		int i = j - 1;

		while (i > -1 && A[i] > key)
		{
			A[i + 1] = A[i];
			i = i - 1;
		}

		A[i + 1] = key;
		
		printf("Step %d: ", j);
		printNewArray(A, n);
	}
}

int main()
{
	int A[6] = { 8,9,7,2,4,5 };
	int n = sizeof(A) / sizeof(int);

	printf("Click enter to see the next steps.\n\n");
	insertionSort(A, n);

	return 0;
}

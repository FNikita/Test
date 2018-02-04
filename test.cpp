#include<stdio.h>
#include<algorithm>

void turn_at_90(int *array, int n)
{
	int i,j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			swap(array[i*n + j], array[j*n + i]);
		}
	}
}

//Пример работы программы 

/*
int main()
{
	int N = 4, matrix[16];

	for(int i =0; i < N*N; i++)
		matrix[i] = i+1;

	for (int i = 0; i < N*N; i++)
	{
		if (i % N == 0)
			printf("\n");
		printf("%d ", matrix[i]);
	}
	printf("\n");
	turn_at_90(matrix, N);
	for (int i = 0; i < N*N; i++)
	{
		if (i % N == 0)
			printf("\n");
		printf("%d ", matrix[i]);
	}

	return 0;
}
*/

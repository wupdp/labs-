#include <stdio.h>
#include <stdlib.h>
int main()
{
	int massive[200];
	int n;
	printf("enter the number of elements(<100)\n");
	while (scanf_s("%d", &n) != 1 || n < 1 || n >99 || getchar() != '\n')		//проверка на ввод
	{
		printf("error\n");
		rewind(stdin);
	}
	printf("enter 1 to enter the array elements yourself\n");  //выбор пользователя
	printf("enter 2 to randomly enter array elements\n");
	int x;
	while (scanf_s("%d", &x) != 1 || x < 1 || x>2 || getchar() != '\n')
	{
		printf("incorrect enter\n");
		rewind(stdin);
	}
	switch (x)
	{
	case 1:
		for (int i = 0; i < n; i++)							//ввод пользователем
		{
			printf("enter %d number of massive		", i + 1);
			while (scanf_s("%4d", &massive[i]) != 1 || getchar() != '\n')		//проверка на ввод
			{
				printf("error\n");
				rewind(stdin);
			}
		}
		break;
	case 2:															//случайный ввод
		for (int i = 0; i < n; i++)
		{
			massive[i] = rand() % 100;
			printf("%d number of massive		%d\n", i + 1, massive[i]);
		}
		break;
	default:															//неправльный ввод
		printf("incorrect enter\n");
		return 0;
	}
	for (int i = n-1; i >= 0; i--)
	{
		if (massive[i] % 2 == 0&&massive[i]!=0)
		{
			n++;
			for (int j = n-1; j>i;j--)
			{
				massive[j] = massive[j - 1];
			}
			massive[i + 1] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%4d", massive[i]);
	}
	return 0;
}

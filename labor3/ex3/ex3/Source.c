#include <stdio.h>
#include <stdlib.h>
int main()
{
	int massive1[100],massive2[100];
	int n;
	n = 10;
	printf("enter 1 to enter the array elements of 1 massive yourself\n");  //����� ������������
	printf("enter 2 to randomly enter array elements\n");
	int x;
	scanf_s("%d", &x);
	switch (x)
	{
	case 1:
		for (int i = 0; i < n; i++)							//���� �������������
		{
			printf("enter %d number of massive		", i + 1);
			scanf_s("%4d", &massive1[i]);
		}
		break;
	case 2:															//��������� ����
		for (int i = 0; i < n; i++)
		{
			massive1[i] = rand() % 100;
			printf("%d number of massive		%d\n", i + 1, massive1[i]);
		}
		break;
	default:															//����������� ����
		printf("incorrect enter\n");
		return 0;
	}
	printf("enter 1 to enter the array elements of 2 massive yourself\n");  //����� ������������
	printf("enter 2 to randomly enter array elements\n");
	int y;
	scanf_s("%d", &y);
	switch (y)
	{
	case 1:
		for (int i = 0; i < n; i++)							//���� �������������
		{
			printf("enter %d number of massive		", i + 1);
			scanf_s("%4d", &massive2[i]);
		}
		break;
	case 2:															//��������� ����
		for (int i = 0; i < n; i++)
		{
			massive2[i] = rand() % 100;
			printf("%d number of massive		%d\n", i + 1, massive2[i]);
		}
		break;
	default:															//����������� ����
		printf("incorrect enter\n");
		return 0;
	}
	int flag = 0;
	int min=999;
	for (int i = 0; i < n; i++) //������ �� 1 �������
	{    
		for (int j = 0; j < n; j++) //������ �� 2 �������
		{
			if (massive1[i] == massive2[j]) // ��������� ��������
				flag=1;
		}
		if (flag == 0 && massive1[i] < min) //������������ ������������ ��������
		{
			min = massive1[i];
		}
		else
			flag = 0;
	}
	printf("the minimal element is %d", min);
}
#include <stdio.h>

int main_loop(void)
{
	// ++ �ܻ�   ���� ������ ? 
	/*
	int a = 10;
	printf("a=%d\n", a);
	a++;
	printf("a=%d\n", a);
	a++;
	printf("a=%d\n", a);
	*/

	//int b = 20;
	//printf("b=%d\n", ++b); 21
	//printf("b=%d\n", b++); 21
	//printf("b=%d\n", ++b); 23

	// 1. for �ݺ��� // 
	// for , while , do while 


	//for(����, ���� , ����) // 

	/* ex)
	for (int i = 1; i<= 10; i++)
	{
		printf("Hi %d\n", i);
	}
	*/

	//2.while �ݺ��� //
	//���� ����. // 
	//while (����) {} // 
	// printf(   "" , i++) // 

	/* ex)
	int i = 1;
	while (i <= 10)
	{
		printf("YO!%d\n", i++);
	}
	*/

	//3.do { } while (����)//

	/*
	int i = 1;
	do {
		printf("Heower%d\n", i++);
	} while (i<=10);
	*/
	
	//2�� �ݺ��� //
	
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("First Loop:%d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("Second loop:%d\n", j);
	//	}

	//}
	
	//������ ���α׷� �ǽ� //
	
	/*
	for (int i = 2; i <= 9; i++)
	{	
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d x %d= %d\n", i, j, i * j);
		}
	}
	*/

	/* ex) Program like this below.
	a
	aa
	aaa
	aaaa
	aaaaa
	*/


	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/


	// �Ƕ�̵鸣 ���ƶ� ������Ʈ //

	
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i*2 +1; k++)
		{
			printf("*");
		}
		printf("\n");
	}




	return 0; 
}
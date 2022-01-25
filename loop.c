#include <stdio.h>

int main_loop(void)
{
	// ++ 쁠쁠   증가 연산자 ? 
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

	// 1. for 반복문 // 
	// for , while , do while 


	//for(선언, 조건 , 증감) // 

	/* ex)
	for (int i = 1; i<= 10; i++)
	{
		printf("Hi %d\n", i);
	}
	*/

	//2.while 반복문 //
	//선언 먼저. // 
	//while (조건) {} // 
	// printf(   "" , i++) // 

	/* ex)
	int i = 1;
	while (i <= 10)
	{
		printf("YO!%d\n", i++);
	}
	*/

	//3.do { } while (조건)//

	/*
	int i = 1;
	do {
		printf("Heower%d\n", i++);
	} while (i<=10);
	*/
	
	//2중 반복문 //
	
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("First Loop:%d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("Second loop:%d\n", j);
	//	}

	//}
	
	//구구단 프로그램 실습 //
	
	/*
	for (int i = 2; i <= 9; i++)
	{	
		printf("%d단 계산\n", i);
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


	// 피라미들르 쌇아라 프로젝트 //

	
	int floor;
	printf("몇 층으로 쌓겠느냐?");
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
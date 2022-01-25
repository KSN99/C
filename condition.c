#include <stdio.h>
#include <time.h> // 난수 사용하기 위한 추가

int main_condition(void)
{	
	//int age = 25;
	//if (age >= 20)
	//{
	//	printf("Adult\n");
	//}
	//else
	//{
	//	printf("Student\n");
	//} 
	

	// 초등학생 (8-13) 중학생 (14-16) 고등학생(17-19)//

	/*
	int age = 23;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생\n");

	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생\n");
	}
	else if(age >= 17 && age <= 19)
	{
		printf("high school\n");
	}
	else
	{
		printf("Adult\n");
	}
	*/


	// break & continue//
	// From 1 to 30  only 1 to 5 gonna introduce //
	
	
	//for (int i = 1; i <= 30; i++)
	//{	
	//	if (i >= 6)
	//	{
	//		printf("You don't have to.\n");
	//		break;
	//	}
	//	printf("%d has to introduce yourself\n", i);
	//}
	

	// From 1 to 30  only 7 absent and except 7 from 6 to 10 needs to stay//
	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d has absented\n", i);
				continue;
			}
			printf("%d has to be here.\n", i);
		}
	}
	*/

	//&& || //
	
	
	//int a = 10;
	//int b = 16;
	//int c = 11;
	//int d = 12;
	//if (a == b || c == d)
	//{
	//	printf("a and b or c and d 's value are same\n ");
	//}
	//else
	//{
	//	printf("value is different\n");
	//}

	//가위 바위 보 0 1 2 //
	
	//srand(time(NULL));
	//int i = rand() % 3; // 0~2 반환
	
	/*
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");

	}
	else if (i == 2)
	{
		printf("보\n");
	}

	else
	{
		printf("x\n");
	}
	*/


	/*
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("S\n"); break;
	case 1: printf("R\n"); break;
	case 2: printf("p\n"); break;
	default: printf("x\n"); break;
	}
	*/

	/*
	int age = 18;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("Elementary sch student\n"); break;
	case 14:
	case 15:
	case 16: printf("Middle sch\n"); break;
	case 17:
	case 18:
	case 19:printf("High sch\n"); break;
	default: printf("Not student\n"); break;
	}
	*/

	// UP and DOWN project//
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 사이추출
	printf("NUM: %d \n", num);
	int answer ; // ans
	int chance = 5;// chance

	while (1)
	{
		printf("Rest chances : %d \n", chance--);
		printf("Guess the NUM 1~100\n\n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down ▽ \n\n");
		}
		else if (answer < num)
		{
			printf("UP △\n\n");
		}
		else if (answer = num)
		{
			printf("Correct!\n\n");
			break;
		}
		else
		{
			printf("Error");
		}
		if (chance == 0)
		{
			printf("Used all chances, you failed\n");
			break;
		}

	}
	return 0;
}
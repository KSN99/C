#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_random(void)
{	
	//srand(time(NULL)); //난수 초기화 
	//int num = rand() %3+1; //내가 뽑고싶은 수에 범위를 설정  1~3

	
	printf("난수 초기화 이전 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);

	}

	srand(time(NULL)); // 난수 초기화 
	printf("\n난수 초기화 이후 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10);

	}
	return 0;
}
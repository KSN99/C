#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	// 문이 5개가 있고 각문마다 점점 어려운 수식 퀴즈 출제 
	//문제를 맞추면 통과 , 틀리면 실패 

	srand(time(NULL));
	int count = 0; // 맞춘 문제 갯수 
	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d?\n", num1, num2)
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("End\n");
			exit(0); // 프로그램을 종료해라. 무조건 
		}
		else if (answer == num1 * num2)
		{
			//Success
			success();
			count++;
		}
		else
		{
			//fail
			fail();
		}
	}

	printf("\n\n 당신은 5개의 비밀번호중 %d 개를 맞췄습니다.\n", count);

	return 0;

}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n %d번째 비밀번호 \n\n", level);
	printf("\n\t%d x %d is?\n\n", num1, num2);
	printf("#####################\n");
	printf("\n Password  (End : -1)>>");
}

void success()
{
	printf("\n >> Correct!\n");
}

void fail()
{
	printf("\n >> Fail!\n");
}
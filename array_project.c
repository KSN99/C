#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	printf("\n\n === �ƺ��� ��Ӹ� ���� ===\n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ���� (0~3)

	int cntShowBottle = 0;// �̹� ���ӿ� ������ �� ���� 
	int prevCntShowBottle = 0; //�� ���ӿ� ������ �� ����
	//���� �����ִ� �������� �ٸ��� �Ͽ� ����� ��� 
	// 3���� ��ȸ (3���� �߸��� ���� �õ� )
	for (int i = 1;  i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 };//4���� �� 
		do {
			cntShowBottle = rand() % 2 + 2; //������ ������
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isincluded = 0; // ������ �� �߿��� �߸����� ���ԵǾ����� ����  (1: ����)
		printf(">%d��° �õ� :", i);
		// ������ �� ������ ���� 
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;//0-3

			// ���� ���õ��� ���� ���̸�, ���� ó�� . 
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isincluded = 1;
				}
			}
			// �̹� ���õ� ���̸� �ߺ��̹Ƿ� �ٽ� ���� 
			else
			{
				j--;
			}
		}
		//����ڿ��� ���� ǥ�� 
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf("%d", k + 1);
		}
		printf("������ �Ӹ��� �ٸ��ϴ�.\n\n");

		if (isincluded == 1)
		{
			printf(">> success ! \n");
		}
		else
		{
			printf("����\n")
				;
		}
		printf("\n, ��� �Ϸ��� �ƹ�Ű�� ��������");
		getchar();
	}
	
	printf("\n\n�߸����� �� ���ϱ��?");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n>> o \n");
	}
	else
	{
		printf("\n>> x the answer is %d.\n", treatment+1);
	}
	return 0;
}
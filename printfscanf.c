#include <stdio.h>
int main(void) 
{
	//������ ������ ���� ���� 
	/* age = 12;
	printf(" %d\n" ,age);
	age =13;
	printf("%d\n", age);

	/*
	�ּ� Annotation
	*/
	
	// �Ǽ��� ������ ���� ����

	/*float f = 46.5f;
	printf("%.2f\n", f); // .����f = ���ڴ� �Ҽ��� ���ڸ�
	                    // ������ ��Ÿ���ֶ�� �ǹ�
	double d = 4.428;
	printf("%.2lf\n", d);

	
	const int YEAR = 2000; // const ��� 
	printf("Birth year: %d\n", YEAR);
	*/

	//int add = 3 + 7;
	//printf("3+7= %d\n", add);
	//printf("%d+%d=%d\n", 3, 7, 3 + 7);
	//printf("%d x %d=%d\n", 3, 7, 3 * 7);

	//scanf=Ű���� �Է��� �޾� ����
	
	/*int input;
	printf("Put the value:");
	scanf_s("%d",&input);
	printf("Value: %d\n", input);
	*/

	//int one, two, three;
	//printf("put the three ints :");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("first value:%d\n", one);
	//printf("seocnd value:%d\n", two);
	//printf("third value:%d\n", three);
	
	// char & string
	//char c = 'a';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	// ������Ʈ
	//�������� �������� ������ �Լ� (�����ۼ�) 
	//�̸� ? ���Ƥ�? ������ ? Ű? ���˸�?

	char name[256];
	printf("What's your name?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("How old r u?");
	scanf_s("%d", &age);

	float weight;
	printf("How much is ur weight?");
	scanf_s("%f", &weight);

	double height;
	printf("How tall r u ? ");
	scanf_s("%lf", &height);

	char crime[256];
	printf("What did u do ? ");
	scanf_s("%s", crime, sizeof(crime));

	//���� ���� ���

	printf("\n\n---- ������ ����--\n\n");
	printf("name   :%s\n", name);
	printf("age    :%d\n", age);
	printf("Weight  : %.2f\n", weight);
	printf("Height    : %.1lf\n", height);
	printf("Crime    : %s\n", crime);
	return 0;

	       
}
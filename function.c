#include <stdio.h>

//����
void p(int num);

void function_without_return();

int function_with_return();

void function_without_params();

void function_wiht_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü���� ate�� �԰� ���� �� ��ȯ . 

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);



int main_function(void)
{
	//funcrtion//
	// ���� //

	//int num = 2;
	//printf("num is %d.\n", num);//
	//p(num);
	//num = num + 3; // num+=3
	//printf("num is %d.\n", num);//
	//p(num);
	//num -= 1;
	//printf("num is %d.\n", num);//
	//p(num);
	//num *= 3;
	//printf("num is %d.\n", num);//
	//p(num);
	//num /= 6;
	//printf("num is %d.\n", num);//
	//p(num);

	////////////////////////////////////////////////////////
	
	//�Լ� ���� //
	// ��ȯ ���� ���� �Լ�//
	//function_without_return();
	

	// ��ȯ���� �ִ� �Լ� // 
	/*
	int ret = function_with_return();
	p(ret);
	*/


	// �Ķ���� (���ް�)�� ���� �Լ� //

	//function_without_params();

	//�Ķ���Ͱ� �ִ� �Լ� //
	
	//function_wiht_params(3121423, 2, 3);

	// �Ķ���� (���ް�)�� �ް�, ��ȯ���� �ִ� �Լ� // 

	//int ret = apple(5, 2);//5���� ����� 2���� �Ծ��ٴ� �ǹ�. 
	//printf("��� 5�� �� 2���� ������ ? %d���� ���ƿ�.\n", ret);
	//printf("��� %d�� �߿� %d ���� ������? %d���� ���ƿ�.\n", 10,4, apple(10,4));


	//���� �Լ� // 
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	return 0;

}

// ���� //

void p(int num)
{
	printf("num is %d.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ�\n");
}

int function_with_return()
{
	printf("HAS return value.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ� \n");
}


void function_wiht_params(int num1, int num2, int num3)
{
	printf("Has parameter. Value are %d,%d,%d. \n", num1, num2, num3);
}

int apple(int total, int ate)
{	
	printf("���ް��� ��ȯ���� �ִ� �Լ� . \n");
	return total - ate;
}

/////////////////////////////////////////////////
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2; 
}

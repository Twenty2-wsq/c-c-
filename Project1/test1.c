#define _CRT_SECURE_NO_WARNINGS 1

//������

#define MAX 10000 //��define ����ı�ʶ����

#include<stdio.h>

extern int g_val; //����һ�±���

enum Sex  //��ö�ٳ���
{
	//����ö�����͵ı���δ�����ܵ�ȡֵ
	MALE,
	FEMALE,
	SECEET
};
int main()
{
	const int num = 10; //��const���εĳ���
	
	int m = MAX;

	printf("%d\n", g_val);
	printf("num = %d\n",num);  //��
	printf("m = %d\n",m);     //��

	enum Sex s = MALE;  //��

	return 0;
}

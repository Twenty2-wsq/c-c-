#define _CRT_SECURE_NO_WARNINGS 1

//常变量

#define MAX 10000 //③define 定义的标识常量

#include<stdio.h>

extern int g_val; //声明一下变量

enum Sex  //④枚举常量
{
	//这种枚举类型的变量未来可能的取值
	MALE,
	FEMALE,
	SECEET
};
int main()
{
	const int num = 10; //②const修饰的常量
	
	int m = MAX;

	printf("%d\n", g_val);
	printf("num = %d\n",num);  //②
	printf("m = %d\n",m);     //③

	enum Sex s = MALE;  //④

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
/*******************************常量*********************************/
//3.define 定义的标识符常量
#define MAX 10 

//4.枚举常量【一一列举】
//三原色：红黄蓝
//星期：1，2，3，4，5，6，7
enum Sex
{
	MALE,
	FEMALE,
	SECERT
};
enum Colour
{
	RED,
	YELLOW,
	BLUE
};

#include <stdio.h>
int main()
{
	enum Sex s = FEMALE;//枚举类型创建的变量-
	printf("%d\n", s);
	printf("%d\n", MAX);
	3;//1.字面常量
	//2,const修饰的常变量
	const int num = 4;
	//int num = 4;

	printf("%d\n", num);
	//num = 8;//不能改变了
	printf("%d\n",num);


	/******************************/
	const int n = 10;//n是变量，又有常属性[本质上是变量]常变量
	//int arr[n] = {0};
	//n = 100;
	//printf("%d\n", arr[10]);
	return 0;
}



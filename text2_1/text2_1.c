#define _CRT_SECURE_NO_WARNINGS 1
/*******************************����*********************************/
//3.define ����ı�ʶ������
#define MAX 10 

//4.ö�ٳ�����һһ�о١�
//��ԭɫ�������
//���ڣ�1��2��3��4��5��6��7
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
	enum Sex s = FEMALE;//ö�����ʹ����ı���-
	printf("%d\n", s);
	printf("%d\n", MAX);
	3;//1.���泣��
	//2,const���εĳ�����
	const int num = 4;
	//int num = 4;

	printf("%d\n", num);
	//num = 8;//���ܸı���
	printf("%d\n",num);


	/******************************/
	const int n = 10;//n�Ǳ��������г�����[�������Ǳ���]������
	//int arr[n] = {0};
	//n = 100;
	//printf("%d\n", arr[10]);
	return 0;
}



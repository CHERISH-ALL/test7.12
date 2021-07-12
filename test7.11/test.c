#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 0; a <=100; a++)
//	{
//		if (0 == ((a+1)%10)) 
//		{ 			
//			i++;
//		}
//		if (9==a/10)
//		{
//			i++;
//		}
//	}
//	printf("一共%d个",i);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	double sum = 0.0;
//	int c = 1;
//	for ( a = 1; a <=100; a++)
//	{
//		sum += c * 1.0 / a;
//			c = -c;
//	}
//	printf("结果为：%lf", sum);
//	return 0;
//}

//int main() 
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,0};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a <= 9; a++)
//	{
//
//		for (b = 1; b <= a; b++)
//		{
//			c = b * a;
//			printf("%d×%d=%-2d  ", a, b, c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void menu()
{
	printf("*********************************\n");
	printf("**********1.play 0.exit**********\n");
	printf("*********************************\n");
}
void game()
{
	printf("猜数字");
}
int main()
{
//	int a = 0;
//	int b = 0;//生成随机数b
//	int Y = 1;
//	int N = 0;
	int input = 0;
	//printf("请输入数字：\n");
	//scanf(a);
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	
	/*if (a > b)
	{
		printf("猜大了\n请再次输入");
		scanf(a);
	}
	else if (a < b)
	{
		printf("猜小了\n请再次输入");
		scanf(a);
	}
	else if (a = b)
	{
		printf("猜对了");
	}
	printf("是否再次游戏？(Y/N)\n");
	if (scanf(Y))
	{

	}
	if (scanf(N))
	{
		;
	}*/
	return 0;
}
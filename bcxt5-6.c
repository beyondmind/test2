/*在屏幕上显示如下菜单，依据用户输入的选项进行操作：
		1：计算一个数的平方
		2：计算一个数的立方
		3：计算两数的平方和
		Q：退出*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

void main()
{
	char choice='*';
	float x,y;
	while (choice!='Q')
	{
		system("cls");//清空屏幕显示内容
		//显示菜单选项
		printf("1：计算一个数的平方\n");
		printf("2：计算一个数的立方\n");
		printf("3：计算两数的平方和\n");
		printf("Q：退出\n");
		printf("请输入您的选择：\n");
		flushall();//清空缓冲区，防止缓冲区中的残留数据影响选择判断
		//输入选项
		choice=getchar();
		//将输入的选项符号转为大写
		if(islower(choice)) 
			choice=toupper(choice);
		//对于选项进行判断
		switch(choice)
		{
		case '1'://计算一个数的平方
			printf("请输入一个数：");
			scanf("%f",&x);
			printf("%f的平方为：%f\n",x,x*x);
			system("pause");//暂停程序执行
			//Sleep(2000);
			break;
		case '2'://计算一个数的立方
			printf("请输入一个数：");
			scanf("%f",&x);
			printf("%f的立方为：%f\n",x,x*x*x);
			system("pause");
			break;
		case '3'://计算两数的平方和
			printf("请输入两个数：");
			scanf("%f%f",&x,&y);
			printf("%f和%f的平方和为：%f\n",x,y,x*x+y*y);
			system("pause");
			break;
		case 'Q'://退出
			exit(0);//正常退出程序
		default://如果输入其他符号，则显示“选择错误”
			printf("选择错误\n");
			system("pause");
			break;
		}
	}
}



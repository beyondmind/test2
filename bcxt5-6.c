/*����Ļ����ʾ���²˵��������û������ѡ����в�����
		1������һ������ƽ��
		2������һ����������
		3������������ƽ����
		Q���˳�*/
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
		system("cls");//�����Ļ��ʾ����
		//��ʾ�˵�ѡ��
		printf("1������һ������ƽ��\n");
		printf("2������һ����������\n");
		printf("3������������ƽ����\n");
		printf("Q���˳�\n");
		printf("����������ѡ��\n");
		flushall();//��ջ���������ֹ�������еĲ�������Ӱ��ѡ���ж�
		//����ѡ��
		choice=getchar();
		//�������ѡ�����תΪ��д
		if(islower(choice)) 
			choice=toupper(choice);
		//����ѡ������ж�
		switch(choice)
		{
		case '1'://����һ������ƽ��
			printf("������һ������");
			scanf("%f",&x);
			printf("%f��ƽ��Ϊ��%f\n",x,x*x);
			system("pause");//��ͣ����ִ��
			//Sleep(2000);
			break;
		case '2'://����һ����������
			printf("������һ������");
			scanf("%f",&x);
			printf("%f������Ϊ��%f\n",x,x*x*x);
			system("pause");
			break;
		case '3'://����������ƽ����
			printf("��������������");
			scanf("%f%f",&x,&y);
			printf("%f��%f��ƽ����Ϊ��%f\n",x,y,x*x+y*y);
			system("pause");
			break;
		case 'Q'://�˳�
			exit(0);//�����˳�����
		default://��������������ţ�����ʾ��ѡ�����
			printf("ѡ�����\n");
			system("pause");
			break;
		}
	}
}



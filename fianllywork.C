#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define LEN sizeof(flower)
#define N 50
typedef struct flower     //����ṹ��
{  
  char num[20];    //���ܱ��
  char name[20]; //��������
  char family[20]; //���ܿ���
  float price; //���ܼ۸�
}flower;
void Menu();//���˵�
void Add();//���뻨����Ϣ 
void Scan();//���������Ϣ 
void delet();//ɾ��������Ϣ
void modify();//�޸Ļ�����Ϣ 
void Menu()
{
	system("color F4");
	printf("**********************************\n");
	printf("* 1.���뻨����Ϣ  2.���������Ϣ *\n");
	printf("* 3.ɾ��������Ϣ  4.�޸Ļ�����Ϣ *\n");
	printf("* 0.�˳�����                     *\n"); 
	printf("* ��ѡ����Ҫ���еĲ���������0~4��*\n"); 
	printf("**********************************\n");
}// ���˵� 
void Add()//���뻨����Ϣ 
{ 
	FILE *fp=NULL;
	flower blossom;
	char flag='Y';
	fp = fopen("flower.txt","ab+");//�Զ�������ʽ���ļ��������ļ�׷������ 
	if(fp==NULL)
	{
		printf("Failure to open text��");
		exit(0);
	}
	while((flag =='Y'))
	{
		system("cls");//����˵��� 
		
		printf("�����뻨�ܱ��:");//���뻨����Ϣ 
		scanf("%s",blossom.num);
		printf("�����뻨������:");
		scanf("%s",blossom.name);
		printf("�����뻨�ܿ���:");
		scanf("%s",blossom.family);
		printf("�����뻨�ܼ۸�:");
		scanf("%f",&blossom.price);
		fwrite(&blossom,LEN,1,fp);
		printf("�Ƿ�������룿����������Y:");
		getchar();
		scanf("%c",&flag);
	}
	fclose(fp);//�ر��ļ� 
	system("cls");
}
void  Scan()//���������Ϣ
{
    system("cls");
	FILE *fp = NULL;
	flower blossom;
	fp = fopen("flower.txt", "rb");//�����ƴ�ֻ���ļ� 
	if (fp == NULL)
	{
		printf("�ļ���ʧ��");
		exit(1);
	}

	printf("         ���ܱ��\t\t��������\t\t���ܿ���\t\t���ܼ۸�\n");

	fseek(fp, 0, SEEK_SET);//ָ���ļ���ͷ 

	while (!feof(fp))
	{
		if (fread(&blossom, LEN, 1, fp))//���ļ����뵽�ṹ����� blossom 
		{
			printf("\t%7s\t%20s\t\t%13s\t\t%18f\n",blossom.num, blossom.name, blossom.family,blossom.price);
		}
	}

	system("pause");
	system("cls");
	fclose(fp);
	return;
}
void delet()//ɾ��������Ϣ 
{
		system("cls");
		Menu();
		flower s;//����ṹ����� 
		FILE* fp;
		char a[10]; 
		fp = fopen("flower.txt", "rb+");//�����ƴ򿪶�д�ļ� 
		if (fp == NULL)
		{
			printf("�ļ���ʧ��\n");
			exit(1);
		}
		printf("\n�����뻨�ܱ�ţ�");
		scanf("%s", a);
		printf("\n\t\t\tɾ���ɹ�\n");
	
		fseek(fp, 0, SEEK_SET);//���ļ�ָ��ָ���ļ��Ŀ�ͷ
		FILE* fp1;
		fp1 = fopen("linshi.dat", "ab+");//��д�½�һ����ʱ�ļ�
	
		while (fread(&s, LEN, 1, fp))//��ԭ�ļ������� 
		{
			if (strcmp(a, s.num) != 0)//��ɾ�������� 
			{
				fwrite(&s, LEN, 1, fp1);
			}
		}
	
		fclose(fp);
		fclose(fp1);
		remove("flower.txt");//ɾ��ԭ�ļ�
		rename("linshi.dat","flower.txt");//������Ϊԭ�ļ�
		fflush(stdin);//������뻺����
		system("pause");
		system("cls");
		return;
}
void modify()
{
	system("cls");
	Menu();
	flower blossom;
	FILE *fp;
	char x[8];
	printf("�����뻨�ܱ��:");
	scanf("%s", x);

	fp = fopen("flower.txt", "rb+");//�����ƴ򿪶�д�ļ� 

	if (fp == NULL)
	{
		printf("�ļ���ʧ��");
		exit(1);
	}

	fseek(fp, 0, SEEK_SET);//ָ���ļ���ͷ 
	while (fread(&blossom, LEN, 1, fp))
	{

		if (strcmp(x, blossom.num) == 0)//�Ƚϣ������ͬ�����������޸ĺ����� 
		{
			printf("���������뻨�ܱ��:   ");
			scanf("%s", &blossom.num);
			
			printf("���������뻨������:    ");
			scanf("%s", &blossom.name);

			printf("���������뻨�ܿ���  : ");
			scanf("%s", &blossom.family);

			printf("���������뻨�ܼ۸� :   ");
			scanf("%f", &blossom.price);
			fflush(stdin);
			fseek(fp,LEN, SEEK_CUR);//���ļ�ָ��ӵ�ǰλ���˻ص�ָ��λ�� 
			fwrite(&blossom, 0-LEN, 1, fp);//����д������ 
			fclose(fp);
		}
		if (feof(fp))
		{
			printf("û�л�����Ϣ");
		}
	}
	system("pause");
	system("cls");
	return;
}

int main()
{
	int select;
	do
 {
	Menu();
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			Add();
			break;
		case 2:
			Scan();
			break;
		case 3:
			delet();
			break;
		case 4:
			modify();
			break;
	    default :
	    	printf("�˳�����");
	    	exit(1);
	    	break;
	    	
	}
 }while(select==1||select==2||select==3||select==4||select==5);//��switch���ѡ������ 
 return 0; 
} 

	
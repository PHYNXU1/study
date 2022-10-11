#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define LEN sizeof(flower)
#define N 50
typedef struct flower     //定义结构体
{  
  char num[20];    //花卉编号
  char name[20]; //花卉名称
  char family[20]; //花卉科属
  float price; //花卉价格
}flower;
void Menu();//主菜单
void Add();//输入花卉信息 
void Scan();//浏览花卉信息 
void delet();//删除花卉信息
void modify();//修改花卉信息 
void Menu()
{
	system("color F4");
	printf("**********************************\n");
	printf("* 1.输入花卉信息  2.浏览花卉信息 *\n");
	printf("* 3.删除花卉信息  4.修改花卉信息 *\n");
	printf("* 0.退出程序                     *\n"); 
	printf("* 请选择你要进行的操作（输入0~4）*\n"); 
	printf("**********************************\n");
}// 主菜单 
void Add()//输入花卉信息 
{ 
	FILE *fp=NULL;
	flower blossom;
	char flag='Y';
	fp = fopen("flower.txt","ab+");//以二进制形式打开文件并且向文件追加数据 
	if(fp==NULL)
	{
		printf("Failure to open text！");
		exit(0);
	}
	while((flag =='Y'))
	{
		system("cls");//清除菜单栏 
		
		printf("请输入花卉编号:");//输入花卉信息 
		scanf("%s",blossom.num);
		printf("请输入花卉名称:");
		scanf("%s",blossom.name);
		printf("请输入花卉科属:");
		scanf("%s",blossom.family);
		printf("请输入花卉价格:");
		scanf("%f",&blossom.price);
		fwrite(&blossom,LEN,1,fp);
		printf("是否继续输入？继续请输入Y:");
		getchar();
		scanf("%c",&flag);
	}
	fclose(fp);//关闭文件 
	system("cls");
}
void  Scan()//浏览花卉信息
{
    system("cls");
	FILE *fp = NULL;
	flower blossom;
	fp = fopen("flower.txt", "rb");//二进制打开只读文件 
	if (fp == NULL)
	{
		printf("文件打开失败");
		exit(1);
	}

	printf("         花卉编号\t\t花卉名称\t\t花卉科属\t\t花卉价格\n");

	fseek(fp, 0, SEEK_SET);//指向文件开头 

	while (!feof(fp))
	{
		if (fread(&blossom, LEN, 1, fp))//将文件读入到结构体变量 blossom 
		{
			printf("\t%7s\t%20s\t\t%13s\t\t%18f\n",blossom.num, blossom.name, blossom.family,blossom.price);
		}
	}

	system("pause");
	system("cls");
	fclose(fp);
	return;
}
void delet()//删除花卉信息 
{
		system("cls");
		Menu();
		flower s;//定义结构体变量 
		FILE* fp;
		char a[10]; 
		fp = fopen("flower.txt", "rb+");//二进制打开读写文件 
		if (fp == NULL)
		{
			printf("文件打开失败\n");
			exit(1);
		}
		printf("\n请输入花卉编号：");
		scanf("%s", a);
		printf("\n\t\t\t删除成功\n");
	
		fseek(fp, 0, SEEK_SET);//把文件指针指向文件的开头
		FILE* fp1;
		fp1 = fopen("linshi.dat", "ab+");//读写新建一个临时文件
	
		while (fread(&s, LEN, 1, fp))//从原文件读内容 
		{
			if (strcmp(a, s.num) != 0)//非删除的内容 
			{
				fwrite(&s, LEN, 1, fp1);
			}
		}
	
		fclose(fp);
		fclose(fp1);
		remove("flower.txt");//删除原文件
		rename("linshi.dat","flower.txt");//重命名为原文件
		fflush(stdin);//清空输入缓冲区
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
	printf("请输入花卉编号:");
	scanf("%s", x);

	fp = fopen("flower.txt", "rb+");//二进制打开读写文件 

	if (fp == NULL)
	{
		printf("文件打开失败");
		exit(1);
	}

	fseek(fp, 0, SEEK_SET);//指向文件开头 
	while (fread(&blossom, LEN, 1, fp))
	{

		if (strcmp(x, blossom.num) == 0)//比较，如果相同则重新输入修改后内容 
		{
			printf("请重新输入花卉编号:   ");
			scanf("%s", &blossom.num);
			
			printf("请重新输入花卉名称:    ");
			scanf("%s", &blossom.name);

			printf("请重新输入花卉科属  : ");
			scanf("%s", &blossom.family);

			printf("请重新输入花卉价格 :   ");
			scanf("%f", &blossom.price);
			fflush(stdin);
			fseek(fp,LEN, SEEK_CUR);//把文件指针从当前位置退回到指定位置 
			fwrite(&blossom, 0-LEN, 1, fp);//重新写入内容 
			fclose(fp);
		}
		if (feof(fp))
		{
			printf("没有花卉信息");
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
	    	printf("退出程序！");
	    	exit(1);
	    	break;
	    	
	}
 }while(select==1||select==2||select==3||select==4||select==5);//以switch语句选择需求 
 return 0; 
} 

	

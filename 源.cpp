#include <stdio.h>
#include <string.h>

int main()
{
	char filelocation1[100], filelocation2[100], filelocation3[100], file0[300] = { '%','2','F' }, link[1000] = {'\0'};
	char  link1[1000] = { '\0' }, link2[1000] = { '\0' }, link3[1000] = { '\0' }, link4[1000] = { '\0' }, link5[1000] = { '\0' };
	printf("请输入文件所在路径，文件夹不得堆叠超过3层，路径内的字符应为字母和数字的组合且长度不得超过100\n");
	printf("每输入一个文件夹/文件名后按一次回车\n");
	gets_s(filelocation1);
	gets_s(filelocation2);
	gets_s(filelocation3);
	if (filelocation2[0] == '\0')
		{
			strcat(file0, filelocation1);
		}
	else if (filelocation3[0] == '\0')
	{
		strcat(file0, filelocation1);
		strcat(file0, "%2F");
		strcat(file0, filelocation2);
	}
	else
	{
		strcat(file0, filelocation1);
		strcat(file0, "%2F");
		strcat(file0, filelocation2);
		strcat(file0, "%2F");
		strcat(file0, filelocation3);
	}
	strcat(link, "https://pcs.baidu.com/rest/2.0/pcs/file?method=download&path=");
	strcat(link, file0);
	strcat(link, "&app_id=");
	strcpy(link1, link);
	strcpy(link2, link);
	strcpy(link3, link);
	strcpy(link4, link);
	strcpy(link5, link);
	strcat(link1, "250528");
	strcat(link2, "265486");
	strcat(link3, "309847");
	strcat(link4, "266719");
	strcat(link5, "778750");
	puts(link1);
	printf("----------------------------------------------------------------------\n");
	puts(link2);
	printf("----------------------------------------------------------------------\n");
	puts(link3);
	printf("----------------------------------------------------------------------\n");
	puts(link4);
	printf("----------------------------------------------------------------------\n");
	puts(link5);
	printf("----------------------------------------------------------------------\n");
	printf("生成了5个链接，请选中以后按鼠标右键复制，逐个尝试选取可行、最快的链接");
	printf("\n\n");
	return 0;
}
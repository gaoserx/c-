#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//文件的打开
	FILE* fp = fopen("D:\\编程垃圾堆\\C\\test\\test\\test.txt", "w+");

	//文件的输出
	fputc('b', fp);
	fputc('i', fp);
	fputc('t', fp);

	//文件的输入
	fseek(fp, 0, SEEK_SET);
	int ch;
	if (fp != EOF)
	{
		ch = fgetc(fp);
		printf("%c", ch);
		ch = fgetc(fp);
		printf("%c", ch);
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	//文件的关闭
	fclose(fp);
	fp = NULL;
	return 0;
}
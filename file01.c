#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//�ļ��Ĵ�
	FILE* fp = fopen("D:\\���������\\C\\test\\test\\test.txt", "w+");

	//�ļ������
	fputc('b', fp);
	fputc('i', fp);
	fputc('t', fp);

	//�ļ�������
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
	//�ļ��Ĺر�
	fclose(fp);
	fp = NULL;
	return 0;
}
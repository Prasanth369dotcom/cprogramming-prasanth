#include<stdio.h>
#include<conio.h>
void main()
{
	int string_ln(char*);
	char str[20];
	int length;
	printf("\n enter any string:");
	gets(str);
	length=string_ln(str);
	printf("the length of the given string%s is:%d",str,length);
	getch();
}
int string_ln (char*p)
{
	int count=0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}

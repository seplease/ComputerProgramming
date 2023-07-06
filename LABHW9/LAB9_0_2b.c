#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h> 
#include <ctype.h> //문자처리 함수 사용을 위해
#include <conio.h>
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	while ((c = fgetc(stdin)) != EOF)
	{
		if (isupper(c))
			fputc(tolower(c), stdout);
		else if (islower(c))
			fputc(toupper(c), stdout);
		else
			fputc(c, stdout);
	}
}
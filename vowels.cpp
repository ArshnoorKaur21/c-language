//program
#include<stdio.h>
main()
{
	char n;
	printf("whether letter is vowel or not");
	scanf("%c",&n);
	switch(n)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'U':
		case 'O':
		printf("letter is a vowel");
				break;
		default:printf("letter is not a vowel");
	}
	return 0;
}


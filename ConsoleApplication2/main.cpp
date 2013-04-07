#include "Sponsor.h"
#include <vld.h>

int main()
{
	char stroka[10];
	stroka[2] = 'c';
	delete stroka;
	printf("%s\n", stroka);
	return 0;
}
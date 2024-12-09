#include <stdio.h>

int main(void) {
	char szName[10] = { 0 };
	printf("이름을 입력해주세요: ");
	gets(szName);
	puts(szName);
}
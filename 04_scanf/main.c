#include <stdio.h>

int main(void) {
	char ch = 0;
	scanf_s("%c", &ch, 1);
	printf("입력한 문자는 %c", ch);
	return 0;
}
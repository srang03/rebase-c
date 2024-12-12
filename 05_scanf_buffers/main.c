#include <stdio.h>

int main(void) {
	char chars[4] = { 0 };
	int count = sizeof(chars) / sizeof(char);
	scanf_s("%4c", chars, count);
	
	for (int i = 0; i < count; i++) {
		printf("%c", chars[i]);
	}
}
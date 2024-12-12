#include <stdio.h>

int main(void) {
	int age;
	char name[10] = { 0 };

	printf("input age: ");
	scanf_s("%d%*c", &age);

	printf("input name: ");
	gets_s(name, sizeof(name));
	printf("%d %s", age, name);
	return 0;
}
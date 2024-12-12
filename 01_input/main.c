#include	<stdio.h>

// 사용자로부터 이름과 나이를 키보드로 입력 받아 출력하는 프로그램 작성
// 이름은 gets_s()
// 나이는 scanf_s()
// 출력은 printf()
int main(void) {
	int age;
	char name[32] = { 0 };
	
	int count = sizeof(name) / sizeof(name[0]);

	printf("Input your name: ");
	gets_s(name, count);

	printf("Input your age: ");
	scanf_s("%d%*c", &age);

	printf("your name is %s (%d)", name, age);
	return 0;
}
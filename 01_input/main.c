#include	<stdio.h>

// ����ڷκ��� �̸��� ���̸� Ű����� �Է� �޾� ����ϴ� ���α׷� �ۼ�
// �̸��� gets_s()
// ���̴� scanf_s()
// ����� printf()
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
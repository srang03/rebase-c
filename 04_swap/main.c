#include <stdio.h>

// �� ������ ���� ��ȯ�ϴ� �ڵ带 �ۼ��Ѵ�.
// ����ڷκ��� �� ������ �Է� �޾� ������ int�� ���� a, b�� �����ϰ�
// �ӽú��� temp�� ���� a, b ���� ��ȯ�Ͽ� ����ϴ� ���α׷� �ۼ�
int main(void) {

	int a, b, temp;

	scanf_s("%d%d", &a, &b);
	temp = a;
	a = b;
	b = temp;

	printf("a:%d b:%d", a, b);
}
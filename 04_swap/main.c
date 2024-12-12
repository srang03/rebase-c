#include <stdio.h>

// 두 변수의 값을 교환하는 코드를 작성한다.
// 사용자로부터 두 정수를 입력 받아 각각을 int형 변수 a, b에 저장하고
// 임시변수 temp를 통해 a, b 값을 교환하여 출력하는 프로그램 작성
int main(void) {

	int a, b, temp;

	scanf_s("%d%d", &a, &b);
	temp = a;
	a = b;
	b = temp;

	printf("a:%d b:%d", a, b);
}
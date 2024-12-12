#include <stdio.h>

// 사용자로부터 두 정수를 입력 받아 평균을 출력하는 예제
// 입력은 반드시 scanf_s() 함수를 사용하고 출력은 printf() 함수를 사용
// 평균 값 출력시 반드시 소수점 둘째 자리까지만 표시한다.

int main(void) {
	int x, y;
	scanf_s("%d%d", &x, &y);
	printf("%.2lf", (x + y) / 2.0);
	return 0;
}
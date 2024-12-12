#include <stdio.h>

// 사용자로부터 정수 초(seconds)를 입력 받아 "시:분:초" 형식으로 출력하라
// 시, 분, 초 정보는 모두 두 자리 정수로 표시하고 한자리 숫자의 경우 앞에 0을 붙여 출력한다.

int main(void) {

	int nSeconds, seconds, mins, hours, reminder;

	scanf_s("%d", &nSeconds);

	hours = nSeconds / (60 * 60);
	reminder = nSeconds % (60 * 60);
	mins = reminder / 60;
	seconds = reminder % 60;

	printf("%02d:%02d:%02d\n", hours, mins, seconds);
	return 0;
}
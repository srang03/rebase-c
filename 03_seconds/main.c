#include <stdio.h>

// ����ڷκ��� ���� ��(seconds)�� �Է� �޾� "��:��:��" �������� ����϶�
// ��, ��, �� ������ ��� �� �ڸ� ������ ǥ���ϰ� ���ڸ� ������ ��� �տ� 0�� �ٿ� ����Ѵ�.

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
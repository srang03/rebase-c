#include <stdio.h>

#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))

int main(void) {

	char szBuffer[32] = { 0 };
	int count = (unsigned)_countof(szBuffer);

	scanf_s("%s", szBuffer, count);
	printf("%s\n", szBuffer);

	char szLeftBuffer[32] = { 0 };
	char szRightBuffer[32] = { 0 };

	scanf_s("%s", szLeftBuffer, count);
	printf("%s\n", szLeftBuffer);
	return 0;
}
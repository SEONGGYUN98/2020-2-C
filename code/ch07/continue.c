#include<stdio.h>

int main(void) {
	const int MAX = 15;

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 0; i <= MAX; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%3d", i);
	}
	puts("");

	return 0;
}
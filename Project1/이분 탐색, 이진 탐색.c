#include<stdio.h>
#include<stdlib.h>
//�̺� Ž��, ���� Ž�� : ���ĵ� �迭 �� ������ ã��

int S[100] = {5,7,33,66,67,88,99,120,134,156,201}, n, k;
int binarysearch(int s, int e) {//start end
	while (s <= e) {
		int m = (s + e) / 2;//m�� middle
		if (S[m] == k)return m;//ã�� �迭�� �ε���(��ġ)
		if (S[m] > k)e = m - 1;
		else s = m + 1;
	}
	return -1;
}
int main() {
	printf("�˻��� ���� �Է� : ");
	scanf_s("%d", &k);
	printf("[%d]��°���� �߰�\n", binarysearch(0, 10));
}
#include <stdio.h>
#pragma warning(disable:4996)
void Card();
int main() {
	int n;
	char card[20][20], A, B;
	printf("ī�� ���� �Է� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("���ܾ� �Է� : ");
		scanf(" %s", card[i]);
	}
	printf("A�� �� ���ĺ� : ");
	scanf(" %c", &A);
	printf("B�� �� ���ĺ� : ");
	scanf(" %c", &B);
	if (A == B) return 0;
	Card(n,card,A,B);
}
void Card(int n, char c[][20],char A,char B) {
	for (int i = 0; i < n; i++) {
		if (c[i][0] == A || c[i][0] == A + 32) {
			printf("A �¸�"); return 0;
		}
		else if (c[i][0] == B || c[i][0] == B + 32) {
			printf("B �¸�"); return 0;
		}
	}
	printf("%c %c\n\n", A+32, B+32);
	printf("���º�");
}
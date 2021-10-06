#include <stdio.h>
#pragma warning(disable:4996)
void Card();
int main() {
	int n;
	char card[20][20], A, B;
	printf("카드 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("영단어 입력 : ");
		scanf(" %s", card[i]);
	}
	printf("A가 고른 알파벳 : ");
	scanf(" %c", &A);
	printf("B가 고른 알파벳 : ");
	scanf(" %c", &B);
	if (A == B) return 0;
	Card(n,card,A,B);
}
void Card(int n, char c[][20],char A,char B) {
	for (int i = 0; i < n; i++) {
		if (c[i][0] == A || c[i][0] == A + 32) {
			printf("A 승리"); return 0;
		}
		else if (c[i][0] == B || c[i][0] == B + 32) {
			printf("B 승리"); return 0;
		}
	}
	printf("%c %c\n\n", A+32, B+32);
	printf("무승부");
}
#include <stdio.h>
#pragma warning(disable:4996)
void Card();
int main() {
	int n;
	char card[20][20], A[2];
	printf("알파벳 두 개 : ");
	scanf(" %c %c", &A[0],&A[1]);
	printf("영단어 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("영단어 입력 : ");
		scanf(" %s", card[i]);
	}
	if (A[0] == A[1]) return 0;
	Card(n, card, A);
}
void Card(int n, char c[][20],char A[]) {
	int cnt=0,len;
	for (int i = 0; i < n; i++) {
		for (int j = 0;; j++) {
			if (c[i][j] == '\0') {
				len = j-1; break;
			}
		}
		if ((c[i][0] == A[0] || c[i][0] == A[0] + 32)&& (c[i][len] == A[1] || c[i][len] == A[1] + 32)) {
			cnt++;
		}
		else if ((c[i][0] == A[1] || c[i][0] == A[1] + 32) && (c[i][len] == A[0] || c[i][len] == A[0] + 32)) {
			cnt++;
		}
	}
	if (cnt == 0)
		printf("해당되는 영단어가 없음\n");
	else
		printf("%d", cnt);
}
#include <stdio.h>
#pragma warning(disable:4996)
int Solution(int scores[], int scores_len);
main() {
	int N, scores[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &scores[i]);
	}
	printf("%d",Solution(scores, N));
}
int Solution(int scores[],int scores_len) {
	int cnt=0;
	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 650 && scores[i] < 800) {
			cnt++;
		}
	}
	return cnt;
}
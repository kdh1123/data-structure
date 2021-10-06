#include <stdio.h>
#pragma warning(disable:4996)
void CheckNum();
int main() {
	int D, N;
	scanf("%d", &D);
	scanf("%d", &N);
	CheckNum(D,N);
}
void CheckNum(int D,int N) {
	int y1, y2, m1, m2, d1, d2;
	N = N % 1000000;
	y1 = D / 10000; D = D % 10000; m1 = D / 100; D = D % 100; d1 = D / 1;
	y2 = N / 10000; N = N % 10000; m2 = N / 100; N = N % 100; d2 = N / 1;
	if (y1 == y2) {
		if (m1 == m2) {
			if(d1 == d2) {
				printf("New");
			}
			else if (d1 > d2) printf("Old");
		}
		else if (m1 > m2) printf("Old");
	}
	else if (y1 > y2) printf("Old");
	else printf("-ERROR-");
}
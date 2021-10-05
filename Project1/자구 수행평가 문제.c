#include <stdio.h>
#pragma warning(disable:4996)
int Goldbach(int n[],int cnt);
int Prime(int n);
int main() {
	int n[99999],cnt=0;
	for (int i = 0;; i++) {
		scanf("%d", &n[i]);
		if (n[i] == 0)break;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		Golbach(n, i);
	}
}
int Golbach(int n[],int cnt){
	for (int i = 2; i < n[cnt]; i++) {
		for (int j = 2; j < n[cnt]; j++) {
			if (Prime(i) + Prime(j) == n[cnt]) {
				printf("%d = %d + %d\n", n[cnt], Prime(i), Prime(j));
				return 0;
			}
		}
	}
}
int Prime(int n) {
	int p;
	for (p = 2; p < n; p++) {
		if (n % p == 0) return 0;
	}
	return n;
}
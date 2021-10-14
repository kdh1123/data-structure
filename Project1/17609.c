#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n,len,l=0,r,boolen;
	char arr[30][100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %s", arr[i]);
	}
	for (int i = 0; i < 30; i++) {
		l = 0;
		for (int j = 0; j < 100000; j++) {
			if (arr[i][j] == '\0') {
				len = j - 1; break;
			}
		}
		while (1) {
			
		}
		
	}
}
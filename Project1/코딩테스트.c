#include <stdio.h>
int main() {
	int n, H = 0, M = 0, S = 0, t = 0, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < ((n + 1) * 60 * 60); i++) {
		t = i;
		H = t / (60 * 60);
		t -= H * 60 * 60;
		M = t / 60;
		t -= M * 60;
		S = t;
		if (H / 10 == 3) {
			cnt++;
		}
		if (H % 10 == 3) {
			cnt++;
		}
		if (M / 10 == 3) {
			cnt++;
		}
		if (M % 10 == 3) {
			cnt++;
		}
		if (S / 10 == 3) {
			cnt++;
		}
		if (S % 10 == 3) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
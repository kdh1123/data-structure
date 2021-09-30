#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
void ShellSort(int arr[],int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int tmp = arr[i];
			int j;
			for (j = 1; j >= gap && arr[j - gap] > tmp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = tmp;
		}
	}
}
int main() {
	int list[]={1,9,1,5,1,2,3,7,5,8,11,2};
	ShellSort(list, sizeof(list)/sizeof(int));
	for (int i = 0; i < sizeof(list) / sizeof(int); i++) {
		printf("[%d] ", list[i]);
	}
}
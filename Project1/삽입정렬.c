#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int InsertSort(int arr[],int n) {
	int i, j, tmp;
	for (int i = 1; i < n; i++) {
		tmp = arr[i];
		printf("결과 ");
		for (int t = 0; t < n; t++) {
			printf("[%d] ", arr[t]);
		}
		printf("\n\n");
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--) {
			arr[j + 1] = arr[j];
			printf("교환 ");
			for (int t = 0; t < n; t++) {
				printf("[%d] ", arr[t]);
			}
			printf("\n\n");
		}
		arr[j + 1] = tmp;
	}
}
int main() {
	int list[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &list[i]);
	}
	InsertSort(list, sizeof(list)/sizeof(int));
	printf("결과 ");
	for (int t = 0; t < sizeof(list) / sizeof(int); t++) {
		printf("[%d] ", list[t]);
	}
	return 0;
}
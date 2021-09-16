#include<stdio.h>
#include<stdlib.h>
//이분 탐색, 이진 탐색 : 정렬된 배열 속 데이터 찾기

int S[100] = {5,7,33,66,67,88,99,120,134,156,201}, n, k;
int binarysearch(int s, int e) {//start end
	while (s <= e) {
		int m = (s + e) / 2;//m은 middle
		if (S[m] == k)return m;//찾은 배열의 인덱스(위치)
		if (S[m] > k)e = m - 1;
		else s = m + 1;
	}
	return -1;
}
int main() {
	printf("검색할 숫자 입력 : ");
	scanf_s("%d", &k);
	printf("[%d]번째에서 발견\n", binarysearch(0, 10));
}
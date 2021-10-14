#include <stdio.h>
#pragma warning(disable:4996)
# define MAX_SIZE 5
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
int n = 7,cnt=0;
int arr[10];
void quicksort(int arr[], int left, int right) {
	cnt++;
	if (left >= right) {
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;

	while (i <= j) {//i�� j������ ������
		while (arr[i] <= arr[pivot]) {
			i++;
		}
		while (arr[j] >= arr[pivot] && j > left) {
			j--;
		}
	if (i > j)//i�� j�� ũ�ν� �Ǿ��� ���,
		SWAP(arr[j], arr[pivot], temp);
	else//i�� j���� ���� ���� pivot�� ��ȯ���� ����
		SWAP(arr[i], arr[j], temp);

	}
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	quicksort(arr, left, j - 1);
	quicksort(arr, j+1, right);
}
int main() {
	for (int t = 0; t < 7; t++) {
		scanf("%d", &arr[t]);
	}
	quicksort(arr, 0, n - 1);
	for (int t = 0; t < 7; t++) {
		printf("%d ", arr[t]);
	}
	printf("[%d]", cnt);
	return 0;
}


//���ͳ� �ڵ�

//// 1. �ǹ��� �������� 2���� �κ� ����Ʈ�� ������.
//// 2. �ǹ����� ���� ���� ��� ���� �κ� ����Ʈ��, ū ���� ������ �κ� ����Ʈ�� �ű��.
///* 2���� ��յ� �迭 list[left...pivot-1]�� list[pivot+1...right]�� �պ� ���� */
///* (������ ���ڵ��� ���ĵǴ� ����) */
//int partition(int list[], int left, int right) {
//    int pivot, temp;
//    int low, high;
//
//    low = left;
//    high = right + 1;
//    pivot = list[left]; // ������ ����Ʈ�� ���� ���� �����͸� �ǹ����� ����(������ ���� �ǹ����� ����)
//
//    /* low�� high�� ������ ������ �ݺ�(low<high) */
//    do {
//        /* list[low]�� �ǹ����� ������ ��� low�� ���� */
//        do {
//            low++; // low�� left+1 ���� ����
//        } while (low <= right && list[low] < pivot);
//
//        /* list[high]�� �ǹ����� ũ�� ��� high�� ���� */
//        do {
//            high--; //high�� right ���� ����
//        } while (high >= left && list[high] > pivot);
//
//        // ���� low�� high�� �������� �ʾ����� list[low]�� list[high] ��ȯ
//        if (low < high) {
//            SWAP(list[low], list[high], temp);
//        }
//    } while (low < high);
//
//    // low�� high�� ���������� �ݺ����� �������� list[left]�� list[high]�� ��ȯ
//    SWAP(list[left], list[high], temp);
//
//    // �ǹ��� ��ġ�� high�� ��ȯ
//    return high;
//}
//
//// �� ����
//void quick_sort(int list[], int left, int right) {
//
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf("%d ", list[i]);
//    }
//    printf("\n");
//
//    /* ������ ������ 2�� �̻��� �������̸�(����Ʈ�� ũ�Ⱑ 0�̳� 1�� �ƴϸ�) */
//    if (left < right) {
//        // partition �Լ��� ȣ���Ͽ� �ǹ��� �������� ����Ʈ�� ��յ� ���� -����(Divide)
//        int q = partition(list, left, right); // q: �ǹ��� ��ġ
//
//        // �ǹ��� ������ 2���� �κ� ����Ʈ�� ������� ��ȯ ȣ��
//        quick_sort(list, left, q - 1); // (left ~ �ǹ� �ٷ� ��) ���� �κ� ����Ʈ ���� -����(Conquer)
//        quick_sort(list, q + 1, right); // (�ǹ� �ٷ� �� ~ right) ���� �κ� ����Ʈ ���� -����(Conquer)
//    }
//
//}
//
//void main() {
//    int i;
//    int n = MAX_SIZE;
//    int list[MAX_SIZE] = { 5, 4,3,1,2 };
//
//    // �� ���� ����(left: �迭�� ���� = 0, right: �迭�� �� = 8)
//    quick_sort(list, 0, n - 1);
//
//    // ���� ��� ���
//    for (i = 0; i < n; i++) {
//        printf("%d ", list[i]);
//    }
//}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
//ť
void menu() {
	printf("\n-----------------------------------------------\n");
	printf("1�� ť�� ����(push) 2�� ť���� ����(pop)\n");
	printf("3�� ���� ����(display) 4�� ���α׷� ����(exit)\n");
	printf("\n-----------------------------------------------\n");
}
int queue[SIZE];
void enqueue(int* back, int item) {//ť�� ������ ����
	if (*back == 4) {
		printf("ť�� ������\n");
		return;
	}
	queue[++ * back]= item;
}
int dequeue(int * front, int back) {
	if (*front == back) {
		//ť�� �����
		return -1;
	}
	return queue[++ * front];
}
int main() {
	int val, n;
	printf("*****ť ���� �޴�*****\n");
	while (1) {
		menu();
		printf("\n�޴��� �����ϼ��� : \n"); scanf("%d", &n);
		switch (n) {
		case 1://push
			printf("ť�� ������ ���� :"); scanf("%d", &n);
			enqueue(n);
			break;
		case 2://pop
			dequeue();
			break;
		case 3://display
			display();
			break;
		case 4://exit
			return 0;
			break;
		default:
			printf("�ٽ� �Է��ϼ���");
		}
	}

}
//int stack[SIZE];
////����
//void push(int);
//void pop();
//int top = -1;
// //void menu() {
//	printf("\n-----------------------------------------------\n");
//	printf("1�� ���ÿ� ����(push) 2�� ���ÿ��� ����(pop)\n");
//	printf("3�� ���� ����(display) 4�� ���α׷� ����(exit)\n");
//	printf("\n-----------------------------------------------\n");
//}
//void push(int n) {
//	stack[++top] = n;
//}
//void pop() {//stack�� ������� ���, ������ ������̶� ǥ��
//	if (top == -1) {
//		printf("---������ �����---"); return 0;
//	}
//	printf("%d�� ������\n", stack[top--]);
//}
//void display() {
//	printf("���� ������ �������\n");
//	for (int i = 0; i <= top; i++) {
//		printf(" [%d]", stack[i]);
//	}
//}
//int main() {
//	int val, n;
//	printf("*****���� ���� �޴�*****\n");
//	while (1) {
//		menu();
//		printf("\n�޴��� �����ϼ��� : \n"); scanf("%d", &n);
//		switch (n) {
//		case 1://push
//			printf("���ÿ� ������ ���� :"); scanf("%d", &n);
//			push(n);
//			break;
//		case 2://pop
//			pop();
//			break;
//		case 3://display
//			display();
//			break;
//		case 4://exit
//			return 0;
//			break;
//		default:
//			printf("�ٽ� �Է��ϼ���");
//		}
//	}
//
//}
//ť
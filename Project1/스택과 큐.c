#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
//ť
//Queue ����
//FIFO, front, back, Enqueue, Dequeue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int queue[5];


void menuf() { //�޴� �Լ� function
	printf("\n1.ť�� ���� 2.ť���� ����\n");
	printf("3.���� ���� 4.����\n");
}


//�ִ� ���� item
void Enqueue(int* back, int item) {//ť�� ����
	if (*back == 4) {//���� ť�� ������� 5
		printf("ť�� ������\n");
		return;
	}
	queue[++ * back] = item;
}
int Dequeue(int* front, int back) {
	if (*front == back) {
		return -1; //-1�̸� ť�� ����ٰ� ����
		//���� 0�� ���ϵǸ� �������� ����
	}
	return queue[++ * front];
}
void Display(int front, int back) {
	if (front == back)
		printf("ť�� �����\n");
	for (int i = front; i < back + 1; i++)
		printf("%4d", queue[i]);
}


int main() {
	//ť, ���� ��� 1���� �迭�� ����
	int front = -1, back = -1;
	//queue : front, back // stack : top
	int menu, item;
	while (1) {
		menuf();
		scanf("%d", &menu);
		switch (menu) {
		case 1://ť�� ������ �Ǵ� job ����
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2://ť���� ����
			item = Dequeue(&front, back);
			if (item == -1)
				printf("ť�� �����");
			else
				printf("%d�� ������\n", item);
			break;
		case 3://ť�� ���� �����ֱ�
			Display(front, back); //����
			//ť�� ������ ����� ���ÿ�
			break;
		case 4://���α׷� ����
			return 0;
		default:
			printf("�ٽ� �Է��ϼ���.");
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
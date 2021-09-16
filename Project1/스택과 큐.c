#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
//큐
void menu() {
	printf("\n-----------------------------------------------\n");
	printf("1번 큐에 삽입(push) 2번 큐에서 삭제(pop)\n");
	printf("3번 내용 보기(display) 4번 프로그램 종료(exit)\n");
	printf("\n-----------------------------------------------\n");
}
int queue[SIZE];
void enqueue(int* back, int item) {//큐에 데이터 삽입
	if (*back == 4) {
		printf("큐가 가득참\n");
		return;
	}
	queue[++ * back]= item;
}
int dequeue(int * front, int back) {
	if (*front == back) {
		//큐가 비었음
		return -1;
	}
	return queue[++ * front];
}
int main() {
	int val, n;
	printf("*****큐 구현 메뉴*****\n");
	while (1) {
		menu();
		printf("\n메뉴를 선택하세요 : \n"); scanf("%d", &n);
		switch (n) {
		case 1://push
			printf("큐에 삽입할 숫자 :"); scanf("%d", &n);
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
			printf("다시 입력하세요");
		}
	}

}
//int stack[SIZE];
////스택
//void push(int);
//void pop();
//int top = -1;
// //void menu() {
//	printf("\n-----------------------------------------------\n");
//	printf("1번 스택에 삽입(push) 2번 스택에서 삭제(pop)\n");
//	printf("3번 내용 보기(display) 4번 프로그램 종료(exit)\n");
//	printf("\n-----------------------------------------------\n");
//}
//void push(int n) {
//	stack[++top] = n;
//}
//void pop() {//stack이 비어있을 경우, 스택이 비었음이라 표시
//	if (top == -1) {
//		printf("---스택이 비었음---"); return 0;
//	}
//	printf("%d가 삭제됨\n", stack[top--]);
//}
//void display() {
//	printf("스택 내용을 보여줘요\n");
//	for (int i = 0; i <= top; i++) {
//		printf(" [%d]", stack[i]);
//	}
//}
//int main() {
//	int val, n;
//	printf("*****스택 구현 메뉴*****\n");
//	while (1) {
//		menu();
//		printf("\n메뉴를 선택하세요 : \n"); scanf("%d", &n);
//		switch (n) {
//		case 1://push
//			printf("스택에 삽입할 숫자 :"); scanf("%d", &n);
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
//			printf("다시 입력하세요");
//		}
//	}
//
//}
//큐
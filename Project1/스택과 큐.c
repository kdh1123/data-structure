#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
//큐
//Queue 구현
//FIFO, front, back, Enqueue, Dequeue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int queue[5];


void menuf() { //메뉴 함수 function
	printf("\n1.큐에 삽입 2.큐에서 삭제\n");
	printf("3.내용 보기 4.종료\n");
}


//넣는 값이 item
void Enqueue(int* back, int item) {//큐에 삽입
	if (*back == 4) {//현재 큐의 사이즈는 5
		printf("큐가 가득참\n");
		return;
	}
	queue[++ * back] = item;
}
int Dequeue(int* front, int back) {
	if (*front == back) {
		return -1; //-1이면 큐가 비었다고 생각
		//보통 0이 리턴되면 정상적인 종료
	}
	return queue[++ * front];
}
void Display(int front, int back) {
	if (front == back)
		printf("큐가 비었음\n");
	for (int i = front; i < back + 1; i++)
		printf("%4d", queue[i]);
}


int main() {
	//큐, 스택 모두 1차원 배열로 구현
	int front = -1, back = -1;
	//queue : front, back // stack : top
	int menu, item;
	while (1) {
		menuf();
		scanf("%d", &menu);
		switch (menu) {
		case 1://큐에 데이터 또는 job 삽입
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2://큐에서 삭제
			item = Dequeue(&front, back);
			if (item == -1)
				printf("큐가 비었음");
			else
				printf("%d가 삭제됨\n", item);
			break;
		case 3://큐의 내용 보여주기
			Display(front, back); //과제
			//큐의 내용을 출력해 보시오
			break;
		case 4://프로그램 종료
			return 0;
		default:
			printf("다시 입력하세요.");
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
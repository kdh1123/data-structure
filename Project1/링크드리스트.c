#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE ND;
struct NODE {
	struct NODE* next;
	int data;
};
int main() {
	printf();


	/*ND* head = (ND*)malloc(sizeof(ND));
	ND* node1 = (ND*)malloc(sizeof(ND));
	head->next = node1;
	node1->data = 10;

	ND* node2 = (ND*)malloc(sizeof(ND));
	node1->next = node2;
	node2->data = 20;

	ND* node3 = (ND*)malloc(sizeof(ND));
	node2->next = node3;
	node3->data = 30;

	ND* here = head->next; 
	while (here != NULL) {
		printf("%d ", here->data);
		here = here->next;
	}
	free(node3);
	free(node2);
	free(node1);
	free(head);*/
	return 0;
}
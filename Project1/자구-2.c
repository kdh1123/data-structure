#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
//typedef struct STU stu;
//struct STU {
//    char name[10];
//    int age;
//};
typedef struct STU {
    char name[10];
    int age;
} stu;
typedef struct NODE ND;
struct NODE {
    ND* next;
    int data;
};
int main(void)
{
    ND* head = (ND*)malloc(sizeof(ND));
    ND* node1 = (ND*)malloc(sizeof(ND));
    head->next = node1;
    node1->data = 10;
    
    
    //stu* student=(stu*)malloc(sizeof(stu));
    ////student->name = "kim"; Æ²¸²
    //gets(student->name);
    //scanf("%d", &student->age);
    //printf("%s %d",student->name, student->age);
    //free(student);
  
    /*struct stu s1 = {"kim",17,90};
    struct stu s2 = {"park",17,80 };
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%d\n", s1.score);
    printf("%s\n", s2.name);
    printf("%d\n", s2.age);
    printf("%d\n", s2.score);*/
}
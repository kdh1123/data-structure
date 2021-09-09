#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char string[] = "Hello";
	char* pstr = string;
	while (*pstr) putchar(*pstr++);
	/*int i = 7, * p, **pp;
	p = &i;
	pp = &p;

	printf("p\'s Address = %p\n", p);
	printf("pp\'s Address = %p\n", pp);

	(*p)++;
	printf("i=%d \t", i);
	printf("*p=%d \t", *p);
	printf("**pp=%d \n", **pp);

	(**pp)++;
	printf("i=%d \t", i);
	printf("*p=%d \t", *p);
	printf("**pp=%d \n", **pp);*/
	return 0;
}
//int i = 7;
//extern void func1();
//int main() {
//	int i = 5;
//	func1();
//	i++;
//	printf("i=%d\n", i);
//	return 0;
//}

//static int i = 7;
//void func1(); void func2();
//int main() {
//	int i = 5;
//	func1();
//	i++;
//	printf("i=%d\n", i);
//	return 0;
//}
//void func1() {
//	i++;
//	printf("i=%d\n",i);
//	func2();
//}
//void func2() {
//	i++;
//	printf("i=%d\n", i);
//}
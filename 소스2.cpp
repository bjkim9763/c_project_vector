#include <stdio.h>
//문제 3
struct simple//구조체 선언
{
	int d1;
	int d2;
};

void swap(struct  simple* c1, struct simple* c2);
void show(struct  simple c1, struct simple c2);//함수선언

int main(void)
{
	struct simple s1 = { 10, 20 };
	struct simple s2 = { 100, 200 };//구조체에 변수 선언

	show(s1, s2);
	swap(&s1, &s2);
	show(s1, s2);//각 함수를 통한 변환과 출력

	return 0;
}

void show(struct  simple c1, struct simple c2) {//show함수 정의
	printf("s1 Data 1 : %d \ns1 Data 2 : %d \n", c1.d1, c1.d2);
	printf("s2 Data 1 : %d \ns2 Data 2 : %d \n\n", c2.d1, c2.d2);
}
void swap(struct  simple* c1, struct simple* c2) {
	int c1_d1 = c1->d1;
	int c1_d2 = c1->d2;

	c1->d1 = c2->d1;
	c1->d2 = c2->d2;
	c2->d1 = c1_d1;
	c2->d2 = c1_d2;
}//구조체의 각 성분을 뒤바꾸는 함수 정의
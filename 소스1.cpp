#include <stdio.h>
//문제2
struct employee//구조체 선언
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp[3];//구조체 배열 선언
	int i;

	for (i = 0; i < 3; i++) {
		printf("직원 이름 입력: ");
		scanf_s("%s", emp[i].name, sizeof(emp[i].name));
		printf("주민 번호 입력: ");
		scanf_s("%s", emp[i].pid, sizeof(emp[i].pid));
		printf("급여 정보 입력: ");
		scanf_s("%d", &emp[i].salary);
	}//반복문을 이용해 구조체에 요소 입력, 배열로 정리

	for (i = 0; i < 3; i++) {
		printf("직원 이름 : %s\n", emp[i].name);
		printf("주민 번호 : %s\n", emp[i].pid);
		printf("급여 정보 : %d원\n", emp[i].salary);
	}//반복문을 이용해 구조체 내용 출력
	return 0;
}
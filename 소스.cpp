#include <stdio.h>
//문제 1
struct employee//구조체 선언
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp;//구조체 변수선언

	printf("직원 이름 입력: ");
	scanf_s("%s", emp.name, sizeof(emp.name));
	printf("주민 번호 입력: ");
	scanf_s("%s", emp.pid, sizeof(emp.pid));
	printf("급여 정보 입력: ");
	scanf_s("%d", &emp.salary);//구조체에 각 정보 입력


	printf("직원 이름 : %s\n", emp.name);
	printf("주민 번호 : %s\n", emp.pid);
	printf("급여 정보 : %d원\n", emp.salary);//구조체에서 각 정보 출력

	return 0;
}
#include <stdio.h>
//���� 1
struct employee//����ü ����
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp;//����ü ��������

	printf("���� �̸� �Է�: ");
	scanf_s("%s", emp.name, sizeof(emp.name));
	printf("�ֹ� ��ȣ �Է�: ");
	scanf_s("%s", emp.pid, sizeof(emp.pid));
	printf("�޿� ���� �Է�: ");
	scanf_s("%d", &emp.salary);//����ü�� �� ���� �Է�


	printf("���� �̸� : %s\n", emp.name);
	printf("�ֹ� ��ȣ : %s\n", emp.pid);
	printf("�޿� ���� : %d��\n", emp.salary);//����ü���� �� ���� ���

	return 0;
}
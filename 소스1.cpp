#include <stdio.h>
//����2
struct employee//����ü ����
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee emp[3];//����ü �迭 ����
	int i;

	for (i = 0; i < 3; i++) {
		printf("���� �̸� �Է�: ");
		scanf_s("%s", emp[i].name, sizeof(emp[i].name));
		printf("�ֹ� ��ȣ �Է�: ");
		scanf_s("%s", emp[i].pid, sizeof(emp[i].pid));
		printf("�޿� ���� �Է�: ");
		scanf_s("%d", &emp[i].salary);
	}//�ݺ����� �̿��� ����ü�� ��� �Է�, �迭�� ����

	for (i = 0; i < 3; i++) {
		printf("���� �̸� : %s\n", emp[i].name);
		printf("�ֹ� ��ȣ : %s\n", emp[i].pid);
		printf("�޿� ���� : %d��\n", emp[i].salary);
	}//�ݺ����� �̿��� ����ü ���� ���
	return 0;
}
#include <stdio.h>//���� 7
#include <math.h>//sqrt�Լ� ����� ���� math.h���
struct point {

	int x;
	int y;

};//�⺻ ��ǥ ����ü ����

double vectorLength(struct point c)
{
	return sqrt((c.x * c.x) + (c.y * c.y));
}//���� ���� 1(����ü ���)

double vectorLength2(double x, double y)
{
	return sqrt((x * x) + (y * y));
}//���� ���� 2(���� ���)
int vectorSubtractionY(struct point q1, struct point q2)
{
	struct point {
		int y;
	}subtraction;

	subtraction.y = q1.y - q2.y;
	return subtraction.y;
}//���� ���� y��ǥ�� ��ȯ
int vectorSubtractionX(struct point q1, struct point q2)
{
	struct point {
		int x;
	}subtraction;

	subtraction.x = q1.x - q2.x;
	return subtraction.x;
}//���� ���� x��ǥ�� ��ȯ
int vectorSumX(struct point q1, struct point q2)
{
	struct point {
		int x;
	}sum;

	sum.x = q1.x + q2.x;
	return sum.x;
	//���� ���� x��ǥ�� ��ȯ
}int vectorSumY(struct point q1, struct point q2)
{
	struct point {
		int y;
	}sum;

	sum.y = q1.y + q2.y;
	return sum.y;
}//���� ���� y��ǥ�� ��ȯ

double dot_product(struct point c1, struct point c2)
{
	return (c1.x * c2.x) + (c1.y * c2.y);
}//������ ����
int main(void)
{
	struct point a = {0};
	struct point b = {0};//����ü ����a, b����
	
	printf("enter vector a: ");
	scanf("%d %d", &a.x, &a.y);//����ü a�Է�

	printf("enter vector b: ");
	scanf("%d %d", &b.x, &b.y);//����ü b�Է�

	printf("a       [%d,  %d]\n", a.x, a.y);
	printf("b       [%d, %d]\n", b.x, b.y);
	printf("||a||   %f\n", vectorLength(a));
	printf("||b||   %f\n", vectorLength(b));
	printf("a+b     [%d, %d]\n",
	vectorSumX(a, b), vectorSumY(a, b));
	printf("a-b     [%d, %d]\n",
		vectorSubtractionX(a, b), vectorSubtractionY(a, b));
	printf("||a-b|| %f\n",
		vectorLength2(vectorSubtractionX(a, b), vectorSubtractionY(a, b)));
	printf("<a,b>   %f\n", dot_product(a, b));
	return 0;//���� ����� �Լ��� �̿� ��簪 ���
}

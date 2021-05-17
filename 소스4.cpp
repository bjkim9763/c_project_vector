#include <stdio.h>//문제 7
#include <math.h>//sqrt함수 사용을 위해 math.h사용
struct point {

	int x;
	int y;

};//기본 좌표 구조체 선언

double vectorLength(struct point c)
{
	return sqrt((c.x * c.x) + (c.y * c.y));
}//벡터 길이 1(구조체 사용)

double vectorLength2(double x, double y)
{
	return sqrt((x * x) + (y * y));
}//벡터 길이 2(변수 사용)
int vectorSubtractionY(struct point q1, struct point q2)
{
	struct point {
		int y;
	}subtraction;

	subtraction.y = q1.y - q2.y;
	return subtraction.y;
}//벡터 차의 y좌표를 반환
int vectorSubtractionX(struct point q1, struct point q2)
{
	struct point {
		int x;
	}subtraction;

	subtraction.x = q1.x - q2.x;
	return subtraction.x;
}//벡터 차의 x좌표를 반환
int vectorSumX(struct point q1, struct point q2)
{
	struct point {
		int x;
	}sum;

	sum.x = q1.x + q2.x;
	return sum.x;
	//벡터 합의 x좌표를 반환
}int vectorSumY(struct point q1, struct point q2)
{
	struct point {
		int y;
	}sum;

	sum.y = q1.y + q2.y;
	return sum.y;
}//벡터 합의 y좌표를 반환

double dot_product(struct point c1, struct point c2)
{
	return (c1.x * c2.x) + (c1.y * c2.y);
}//벡터의 내적
int main(void)
{
	struct point a = {0};
	struct point b = {0};//구조체 벡터a, b선언
	
	printf("enter vector a: ");
	scanf("%d %d", &a.x, &a.y);//구조체 a입력

	printf("enter vector b: ");
	scanf("%d %d", &b.x, &b.y);//구조체 b입력

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
	return 0;//위에 선언된 함수를 이용 모든값 출력
}

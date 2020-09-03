#include <stdio.h>
#include <math.h>
int main(void) 
{
	//计算一元二次方程
	int a = 1;             //赋值
	int b = -678;
	int c = 5;
	double delta;          //deltac存放b^2—4*a*c
	double x1;
	double x2;            //存放x1   x2的值
	delta = b * b - 4 * a * c;

	if (delta > 0) 
	{
		x1 = ((-b) + sqrt(delta)) / (2 * a);//sqrt 搞成squrt要注意
		x2 = ((-b) - sqrt(delta)) / (2 * a);
		printf("有两个解,x1 = %f,   x2 = %f\n", x1,  x2);

	}
	else if (delta == 0)
	{
		x1  = (-b) / (2 * a);
		x2 = x1;
		printf("只有一个解, x1 = x2 = %f\n",x1);
	}
	else 
	{
		printf("无解\n");
	}







	return 0;
}

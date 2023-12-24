#include<stdio.h>
swap(int *x, int *y)
{
int temp;
temp= *x;
*x=*y;
*y=temp;
	
	
}
int main()
{
	
	int x=20; int y=30;
	printf("Before swapping: x=%d,y=%d\n",x,y);
	swap(&x,&y);
printf("After swapping: x=%d,y=%d",x,y);

	return 0;
}


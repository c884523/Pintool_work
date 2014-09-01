#include<stdio.h>
int main(void)
{
	//printf("%d\n",a[i]);
	int  x=0,y=0;
	while(x<1000)
	{
		x++;
		y++;
	}
	printf("%p,%p",&x,&y);
}

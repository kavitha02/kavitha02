#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,b,j;
	scanf("%d%d",&a,&b);
	int flag=0;
	for(int i=a;i<=b;i++)
	{
		int count=0;
		for(j=2;j<sqrt(i);i++)
		{
			if(i%j==0){
				count=-1;
				break;
			}
		}
		if(count!=-1)
		{
			flag++;
		}
	}
	printf("%d",flag);
	return 0;
}

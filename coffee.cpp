#include<stdio.h>
int main()
{
	int amt=100,dis=10,temp=0,sum=0;
	while(amt!=0)
	{
		temp= (amt*dis)/100;
		sum=sum+amt;
		amt=amt-temp; 
	}
	printf("%d\n",sum);
	return 0;
}

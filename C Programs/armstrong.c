#include<stdio.h>
main()
{
	int num,sum=0,rem,temp;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
	printf("Armstrong Number:");
	else
	printf("the number is not armstrong number");
}

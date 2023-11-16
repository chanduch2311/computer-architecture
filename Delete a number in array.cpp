#include<stdio.h>
int main()
{
	int brinary_num,decimal_num=0,base=1,rem,n;
	printf("enter the brinary number with 0 and 1's \n");
	scanf("%d",&n);
	brinary_num=n;
	while(n>0)
	{
		rem=n%10;
		decimal_num=decimal_num+rem*base;
		n=n/10;
		base=base*2;
	}
	printf("the decimal conerstion %d",decimal_num);
	return 0;
}

#include<stdio.h>
int main()
{
	int num,replacedValue=0,power=1;
	printf("enter a number ");
	scanf("%d",&num);
	while(num>0){
		int digit=num%10;
		int x;
		if(digit==0){
			printf("enter a number as the digit is 0 ");
	        scanf("%d",&x);
	        digit=x;
		}
		else if(digit==1){
			printf("enter a number as the digit is 1 ");
	        scanf("%d",&x);
	        digit=x;
		}
		replacedValue+=digit*power;
		power*=10;
		num/=10;
	}
	printf("New number is %d",replacedValue);	
	return 0;

}
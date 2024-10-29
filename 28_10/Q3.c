#include<stdio.h>
int main(){
	int x;
	int zerocount=0;
	int minus_sum=0;
	int plus_sum=0;
	printf("enter a series of number (enter any alphabet to stop )");
	while(scanf("%d",&x)==1 )
	if(x==0){
		zerocount+=1;
	}
	else if(x<0){
		minus_sum+=x;
	}
	else if(x>0){
		plus_sum+=x;
	}
	printf("zero count is %d\n",zerocount);
	printf("minus sum is %d\n",minus_sum);
	printf("plus sum is %d\n",plus_sum);

}
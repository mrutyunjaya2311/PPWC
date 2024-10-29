#include<stdio.h>
int main(){
	int x,y;
	printf("enter two numbers for x and y ");
	scanf("%d %d",&x,&y);
    printf("the absolute difference value of %d and %d is stored in y that is: \n ",x,y);
	if(x>y){
		y=x-y;
	}
	else{
		y=y-x;
	}
	printf("%d\n ",y);
}
#include<stdio.h>
#include<string.h>
int strlength(char *str)
{
  int len=0;
  while(str[len]){
	++len;  
  }
   return len-1;
}
int main()
{
   char str[20];
   printf("enter a string whose length is less than 20");
   
   scanf("%[^\n]s",str);
   int l=strlength(str);
   printf("%d",l);
}

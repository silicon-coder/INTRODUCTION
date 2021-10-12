#include<stdio.h>
int main(){
  int i=1,f=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  while(i<=num){
      f=f*i;
      i++;
  }
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
}
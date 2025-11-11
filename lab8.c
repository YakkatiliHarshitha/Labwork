#include<stdio.h>
int sum(int);
long int fact(int);
int fibo(int);
int main()
{
  int num,result;
  printf("enter num");
  scanf("%d",&num);
  result=sum(num);
  printf("sum of n naturnal numbers  is%d \n",result);
  long int f;
  f=fact(num);
  printf("factorial is %ld \n",f);
  printf("fibonacci series is ");
  for(int i=0;i<num;i++){
    printf("%d \t",fibo(i));}
}
int sum(int n)
{
  if(n!=0)
    return n+sum(n-1);
  else
    return n;
    }
long int fact(int a){
  if(a==1)
    return 1;
  else if(a>1)
    return a*fact(a-1);
   }
  int fibo(int a){
  if (a==0)
    return 0;
  else if(a==1)
    return 1;
  else
    return fibo(a-1)+fibo(a-2);
    }

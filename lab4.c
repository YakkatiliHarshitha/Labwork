#include<stdio.h>
int main(){
//aim1 to print 1 to 10 prime numbers
int i,j,k;
      printf("prime are");
      for(i=2;i<=10;i++)
      {
        k=1;
        for(j=2;j<=i-1;j++){
          if(i%j==0){
            k=0;
            break;
            }
          }
      if(k==1){
      printf("%d \t",i);
      printf("\n");
      }}
    //aim2 pattern
      int i1,j1,n=5;
      for(i1=1;i1<=n;i1++){
        for(j1=n;j1>i1;j1--){
          printf(" ");
          }
        for(j1=1;j1<=i1;j1++){
          printf("%d",j1);}
          printf("\n");
          }
    //aim3 given number is palindrome or not
    int num,a,b=0,i2;
      printf("enter num");
      scanf("%d",&num);
      a=num;
      while(num>0){
        i2=num%10;
        b=b*10+i2;
        num=num/10;
        }
      if(a==b)
      {
        printf("%d is palindrome\n",a);}
      else
      {
        printf("not palindrome\n");
        }
    return 0;
}

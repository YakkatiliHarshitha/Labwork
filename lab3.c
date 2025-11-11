#include<stdio.h>
int main(){
//aim1 sum of first 5 natural numbers
int i=1,sum=0;
while(i<=5){
    sum=sum+i;
    i++;
}
printf("sum is %d \n",sum);
//aim2 to print pattern
int n=5,i1,j,space;
      char ch;
      for(i1=1;i1<=n;i1++)
      {
        for(space=n-i1;space>0;space--){
          printf("  ");}
        for(j=1;j<=i1;j++){
          printf("%c ",'A'+j-1);}
        for(j=i1-1;j>=1;j--){
          printf("%c ",'A'+j-1);
          }
        printf("\n");
        }
//aim3 sum of numbers untill entered 0
int num,sum1=0;
        printf("enter num to sum(0 to stop)\n");
        do{
          scanf("%d",&num);
          sum1+=num;
          }
      while(num!=0);
        printf("total sum=%d \n",sum1);
}

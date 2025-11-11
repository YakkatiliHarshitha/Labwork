//aim1
#include<stdio.h>
int main(){
    int a;
    printf("enter age of user");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("eligible to vote");
    }
    else{
        printf("not eligible to vote");
    }
    //aim2 even positive or not
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0){
        if(num%2==0){
            printf("the number is positive even\n");
        }
        else{
            printf("the number is positive odd\n");
        }}
    else if(num<0){
        printf("the number is negative\n");
    }
    else{
        printf("the number is zero\n");
    }
    //aim3 simple clculator using switch
    char op;
  double num1,num2;
  printf("enter operator +,-,*,/ \n");
  scanf("%c",op);
  printf("enter two num");
  scanf("%lf %lf",&num1,&num2);
  switch(op){
    case '+':
      printf("result:%lf",num1+num2);
      break;
    case'-':
      printf("result:%lf",num1-num2);
      break;
    case'*':
      printf("result:%lf",num1*num2);
      break;
    case'/':
      printf("result %lf",num1/num2);
      break;
    default:
      printf("invalid");
      }
    return 0;


}

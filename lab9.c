#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
int a=5,b=10;
printf("before swap :a=%d,b=%d \n",a,b);
swap(&a,&b);
printf("after swap:a=%d,b=%d \n",a,b);
int n,i,sum=0;
int arr[20];
int *p;
p=&arr[20];
printf("enter no.of elements");
scanf("%d",&n);
printf("enter %d elements \n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

for(i=0;i<n;i++){
    sum=sum+*p+i;
}
printf("sum of array %d",sum);
return 0;
}

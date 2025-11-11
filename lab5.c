#include<stdio.h>
int main(){
//aim1 sum of array elements
int size,sum=0;
printf("enter size");
scanf("%d",&size);
int arr[size];
printf("enter elements \n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("\n entered elements are \n");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
printf("\n sum of elements is ");
for(int i=0;i<size;i++){
    sum=sum+arr[i];
}
printf("%d",sum);
//aim2 to find target
printf("enter elements \n");
int n=3;
int a[n];
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("\n entered elements\n");
for(int i=0;i<n;i++){
    printf("%d \t",a[i]);
    }

int c=0,target;
printf("enter target");
scanf("%d",&target);
for(int i=0;i<n;i++){
    if(a[i]==target)
    {
        printf("target is present at %d \n",i);
        c=1;
        break;
    }
    if(c==0){
        printf("target is not present \n");
    }
}
//aim 3 to find max and min
int size1;
printf("enter size");
scanf("%d",&size1);
int b[size1];
printf("\n enter elements");
for(int i=0;i<size1;i++){
    scanf("%d",&b[i]);
}
printf("\n entered elements are \n");
for(int i=0;i<size1;i++){
    printf("%d",b[i]);
}
int max=a[0];
int min=a[0];
for(int i=0;i<size1;i++){
    if(max<a[i]){
        max=a[i];
    }
    if(min>a[i]){
        min=a[i];
    }
}
printf("\n max and min are %d and %d",max,min);

return 0;
}

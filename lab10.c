#include<stdio.h>
struct student{
    int id;
    char name[20];
    float cgpa;
    char village[30];
    char dist[20];
    long int phn;
};
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    struct student s[n];
    printf("enter deatils\n ");
    for(int i=0;i<n;i++){
        printf("student-%d\n",i+1);
        printf("enter id");
        scanf("%d",&s[i].id);
        printf("enter cgpa");
        scanf("%f",&s[i].cgpa);
        printf("enter village");
        scanf("%s",s[i].village);
        printf("enter district");
        scanf("%s",s[i].dist);
        printf("enter phone number");
        scanf("%lu",&s[i].phn);
        printf("enter name ");
        scanf("%s",s[i].name);

    }
    for(int i=0;i<n;i++){
        printf("\n details of student %d\n",i+1);
        printf("regid:%d\n",s[i].id);
        printf("name:%s \n",s[i].name);
        printf("cgpa:%f \n",s[i].cgpa);
        printf("village:%s",s[i].village);
        printf("phone no :%lu",s[i].phn);

    }
    int topper=0;
    for(int i=0;i<n;i++){
        if(s[i].cgpa>topper){
            topper=s[i].cgpa;
        }
    }
    printf("\n toppers \n");
    for(int i=0;i<n;i++){
        if(s[i].cgpa==topper){
            printf("topper name is %s",s[i].name);
        }
    }
    //ascending order as per id
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n+1;j++){
            if(s[i].id>s[j].id){
                struct student temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=s[i];

            }
        }
    }
    printf("\n students list\n");
    for(int i=0;i<n;i++){
        printf("%d  \t%s \t %f \n",s[i].id,s[i].name,s[i].cgpa);
    }
    float sum=0;
for(int i=0;i<n;i++){
    sum=sum+s[i].cgpa;
}
float avg;
avg=sum/n;
for(int i=0;i<n;i++){
    if(s[i].cgpa>avg){
        printf("%s \t %lu \n",s[i].name,s[i].phn);
    }
}}

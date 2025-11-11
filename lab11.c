#include<stdio.h>
#include<string.h>
struct student{
char name[20];
int roll;
float marks;
};
int main(){
    //aim1 to write and read from file
    FILE *fp;
    char text[100];
    fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("error!\n");
        return 1;
    }
    printf("enter text");
    gets(text);
    fprintf(fp,"%s",text);
    fclose(fp);
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("error\n");
    }
    printf("\n data from file \n");
    while(fgets(text,100,fp)!=NULL){
        printf("%s",text);
    }
    fclose(fp);
    // to search student details by name
    FILE *fptr;
    struct student s;
    char searchname[20];
    int found=0;
    int n,i;
    fptr=fopen("student.txt","w");
    if(fp==NULL){
        printf("error\n");
    }
    printf("enter no.of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n enter student-%d details",i+1);
        printf("name: ");
        scanf("%s",s.name);
        printf("roll no:");
        scanf("%d",&s.roll);
        printf(" marks:");
        scanf("%f",&s.marks);
        fprintf(fp,"\n %s\t%d\t%f \n",s.name,s.roll,s.marks);}
        fclose(fp);
        fp=fopen("student.txt","r");
        if(fp==NULL){
            printf("error \n");
        }
        printf("enter name to search");
        scanf("%s",searchname);
        while(fscanf(fp,"%s %d %f",s.name,&s.roll,&s.marks)!=EOF){
            if(strcmp(s.name,searchname)==0){
                printf("student found\n");
                printf("%s",s.name);
                found=1;
                break;
            }
        }
        if(found==0){
            printf("\n student not found");
        }
        //aim3 to add students
        fptr=fopen("student.txt","a");
        int num;
        printf("how many students you want add");
        scanf("%d",&num);
        for(int i=0;i<num;i++){
            printf("enter name");
            scanf("%s",s.name);
            printf("marks :");
            scanf("%d",&s.marks);
            printf("enter roll");
            scanf("%d",&s.roll);
            fprintf(fptr,"%s %d %f",s.name,s.roll,s.marks);

        }

        fclose(fptr);


    }



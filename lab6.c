/*#include<stdio.h>
int main()
{
    //aim1 addition of matrices
  int r1,c1;
  printf("enter rows and columns");
  scanf("%d %d",&r1,&c1);
  int m1[r1][c1];
  printf("enter elements \n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      scanf("%d",&m1[i][j]);
      }
      }
  printf("the matrix1 elements \n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      printf("%d",m1[i][j]);
      }
      printf("\n");
    }
  int m2[r1][c1];
  printf("enter elements \n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      scanf("%d",&m2[i][j]);
      }
      }
  printf("the matrix2 elements \n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      printf("%d",m2[i][j]);
      } printf("\n");
    }
    printf("the addition \n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      printf("%d",m1[i][j]+m2[i][j]);
      }printf("\n");
      }
}*/
//aim 2
#include<stdio.h>
int main()
{
  int r1,c1;
  printf("enter r1 and c1");
  scanf("%d%d",&r1,&c1);
  int m1[r1][c1];
  printf("enter elements");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      scanf("%d",&m1[i][j]);
      }
      }
  printf("the matrix1 elements\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      printf("%d \t",m1[i][j]);
      }
      printf("\n");
    }
  int r2,c2;
  printf("enter r2 and c2");
  scanf("%d%d",&r2,&c2);
  int m2[r2][c2];
  printf("enter elements");
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      scanf("%d",&m2[i][j]);
      }
      }
  printf("the matrix2 elements \n");
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      printf("%d \t",m2[i][j]);
      }
      printf("\n");
    }
int mult[r1][c2]={};
if(c1==r2){
    printf("multiplication is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                mult[i][j]=mult[i][j]+(m1[i][j]*m2[i][j]);

            }
        }
    }
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        printf("%d \t",mult[i][j]);
    }
    printf("\n");
}
}
else{
    printf("multipliction is not possible\n");
}
printf("\n");
//aim3 matrix
int r=3,c=3;
int m[r][c]={};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if((i+j)%2==0){
            m[i][j]=1;
        }
        else{
            m[i][j]=0;
        }
    }}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d \t",m[i][j]);
    }
    printf("\n");
}

      return 0;
}


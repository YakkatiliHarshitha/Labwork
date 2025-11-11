 #include<stdio.h>
 #include<string.h>
 int main()
 {
 char str[10];
      int i;
      printf("enter string");
      scanf("%s",str);
      for(i=0;str[i]='\0';i++)
      {
        if(str[i]>='A' && str[i]<='Z'){
          str[i]=str[i]+32;
          }
        }
      printf("after:%s",str);
      //aim2 palindrome
      char str1[100];
      int i1,l,flag=0;
      printf("enter str");
      scanf("%s",str1);
      l=strlen(str1);
      for(i1=0;i1<l/2;i1++)
      {
        if(str1[i1]!=str1[l-i1-1]){
          flag=1;
          break;
          }
          }
    if(flag==0){
        printf("palindrome\n");
        }
    else
      {
      printf("not palindrome\n");
      }
//aim3
char str2[100][100],temp[100];
      int n;
      printf("enter no.of str");
      scanf("%d",&n);
      getchar();
      printf("enter");
      for(int i=0;i<n;i++){
        fgets(str2[i],sizeof(str2[i]),stdin);}
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
          if(strcmp(str2[i],str2[j])>0)
          {
            strcpy(temp,str2[i]);
            strcpy(str2[i],str2[j]);
            strcpy(str2[j],temp);
            }
          }
          }
      printf("you enterd \n");
      for(int i=0;i<n;i++){
        printf("%s",str2[i]);}
      return 0;
      }







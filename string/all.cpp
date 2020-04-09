#include<bits/stdc++.h>
using namespace std;
char* substr(char*,int ,int);
int index(char*,char*);
char* insert(char*,int,char*);
char* delet(char*,int,int);
char* replace(char*,char*,char*);
int main()
{
   char s[80]={"ABCDEFGH"};
   char r1[80],r2[80],r3[80],r4[80],r5[80],r6[80];
   printf("STRING=%s",s);
   strcpy(r1,insert(s,3,"XYZ"));
   strcpy(r2,insert(s,6,"XYZ"));
   printf("\n\ninsert('ABCDEFG',3,'XYZ') = %s",r1);
   printf("\n\ninsert('ABCDEFG',6,'XYZ') = %s",r2);
   strcpy(r3,delet(s,4,2));
   strcpy(r4,delet(s,2,4));
   printf("\n\ndelete('ABCDEFG',4,2) = %s",r3);
   printf("\n\ndelete('ABCDEFG',2,4) = %s",r4);
   strcpy(r5,replace("XABYABZ","AB","C"));
   strcpy(r6,replace("XABYABZ","BA","C"));
   printf("\n\nreplace('XABYABZ','AB','C') = %s",r5);
   printf("\n\nreplace('XABYABZ','BA','C') = %s",r6);

}
char* insert(char* s1,int k,char* s2)
{
    char result[80];
    strcpy(result,substr(s1,1,k-1));
    strcat(result,s2);
    strcat(result,substr(s1,k,strlen(s1)-k+1));
    return(result);
}
char* delet(char* s1,int k,int l)
{
    char result[80];
    strcpy(result,substr(s1,1,k-1));
    strcat(result,substr(s1,k+l,strlen(s1)-k-l+1));
    return(result);
}
char* substr(char* str,int i,int j)
{
    int k,m=0;
    char strees[80];
    for(k=i-1;k<=i+j-1-1;k++)
    {
        strees[m]=str[k];
        m=m+1;

    }
    strees[m]='\0';
    return(strees);
}
char* replace(char* s1,char* s2,char* s3)
{
    int k;
    char res1[80];
    char res2[80];
    if(index(s1,s2)!=-1)
        k=index(s1,s2)+1;
    else
        return(s1);
    strcpy(res1,delet(s1,k,strlen(s2)));
    strcpy(res2,insert(res1,k,s3));
    return(res2);
}
int index(char *str1,char* str2)
{
    int m,n;
    int index,flag;
    for(m=0;m<strlen(str1);m++)
    {
        index=m;
        flag=1;
        for(n=0;n<strlen(str2);n++)
        {
            if(str1[m+n]==str2[n]);
            else{
                flag=0;
                break;
            }
        }
        if(flag==0)
            continue;
        else
            return(index);
    }
    if(m==strlen(str1))
        return(-1);
}

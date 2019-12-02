#include<stdio.h>
#include<string.h>
int main()
{
char str[10],str1[10];
int i,count=0;
scanf("%s",str);
scanf("%s",str1);
int n=strlen(str),m=strlen(str1);
int a=n>m?n:m;
int b=n>m?m:n;

    for(i=0;i<a;i++)
    {
        if(i<b)
        {
        if(str[i]!=str1[i])
        count++;
        }
        else i++;
    }
	if(count==0)
	printf("%s IS CORRECT",str1);
	else if(count<=2&&count>0)
	printf("%s IS ALMOST CORRECT",str1);
	else
	printf("%s IS WRONG",str1);
	
	return 0;
}
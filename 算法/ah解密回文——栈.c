//栈的实现——一个一维数组和栈顶top
#include<stdio.h>
#include<string.h>
int main()
{
    int len,mid,top=0,next;
    char s[101],a[101];
    gets(a);
    len=strlen(a);
    mid=len/2-1;
    for(int i=0;i<=mid;i++)
    {
        s[++top]=a[i];
    }
    if(len%2==0)
        next=mid+1;
    else
    {
        next=mid+2;
    }
    for(int i=next;i<=len-1;i++)
    {
        if(a[i]!=s[top])
            break;
        top--;
    }
    if(top==0)
        printf("YES");
    else
    {
        printf("No");
    }
    
    
}
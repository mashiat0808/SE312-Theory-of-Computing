#include <stdio.h>
int main()
{
    char a[80], temp;
    int n,i;
    printf("Enter string:");
    scanf("%s", a);
    printf("the states of the string: A");
    temp='A';
    for(n=0; a[n]!='\0';++n);
    for (int i=0; i<n;i++)
    {
        
        if(a[i]=='0' && temp=='A') {
            temp='A';
            printf(" >> A");
        }
        else if(a[i]=='1' && temp=='A') {
            temp='B';
            printf(" >> B");
        }
        
        else if(a[i]=='0' && temp=='B') {
            temp='A';
            printf(" >> A");
        }
        else if(a[i]=='1' && temp=='B') {
            temp='C';
            printf(" >> C");
        }
         else if(a[i]=='0' && temp=='C') {
            temp='A';
            printf(" >> A");
        }
        else if(a[i]=='1' && temp=='C') {
            temp='C';
            printf(" >> C");
        }
  
    }
    if(temp=='C') printf("\n The string is accepted. ");
    else printf("\n The string is not accepted.");
}
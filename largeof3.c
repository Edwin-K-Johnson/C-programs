#include <stdio.h>
int main()
{
    int a,b,c,l;
    printf ("enter 3 no ");
    scanf ("%d%d%d",&a,&b,&c);
    l=a>b?a>c?a:c:b>c?b:c;
    printf("the largest no is %d",l);
    
    return 0;
}    


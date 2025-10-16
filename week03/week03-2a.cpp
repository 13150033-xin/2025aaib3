#include <stdio.h>
#include <string.h>
int main()
{
    char a[4];
    scanf("%s",a);
    int bad=0,i;
    for(i=0;i<4;i++)
    {
        if(a[i]!=a[4-1-i])
            bad=1;
    }
    if(bad==0)printf("YES|n");
    else printf("NO\n");
}

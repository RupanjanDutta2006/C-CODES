//2nd Max
#include <stdio.h>
void main()
{
    int max,a[10],i,secmax,k,n;
    printf("Enter the Range= ");
    scanf("%d",&n);
    printf("Enter the Elements = ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
        if(max<a[i])
        {
            max=a[i];
            k=i;
        }
    secmax=-1;
    for(i=0;i<n;i++)
        if(k!=i)
            if(secmax<a[i])
                secmax=a[i];
    printf("The 2nd Max is = %d",secmax);
}
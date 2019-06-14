#include<stdio.h>
#include<stdlib.h>

int main()
{ int a,b,c,d,i;
   printf("Enter the number of numbers");
   scanf("%d",&a);
   int e[a],r[a];
   for(i=0;i<a;i++)
    scanf("%d",&e[i]);
   printf("number of numbers for alice");
   scanf("%d",&b);
    int f[b],p[b];
   for(i=0;i<b;i++)
   scanf("%d",&f[i]);
    r[0]=1;
   for(i=1;i<a;i++)
    if(e[i]==e[i-1])
     r[i]=r[i-1];
     else
     r[i]=r[i-1]+1;
    for(i=0;i<b;i++)
    { for(c=a-1;c>=0;c--)
       { if(e[c]>f[i])
         {p[i]=r[c]+1;
            break;}
        if(f[i]>e[0])
          p[i]=1;  
         if(e[c]==f[i])
           p[i]=r[c];}
                  }
    
    for(i=0;i<b;i++)
       printf("%d",p[i]);
  }

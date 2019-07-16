#include <stdio.h>

int main()
 {
   int n,i=0,r,b;
   scanf("%d",&n);
   b=n;
   while(n!=0)
   {
     r= n%10;
     i=i*10+r;
     n/=10;
   }
   if(b==i)
   {
    printf("yes");
   }
   else 
   printf("no");
  return 0;
}

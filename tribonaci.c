#include <stdio.h>
#include <math.h>

int main(){
int n,a,b,c,d,i;
a=0;
b=1;
c=1;
printf("\nEntre the value of n \n");
scanf("%d",&n);
printf("%d %d %d",a,b,c);
for(i=0;i<=n;i++){
d=a+b+c;
printf(" %d",d);
a=b;
b=c;
c=d;}
return 0;
}



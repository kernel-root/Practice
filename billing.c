#include <stdio.h>

int main(){
int p,s=0;
while(p!=0){
printf("Enter the purchase price");
scanf("%d",&p);
if(p==0)
{break;}
else
{s=s+p;}
}
printf("\n Total pricce is %d",s);
return 0;
}

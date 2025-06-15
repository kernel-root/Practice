#include<stdio.h>

int main(){
int b,f,n,s;
printf("Entre the value of n: ");
scanf("%d",&n);
int a[n];
printf("Enter the array: ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the search element: ");
scanf("%d",&s);
int m,lb=0,ub=n-1;
while(lb<=ub){
m=(ub+lb)/2;
if(s>a[m]){
lb=m+1;
}
if(s<a[m]){
ub=m-1;
}
if(s==a[m]){
b=m;
f=1;
}}
if(f==1){
printf("SUCCESSFUL");
printf("INDEX: %d",b);
}else{
printf("NOT FOUND ");
}
return 0;
}

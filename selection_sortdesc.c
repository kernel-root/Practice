#include<stdio.h>
int main(){
int n,i,j;
printf("enter the array size: ");
scanf("%d",&n);
int ar[n];
printf("Enter the array size: ");
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
}
int min,temp;
for(i=0;i<n-1;i++){
	min=i;
	for(j=i+1;j<n;j++){
		if(ar[min]<ar[j]){
			min=j;
			}
		}
	temp=ar[i];
	ar[i]=ar[min];
	ar[min]=temp;
	}
printf("Sorted array: ");
for(i=0;i<n;i++){
	printf(" %d ",ar[i]);
	}
return 0;
}

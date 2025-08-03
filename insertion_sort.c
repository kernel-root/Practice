#include<stdio.h>

int main(){

int n,i,j;
printf("Enter the array size: ");
	scanf("%d",&n);

int ar[n];
printf("Enter the array: ");
for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
}

int temp;
for(i=1;i<n;i++){
	temp=ar[i];
	for(j=i-1;j>=0 && ar[j]>temp;j--){
		ar[j+1]=ar[j];
		}
	ar[j+1]=temp;
}

printf("THE sorted array is: ");
	for(i=0;i<n;i++){
	printf("%d ",ar[i]);
	}
return 0;
}

#include<stdio.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int ar[n];
int temp,i,j;
printf("Enter the array: ");
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
}

for(i=0;i<n-1;i++){
	for(j=0;j<n-1-i;j++){
		if(ar[j]>ar[j+1]){
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
			}
		}
	}
printf("The sorted array: ");
for(i=0;i<n;i++){
printf(" %d ",ar[i]);
}
return 0;
}

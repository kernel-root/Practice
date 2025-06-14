#include <iostream>

using namespace std;

int main(){
int ar[10];
int i,s,temp=0,f=0;
cout<< "Enter the array \n";
for(i=0; i<10;i++){
cin>> ar[i];}
cout<< "\n Enter search \n";
cin>> s;
for(i=0;i<10;i++){
if(ar[i]==s){
f=i;
temp=1;}}
if(temp==1){
cout<< "\n Number is present \n";
cout<< "INDEX= "<< f;}
else{
cout << "\n INVALID INP";}
return 0;
}


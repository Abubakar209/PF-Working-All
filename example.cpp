#include<iostream>
using namespace std;
void nestedFor(int num);
main(){

int num;
cout<<"Enter Number: ";
cin>>num;
nestedFor(num);



}


void nestedFor(int num){
   
for(int i=num; i>=1; i=i-1){
   for ( int j = num; j >= i; j=j-1)
   {
     
  cout<<"*";
 

   }
   
cout<<endl;


}


}
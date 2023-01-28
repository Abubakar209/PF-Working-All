#include<iostream>
using namespace std;

void result(int num);
main(){

int num;
    cout<<"Enter a number";
    cin>>num; 
   result(num);


}
void result(int num){
    int count=0;
     for (int i =1; i<=num; i++)

     {count=count+1;
      
      if (count%4==0)
      {
         int count_2=count*10;
          cout<<count_2<<" ";
      }
      
      else{
 cout<<count<<" ";
      }
      
     
     }
      
}
#include<iostream>
using namespace std;
void printPer(float num);
main()


{ 
    float num;
    cout<<"Enter a Range";
    cin>>num; 
   printPer(num);
}

void printPer(float num){

 float x1=0;
    float x2=0;
      float x3=0;
 int num_1;

   for (float i = num; i >=1; i=i-1)
     {
        cout<<"Enter number";
        cin>>num_1;
        if (num_1%2==0)
        {
            x1=x1+1;
            
        }
         if (num_1%3==0)
        {  x2=x2+1;
            
        }
         if (num_1%4==0)
        {  x3=x3+1;
            
        }
       
        


     }


float per_1=(x1/num)*100;
float per_2=(x2/num)*100;
float per_3=(x3/num)*100;

cout<<"percentage of 2 by remainder 0 is "<<per_1<<endl;
cout<<"percentage of 3 by remainder 0 is "<<per_2<<endl;
cout<<"percentage of 4 by remainder 0 is "<<per_3<<endl;









}




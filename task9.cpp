#include<iostream>
using namespace std;

void printStar(int num);

 main()
{
    int num;
    cout<<"Enter number:";
   cin>>num;
   printStar(num);
   
}
void printStar(int num){

for (int i=1; i<=num; i=i+1)
   {    int j,k;

   for (k=1; k<=i; k++ )
     {  
            cout<<"*";
    
        
     }
    for(j=num; j>i; j=j-1){
        cout<<" ";

    }
    for(j=num; j>i; j=j-1){
        cout<<" ";

    }

     for (k=i; k>=1; k-- )
     {  
            cout<<"*";
    
        
     }
     
    
   cout<<endl;
    }


   //next satr
 /* for (int i=1; i<num; i=i+1)
   {    int j,k;
    for(j=1; j<=i; j=j+1){
        cout<<" ";

    }

     for (k=num; k>=j; k-- )
     {  
            cout<<"*";
    
        
     }
     
    
   cout<<endl;
    }*/
    ///next star
         
 

    
   
  
   
   } 
   





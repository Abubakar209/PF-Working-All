#include<iostream>
using namespace std;
main()
{

    for(int i=1;i<=5; i++)
    {
         for(int j=5;j>=i;j--)
         {
            if(i+j==7){
                break;
            }
            cout<<i+j;
         }
         cout<<endl;
    }
}
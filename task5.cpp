#include<iostream>
using namespace std;
void corresponding(int num);

 main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
    corresponding(num);
}
void corresponding(int num){
int count=0;
for ( int i = 0; i <= num; i++)
{
    count=(count+i);
    


}


cout<<count;

}
#include <iostream>
using namespace std;
int main()
{
//Write a program to print all prime numbers from 1 to N

int numm ;
int c=0;
cout<<"enter Your Nummber to check"<<endl;
cin>>numm;
for(int i=2;i<numm;i++){

if(numm%i==0){
cout<<"The Numm is Not Prime";
c=1;
break;
}
}
if (c==0)
cout<<"The Nummber is Prime";


}
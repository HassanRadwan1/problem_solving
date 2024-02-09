#include <iostream>
using namespace std;
int main()
{
//Write a program to print perfect=sum(all divison)
int numm=12;
int sum=0;
for(int i=1;i<numm;i++){

if (numm%i==0)
sum=sum+i;
}
if(sum == numm)
  cout<<numm<<" is prtfect";
  else
    cout<<numm<<" is Not prtfect";

}
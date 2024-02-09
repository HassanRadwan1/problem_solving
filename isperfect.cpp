#include <iostream>
using namespace std;
//write a program to check is the nummber is Perfect or Not
//Note :perfect Nummber =Sum(all Divisons) 
int readnummber (string massage){

    int numm;
    cout<<"please enter a positive nummber";
    cin>>numm;
    return numm;
 }
 bool isperfectnummber(int numm){
int sum=0;
for(int i=1;i<numm;i++){

if (numm%i==0)
sum=sum+i;
}
return numm==sum;
 }
 void printresult(int numm){
    if (isperfectnummber(numm))
    cout<<numm<<" is perfect Nummber \n";
    else
    cout<<numm<<" is Not perfect Nummber \n";
 }
 int main(){

printresult(readnummber("please enter a positive nummber"));

 }
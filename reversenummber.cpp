#include <iostream>
using namespace std;
//write a Program to read a Nummber and print it in a reversed order
//Examole user input 1234 the output be 4  3  2  1
int readnummber(){
int numm;
cout<<"enter your Nummber";
cin>>numm;
return numm;
}
int reversenummber(int numm){
   int remainder;
   while(numm>0){

remainder=numm%10;
numm=numm/10;
cout<<remainder<<endl;

   }
   
}




 int main(){


reversenummber(readnummber());




 }
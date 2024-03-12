#include <iostream>
using namespace std;

int main(){
int x;// User's input
cin>>x;

int year=x/365;
int month=((x-year*365))/30;
int days=x-((year*365)+(month*30));
cout<<year<< " years"<<endl;//donr Year
cout<<month<<" months"<<endl;
cout<<days<<" days";



}
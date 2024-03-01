#include <iostream>
#include <vector>
using namespace std;
struct stinfo{
string first_name;
string last_name;
int salary;
};
void read(vector<stinfo>&info){
char charat ='Y';
stinfo employ;
while(charat=='Y' || charat=='y'){

cout<<"enter a first name: ";
cin>>employ.first_name;
cout<<"enter a last name: ";
cin>>employ.last_name;
cout<<"enter a salay: ";
cin>>employ.salary;
info.push_back(employ); 

cout<<"Do you want to add a antohr one: (Y) || (N)";
cin>>charat;

}
}
void print(vector<stinfo>info){

for(stinfo employ : info){

    cout<<"The first name is: "<<employ.first_name<<endl;
    cout<<"The last name is: "<<employ.last_name<<endl;
    cout<<"The salary is: "<<employ.salary<<endl;
}

}





int main(){
vector<stinfo>info;
read(info);
print(info);
}
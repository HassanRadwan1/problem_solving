#include <iostream>
#include <cstdlib>

using namespace std;
int RandomNummber(int From , int To){
//this finction to generate a random number
int randnum=rand()%(To-From+1)+From;
return randnum;
}


int main(){
srand((unsigned)time(NULL));

cout<<RandomNummber(1,10)<<endl;
cout<<RandomNummber(1,10)<<endl;
cout<<RandomNummber(1,10)<<endl;

}

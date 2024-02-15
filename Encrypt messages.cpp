#include<iostream>
#include <string>
using namespace std;

void readword (string &word) {
	cout << "write a word to encrypt it"<<endl;
	cin>>word;

}
string encryptWord (string word,string &temp) {
	string result="";
	temp = word;//temp now has Hassan
	for (int i=0;i<word.size();i++){
		word[i]='*';
		result+=word[i];
	}
	return result;


}
string decryptWord (string word, string temp) {
	word = temp;
	return word;

	
}
	
int main() {
	string word;
	string temp;
	readword (word);
	cout<<"text after encryption: "<<encryptWord(word, temp)<<endl;
	cout<<"text after dycryption: " <<decryptWord(word,temp)<<endl;

	
	return 0;
}
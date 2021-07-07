#include<iostream>
using namespace std;

string reverse(string s, int length, int i){
	if(i==(length-1)){
		cout << s[i];
		return 0;
	}
	i=i+1;
	cout << i;
	reverse(s, length, i++);
	cout << s[i];
}
int main(){
	string str;
	cin >> str;
	int length = str.length();
	cout << length;
	reverse(str, length, 0);
}
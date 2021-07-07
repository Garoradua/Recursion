#include<iostream>
using namespace std;

int printsequence(int n){
	cout << n << " ";
	if(n<=0){
		return 0;
	}

	printsequence(n-5);
	cout << n << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		printsequence(n);
	}
}
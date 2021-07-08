#include <bits/stdc++.h>
  using namespace std;
  
  int sum(int n){
    if(n==0){
      return 0;
    }
    int a = n%10;
    return a + sum(n/10);
  }
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      cout << sum(n) << endl;
    }
    return 0;
  }
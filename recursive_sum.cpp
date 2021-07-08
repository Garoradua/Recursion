#include <bits/stdc++.h>
  using namespace std;
  
  
  int sum(int n){
    if(n==1){
      return 1;
    }
    return n+sum(n-1);
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
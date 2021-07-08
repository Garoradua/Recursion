#include <bits/stdc++.h>
  using namespace std;
  
 int fibonacci(int n, int k){
    if(k==1){
      return 1;
    }
    if(k==2){
      return 1;
    }
    if(k<=n){
      return fibonacci(n, k-1) + fibonacci(n, k-2);
    }
    
  }
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      cout << fibonacci(n, n) << endl;
    }
    return 0;
  }
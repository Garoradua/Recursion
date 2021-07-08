#include <bits/stdc++.h>
  using namespace std;
  
  void sequence(int n){
    cout << n<< " ";
    if(n<=0){
      return;
    }
    
    sequence(n-5);
    cout << n << " ";
  }
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      sequence(n);
      cout << endl;
    }
    return 0;
  }
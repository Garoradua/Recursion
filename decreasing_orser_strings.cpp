#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      int length = str.length();
      int arr[26] = {0};
      char ch;
      for(int i=0; i<length; i++){
        arr[str[i]-97]++;
      }
      for(int i = 25; i>=0; i--){
        if(arr[i]==0){
          continue;
        }else{
          while(arr[i]--){
              ch = i+97;
              cout << ch;
          }
        }
      }
    }
      
    return 0;
  }
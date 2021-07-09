#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      string s;
      cin >> s;
      bool flag = false;
      int arr[26] = {0};
      int len = s.length();
      for(int i=0; i<len; i++){
        arr[s[i]-97]++;
      }
      for(int i=0; i<26; i++){
       if(arr[i]>=2){
         char ch = i+97;
         flag = true;
         cout << ch << "=" << arr[i] <<" ";
       }
      }
      
      if(flag==false){
        cout << -1;
      }
      cout << endl;
      // for(int i=0; i<len; i++){
      //   if(arr[s[i]-97]>=2){
      //     char ch = i+97;
      //     cout << ch << "=" << arr[s[i]-97] << " ";
      //   }
      // }
      // cout << endl;
    }
    return 0;
  }
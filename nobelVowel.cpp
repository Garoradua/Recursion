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
     bool flag = true;
     int len = str.length();
     for(int i=1; i<len; i+2){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
         continue;
       }else{
         flag = false;
         cout << "NO" << endl;
         break;
       }
     }
     if(flag==true){
       cout << "YES" << endl;
     }
     
    }
    return 0;
  }
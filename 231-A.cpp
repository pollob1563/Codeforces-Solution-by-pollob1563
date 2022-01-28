#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  int t, ans = 0;
  cin >> t;
  while(t){
      int a, b, c;
      cin >> a>> b>> c;
      int calc = a+b+c;
      if(calc==2 || calc ==3)
        ans++;
 
      t--;
  }
  cout<<ans<<endl;
  return 0;
} 

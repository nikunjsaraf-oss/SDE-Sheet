#include <bits/stdc++.h>
#define loop(x,n,v) for(int x = v; x < n; x++)

using namespace std;
void solve();
string reverseString(string str);

void dfile()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
  dfile();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
    cout << "\n";
  }
  return 0;
}


void solve()
{
   string str;
   cin>>str;
   cout<<reverseString(str);
}

string reverseString(string str)
{
  string temp="";
  for(int i=str.length()-1;i>=0;i--)
  {
    temp+=str[i];
  }
  return temp;
}

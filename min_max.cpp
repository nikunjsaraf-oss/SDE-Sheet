#include <bits/stdc++.h>
#define loop(x,n,v) for(int x = v; x < n; x++)

using namespace std;
void solve();
int Sum(int arr[], int n);

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

int Sum(int arr[], int n)
{
  sort(arr, arr+n);
  return (arr[0]+arr[n-1]);
}

void solve()
{
   int n;
   cin>>n;

   int arr[n];
   loop(i,n,0)
   {
    cin>>arr[i];
   }
   cout<<Sum(arr, n); 
}

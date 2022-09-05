#include <bits/stdc++.h>

using namespace std;
void solve();
int maxSubArray(vector<int>& nums);

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
   vector<int> nums = {1};
   cout<<maxSubArray(nums);
}

int maxSubArray(vector<int>& nums)
{
  int sum=0, maxi=INT_MIN;
  for(int i=0;i<nums.size();i++)
  {
    sum+=nums[i];
    maxi=max(sum,maxi);
    if(sum<0)
      sum=0;
  }
  return maxi;
}

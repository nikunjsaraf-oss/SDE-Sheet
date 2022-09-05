#include <bits/stdc++.h>

using namespace std;
void solve();

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

bool containsDuplicate(vector<int>& nums) {
  int n=nums.size();
  sort(nums.begin(),nums.end());
  for(int i=0;i<n-1;i++)
  {
    if(nums[i]==nums[i+1])
    {
      return true;
    }
    continue;
  }
  return false;
}


void solve()
{
  vector<int> nums = {1,2,3,4};
  cout<<containsDuplicate(nums);
}




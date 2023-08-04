#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &a, int s){
   // Write your code here
    vector<vector<int>> ans;
   int n = a.size();
    for(int i =0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
          if (a[i] + a[j] == s) {
            vector<int> temp;
            temp.push_back(min(a[i], a[j]));
            temp.push_back(max(a[i], a[j]));
            ans.push_back(temp);
          }
        }
    }
    sort(ans.begin(),ans.end());
    return ans ;
}

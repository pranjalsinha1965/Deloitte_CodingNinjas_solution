#include <bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;
/* ----------------X SOLUTION PART ----------------X */
vector<vector<int>> pairSum(vector<int> &a, int s){
    vector<vector<int>> ans;
    int n = a.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(a[i], a[j]));
                temp.push_back(max(a[i], a[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}
/* ----------------X SOLUTION PART ----------------X */
int main() {
    int n, targetSum;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<vector<int>> result = pairSum(arr, targetSum);

    if (result.empty()) {
        cout << "No pairs found that add up to the target sum." << endl;
    } else {
        cout << "Pairs found: " << endl;
        for (vector<int> pair : result) {
            cout << pair[0] << " " << pair[1] << endl;
        }
    }

    return 0;
}

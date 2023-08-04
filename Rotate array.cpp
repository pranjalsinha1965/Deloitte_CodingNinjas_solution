#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void revArray(int arr[], int start, int end)
{
for(int i = start, j = end; i < j; i++, j--)
{
swap(arr[i], arr[j]);
}
}
int main() {
//Write your code here
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++)
cin >> arr[i];
int k;
cin >> k;
revArray(arr, 0, k - 1);
revArray(arr, k, n - 1);
revArray(arr, 0, n - 1);
for(int i = 0; i < n; i++)
cout << arr[i] << " ";
return 0;
}

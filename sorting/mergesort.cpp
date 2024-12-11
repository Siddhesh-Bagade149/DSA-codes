#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    int left = l;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // for(int i=l;i<temp.size();++i)
    //     arr[i]=temp[i];
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mSort(vector<int> &arr, int l, int r)
{
    if(l>=r) return ; // base case
    int mid = (l + r) / 2;
    mSort(arr, l, mid); // 
    mSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);cout.tie(NULL);
    vector<int> arr = {5, 4,3,2,1};
    int l = 0;
    int r = arr.size() - 1;
    for(auto o:arr)
        cout<<o<<" ";
    mSort(arr, l, r);
    cout<<endl;
    for(auto o:arr)
        cout<<o<<" ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int cnt=0;
    for (int i = s + 1; i <= e; ++i)
    {
        if (arr[i] <= pivot)
            cnt++;
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickie(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    quickie(arr, s, p - 1);
    quickie(arr, p + 1, e);
}

int main()
{

    vector<int> arr = {5, 2, 6, 8, 3, 2, 8};
    int n = arr.size();
    for (auto i : arr)
        cout << i << " ";
        cout<<endl;
    quickie(arr, 0, n - 1);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}
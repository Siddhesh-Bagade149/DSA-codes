// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[n];
//         }
//         int oddNum;
//         int evenNum;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] % 2 == 0)
//             {
//                 evenNum++;
//             }
//             else if (arr[i] % 2 == 1)
//             {
//                 oddNum++;
//             }
//         }
//         // if(evenNum==oddNum)
//         // cout<<"yes\n";
//         // else
//         // cout<<"no\n";
//         cout << evenNum << " " << oddNum << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n + n];
//         for (int i = 0; i < n + n; ++i)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + (n + n));
//         int min = INT_MAX;
//         for (int i = 0; i <= n; i++)
//         {
//             int l = arr[i + n - 1] - arr[i];
//             if (l < min)
//             {
//                 min = l;
//             }
//         }
//         cout << min << endl;
//     }
//     return 0;
// }
#include "bits/stdc++.h"
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size++;
        int index=size;
        arr[index]=val;
        //  performing for max heap
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else return;
        }
    }

    // void deletefromheap(){
    //     if(size==0){
    //         cout<<"empty heap\n";
    //         return;
    //     }
    //     //1 put last element at root
    //     arr[1]=arr[size];
    //     // 2 rmeove last elemtn
    //     size--;

    //     //3 move root to its right positn
    //     int i=1;
    //     while(i<size){
    //         int leftIndex=i*2;
    //         int rightIndex=(i*2)+1;
    //     }
    // }

    

    void print(){
        for(int i=1;i<=size;++i){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


void heapify(int arr[],int n,int i){
        int largest =i;
        int left=2*i;
        int right =(2*i)+1;

// for 1 based indexing we use elft<=n if 0 based then left<n
        if(left<=n && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<=n && arr[right]>arr[largest]){
            largest=right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    void heapSort(int arr[],int n){
        int size=n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;
            heapify(arr,size,1);
        }
    }
int main()
{
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    //
    int arr[6]={-1,20,30,40,50,60};
    int n=5;
    for(int i=n/2;i>=1;--i){
        heapify(arr,n,i);
    }
}
// #include "bits/stdc++.h"
// using namespace std;

// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap(){
//         arr[0]=-1;
//         size=0;
//     }

//     void insert(int val){
//         size++;
//         int index=size;
//         arr[index]=val;
//         //  performing for max heap
//         while(index>1){
//             int parent=index/2;
//             if(arr[parent]<arr[index]){
//                 swap(arr[index],arr[parent]);
//                 index=parent;
//             }
//             else return;
//         }
//     }
//     void print(){
//         for(int i=1;i<=size;++i){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }
// };
// void heapify(int arr[],int n,int i){
//         int largest =i;
//         int left=2*i;
//         int right =(2*i)+1;

//         if(left<=n && arr[left]>arr[largest]){
//             largest=left;
//         }
//         if(right<=n && arr[right]>arr[largest]){
//             largest=right;
//         }

//         if(largest!=i){
//             swap(arr[largest],arr[i]);
//             heapify(arr,n,largest);
//         }
//     }
//     void heapSort(int arr[],int n){
//         int size=n;
//         while(size>1){
//             swap(arr[size],arr[1]);
//             size--;
//             heapify(arr,size,1);
//         }
//     }
// int main()
// {
//     int arr[6]={-1,50,52,53,54,55};
//     int n=5;
//     heapSort(arr,n);
//     for(int i:arr)cout<<i<<" ";
// }
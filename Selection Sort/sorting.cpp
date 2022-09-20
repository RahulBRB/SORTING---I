#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, size);

    return 0;
}

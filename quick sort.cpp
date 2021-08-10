#include<bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;

int partiton( int arr[], int l, int r){
    int pivot = arr[r];
    int i= l -1;
    for(int j=l;j<r ; j++){

        if(arr[j]<pivot){
            i++;
            swap(arr[i]  , arr[j] );
        }
    }
    swap(arr[i+1] , arr[r] ) ;
    return i+1;
}
void quickSort(int arr[] , int l  ,int r){    
    if(l<r){
        int pi  = partiton(arr,l,r);
        quickSort(arr , l  ,pi-1);
        quickSort(arr , pi+1  ,r);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    for ( int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
   return 0;
}

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k) return i;
    }
    return -1;
}

void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]) smallest=j;
        }
        swap(arr[i],arr[smallest]);
    }
}



int main(){
    int arr[10]={5,8,1,0,7,4,6,2,9,3};
    int n=10;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
    cout<<LinearSearch(arr,n,7)<<endl;
    cout<<LinearSearch(arr,n,17)<<endl;
    SelectionSort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
}

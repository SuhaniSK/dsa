//this solution is the most efficient solution with time complexity theta(n) and space complexity theta(1)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(int arr[],int left, int right){
    while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
}
}
void leftrotationbyd(int arr[],int n,int d){
   reverse(arr,0,d-1);
   reverse(arr,d,n-1);
   reverse(arr,0,n-1);
}

int main(){
    int d,n;
    cout<<"enter n\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter d\n";
    cin>>d;
    leftrotationbyd(arr,n,d);
    cout<<"elements in the array after rotation is:\n";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    delete[] arr;
    return 0;

}
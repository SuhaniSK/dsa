//this solution is with time complexity n and space complexity d

#include<iostream>
using namespace std;

void leftrotationbyd(int arr[],int n,int d){
   int temp[d];
   for(int i=0;i<d;i++)
   temp[i]=arr[i];
   for(int i=d;i<n;i++)
   arr[i-d]=arr[i];
   for(int i=0;i<d;i++)
   arr[n-d+i]=temp[i];
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
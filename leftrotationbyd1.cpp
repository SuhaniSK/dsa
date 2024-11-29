#include<iostream>
using namespace std;
void leftrotation(int arr[],int n){
int temp=arr[0];
for(int i=1;i<n;i++)
arr[i-1]=arr[i];
arr[n-1]=temp;
}
void leftrotationbyd(int arr[],int n,int d){
    for(int i=0;i<d;i++)
    leftrotation(arr,n);
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
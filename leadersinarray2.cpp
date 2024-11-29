#include<iostream>
using namespace std;
//time complexity is n but it will print the leaders from right to left
void leaders(int arr[],int n){
   int curmax=arr[n-1];
   cout<<curmax<<"\t";
   for(int i=n-2;i>=0;i--){
   if(arr[i]>curmax){
    curmax=arr[i];
    cout<<curmax<<"\t";
   }
   }
    
}
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the leaders in the array are:\n";
    leaders(arr,n);
    
    delete[] arr;
    return 0;

}
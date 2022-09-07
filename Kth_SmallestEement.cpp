#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[],int n,int k){
  sort(arr,arr+n);
  return arr[k-1];
}

int main(){
  int n,k;
  cout<<"Enter num of elements in array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter elements of array:-";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the k: ";
cin>>k;
  cout<<"Kth smallest element is: "<<kthSmallest(arr,n,k);
}
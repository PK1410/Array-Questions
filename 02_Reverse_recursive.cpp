#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){
 if(start>=end)
 return;

 int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reverseArray(arr,start+1,end-1); 
}

void printArray(int arr[],int size){
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
   cout<<endl;
}

int main(){
 cout<<"-------REVERSE AN ARRAY BY RECURSIVE METHOD-------\n";
 int n;
 cout<<"Enter no of element in array: ";
cin>>n;

int arr[n];
cout<<"Enter the elements of array: ";
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}

cout<<"Array before reversing:"<<endl;
printArray(arr, n);

reverseArray(arr,0,n-1);

cout<<"Reversed array:"<<endl;
printArray(arr,n);
  return 0;
}
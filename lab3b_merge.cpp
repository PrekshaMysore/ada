#include<iostream>
using namespace std;
    int arr[100],low,high,n;
    void input(){
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the unsorted element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    low=0;
    high=n-1;
    }

     void combine(int a[],int low,int mid,int high){
     int c[100];
     int i=low,j=mid+1,k=low;
     while(i<=mid && j<=high){
        if(a[i]<a[j]){
            c[k++]=a[i++];

        }
        else{
            c[k++]=a[j++];
        }
     }
     if(i>mid){
        while(j<=high){
            c[k++]=a[j++];
        }
     }
     if(j>high){
        while(i<=mid){
            c[k++]=a[i++];
        }
     }
     for(int t=0;t<=high;t++){
        a[t]=c[t];
     }
     }
     void split(int a[],int low,int high){
    if(low<high){
     int  mid=((low+high)/2);
     split(a,low,mid);
     split(a,mid+1,high);
     combine(a,low,mid,high);
     }}
     void display(){
        cout<<"sorted array\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
        }
    }
int main(){
input();
split(arr,low,high);
display();
    
}
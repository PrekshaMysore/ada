#include<iostream>
using namespace std;
    int arr[100],c[100],low,high,n,count=0;
    void input(){
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the unsorted element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    low=0;
    high=n;
    }

        void selesort1(int arr[],int n){
            int c[100],counts=0;
            for(int i=0;i<n;i++){
                c[i]=arr[i];
            }

        int i,j,temp;
        for( i=0;i<=n-2;i++){
            int min=i;
            for(j=i+1;j<=n-1;j++){
                counts++;
                if(c[j]<c[min]){
                    min=j;

                }
                }
            temp=c[i];
                c[i]=c[min];
                c[min]=temp;

        }
        cout<<"the number of comparisons in selection sort="<<counts<<"\n";
}
void bblsort1(int arr[],int n){
    int c[100],counts=0;
     for(int i=0;i<n;i++){
                c[i]=arr[i];}
        int i,j,temp;
        for(i=0;i<=n-2;i++){
            for(j=0;j<=n-2-i;j++){
                counts++;
                if(c[j+1]<c[j]){
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;

                }
            }
        }
        cout<<"number of comparisons in bubble sort "<<counts<<"\n";
        }
void combine(int cc[],int low,int mid,int high){

     int c[100];
     int i=low,j=mid+1,k=low;
     while(i<=mid && j<=high){
         count++;
        if(cc[i]<cc[j]){
            c[k++]=cc[i++];


        }
        else{
            c[k++]=cc[j++];
        }
     }
     if(i>mid){
        while(j<=high){
            c[k++]=cc[j++];
        }
     }
     if(j>high){
        while(i<=mid){
            c[k++]=cc[i++];
        }
     }
     for(int t=0;t<=high;t++){
        arr[t]=c[t];
     }
     }
   void split(int a[],int low,int high){
    if(low<high){
     int  mid=((low+high)/2);
     split(a,low,mid);
     split(a,mid+1,high);
    combine(a,low,mid,high);
     }
     }

int main(){
    input();
    selesort1(arr,n);
    bblsort1(arr,n);
    split(arr,low,high);
    cout<<"the number of comparisons in merge sort"<<count;
    return  0;
}

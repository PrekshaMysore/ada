#include<iostream>
using namespace std;
class ksmall {
    int arr[100],k,n;
public:
    void input(){
        cout<<"enter the size of array \n";
        cin>>n;
        cout<<"enter the array elements\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"enter the value of k =";
        cin>>k;
    }
    void selesort(){
        int i,j,temp;
        for( i=0;i<=k-1;i++){
            int min=i;
            for(j=i+1;j<=n-1;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }

            }
            temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }

        cout<<k<<"th smallest element is "<<arr[k-1]<<"\n";


    }
};
int main(){
    ksmall ks;
    ks.input();
    ks.selesort();
    return 0;
    
}
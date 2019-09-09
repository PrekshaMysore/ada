#include<iostream>
using namespace std;
class klarge{
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
    void bblsort(){
        int i,j,temp;
        for(i=0;i<=k-1;i++){
            for(j=0;j<=n-2-i;j++){
                if(arr[j+1]<arr[j]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            cout<<arr[n-i-1]<<"\n";
        }


    }
};
int main(){
    klarge kl;
    kl.input();
    kl.bblsort();
    return 0;
      
}
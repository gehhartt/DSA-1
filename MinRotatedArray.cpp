#include<iostream>
using namespace std;

int minRotatedArray(int array[],int n){
        int low=0;
        int high=n;
        // int mid=(low+high)/2;
        
        if(array[0]<array[n])
            return array[0];
        
        while(low<high){
            int mid=(low+high)/2;
            
            if(array[mid]>array[mid+1]){
                return array[mid+1];
            }
            else if(array[mid]<array[mid-1]){
                return array[mid-1];
            }
            else if(array[mid]>array[low]){
                low=mid+1;
            }
            else if(array[high]>array[mid]){
                high=mid-1;
            }
            // else if()
        }
    return -1;
        
    }

int main(){
    int arr[]={4,5,6,7,1,2,3};
    int n=sizeof(arr[0]);
    cout<<minRotatedArray(arr,n);
    
    return 0;
    
}

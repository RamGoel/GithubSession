

#include <iostream>

using namespace std;
int linearSearch(int arr[],int n,int item){
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[],int start,int end,int item){
    while(start<end){
        int mid=(start+end)/2;
        
        if(arr[mid]==item){
            return mid;
        }else if(arr[mid]<item){
            start=mid;
        }else if(arr[mid]>item){
            end=mid;
        }
    }
    return -1;
}

int linearSearchWithRecursion(int arr[],int index,int n,int item){
    if(index<n){
        
    if(arr[index]==item){
        return index;
    }else{
        linearSearchWithRecursion(arr,index+1,n,item);
    };
    }else{
        return -1;
    }
        
}
int main()
{
    
    int arr[8]={23,24,25,26,27,28,29,30};
    
    if(linearSearch(arr,8,27)!=-1){
        cout<<"Found at "<<linearSearch(arr,8,27)<<" location";
    }else{
        cout<<"Element Not Found";
    }
    
    cout<<endl;
    
    if(binarySearch(arr,0,8,24)!=-1){
        cout<<"Found at "<<binarySearch(arr,0,8,24)<<" location";
    }else{
        cout<<"Element Not Found";
    }
    
    cout<<endl;
    
    if(linearSearchWithRecursion(arr,0,8,29)!=-1){
        cout<<"Found at "<<linearSearchWithRecursion(arr,0,8,29)<<" location";
    }else{
        cout<<"Element Not Found";
    }
    
    
}

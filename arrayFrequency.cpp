#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(int arr[],int size){
    vector<int> a;
    
    for(int i=0;i<size;i++){
        int key=arr[i];
        int count=0;
        for(int k=0;k<size;k++){
            if(arr[k]==key){
                count++;
            }
        }
        
        a.push_back(count);
        if(count==1){
            cout<<key<<" is unique"<<endl;
        }
    }
    
    return a;
}

int main(){
    int arr[9]={23,23,22,19,12,14,15,14,12};
    
    vector<int> b;
    b=findDuplicates(arr,9);
    // cout<<findDuplicates(arr,9);
    
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    
    
}
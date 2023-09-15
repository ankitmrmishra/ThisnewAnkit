#include <iostream>
using namespace std;
int search(int arr[],int n, int x){
     for (int i=0;i < n;i++){
            if (arr[i]==x)
            return 1;}
}
int main(){
    int arr[]={1,2,3,4,5,7};    
    int x = 10;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = search(arr,n,x);
    (result== -1)? cout<<"element is not present" :
    cout<<"element is present";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;




int slideingWindow(int arr[],int n, int k){
    int i = 0;
    int j = 0;
    int sum = 0,mx = INT_MIN;
    while(j < n){
        sum += arr[j];
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            mx = max(mx,sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    return mx;
}


int main(){
    
    int arr[] = {2, 5, 1, 8, 2, 9, 1};
    int n = sizeof(arr)/sizeof(0);
    int k = 3;

    cout<<slideingWindow(arr,n,k);


}
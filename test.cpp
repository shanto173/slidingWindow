#include <bits/stdc++.h>
using namespace std;
 



vector<int> firstNegativeInEveryWindow(int arr[],int k,int n){

    vector<int> v;
    list<int> l;

    int i = 0;
    int j = 0;

    while(j < n){
        if(arr[j] < 0){
            l.push_back(arr[j]);
        }
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            if(l.size() == 0){
                v.push_back(0);
            }
            else{
                v.push_back(l.front());
                if(arr[i] == l.front()){
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }

    return v;
}


int main(){
    
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;

    vector<int> v = firstNegativeInEveryWindow(arr,k,n);

    for(auto at : v){
        cout<<at<<" ";
    }

}
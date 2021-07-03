#include <bits/stdc++.h>
using namespace std;
 


vector<int> firstNegativeInEveryWindow(int arr[],int size,int k){

    list<int> l;
    vector<int> v;
    int i=0,j=0;

    while(j < size){
        if(arr[j] < 0){
            l.push_back(arr[j]);
        }
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(l.size() == 0){
                v.push_back(0);
            }
            else{
                v.push_back(l.front());
                if(l.front() == arr[i]){
                    l.pop_front();
                }
            }
            i++;
            j++;
        }   
        
    }
    return v;


}


int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr)/sizeof(0);
    int k = 3;

    vector<int> v = firstNegativeInEveryWindow(arr,size,k);

    for(auto at: v){
        cout<<at<<" ";
    }
    return 0;
}
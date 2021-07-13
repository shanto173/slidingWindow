#include <bits/stdc++.h>
using namespace std;
 


vector<int> maximumOfAllSubarrayOfSizeK(int arr[],int k,int n){
	vector<int> ans;
	list<int> l;
	int i=0,j=0;

	while(j < n){

		while(l.size() > 0 and arr[j] > l.back()){
			l.pop_back();
		}
		l.push_back(arr[j]);
		if(j-i+1 < k){
			j++;
		}
		else if(j-i+1 == k){
			ans.push_back(l.front());
			if(arr[i] == l.front()){
				l.pop_front();
			}
			i++;
			j++;
		}
	}

	return ans;
}


int main(){
    
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = sizeof(arr)/sizeof(0);

    vector<int> ans = maximumOfAllSubarrayOfSizeK(arr,k,n);

    for(auto at:ans){
    	cout<<at<<" ";
    }



}
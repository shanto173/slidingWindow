#include <bits/stdc++.h>
using namespace std;
 


int countOccurrencesOfAnagrame(string s,string ptr){

    map<char,int> mp;
    for (int i = 0; i < ptr.size(); ++i)
    {
        mp[ptr[i]]++;
    }

    int i=0,j=0;
    int ans = 0;
    int k = ptr.size();
    int count = mp.size();
    while(j < s.size()){    

        mp[s[j]]--;
        if(mp[s[j]] == 0){
            count--;
        }
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            
            mp[s[i]]++;
            if(count == 0){
                ans++;
            }
            if(mp[s[i]] >= 1){
                count++;
            }
            i++;
            j++;
        }
    }

    return ans;

}



int main(){
    
    string s = "aabaabaa";
    string ptr = "aaba";

    // string s = "forxxorfxdofr";
    // string ptr = "for";


  
    cout<<countOccurrencesOfAnagrame(s, ptr);

}
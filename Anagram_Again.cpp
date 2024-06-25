#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long


bool areAnagrams(string& word1, string& word2) {
  if (word1.length() != word2.length()) {
    return false; // Different lengths, can't be anagrams
  }

  unordered_map<char, int> char_counts;
  for (char c : word1) {
    char_counts[c]++;
  }

  for (char c : word2) {
    if (char_counts.find(c) == char_counts.end() || char_counts[c] == 0) {
      return false; // Character not found or used up in word1
    }
    char_counts[c]--;
  }

  // If all counts in the map are 0, they are anagrams
  return all_of(char_counts.begin(), char_counts.end(), [](const auto& pair) {
    return pair.second == 0;
  });
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool res = areAnagrams("code", "decon");

    if(res){
        cout<<"y"<<en;
    }else{
        cout<< "n"<<en;
    }

    // ll t;
    // cin>>t;

    // for(ll i=1;i<=t;i++){
    //     ll n;
    //     cin>>n;
    //     string a[n];
    //     for(ll j = 0;j<n;j++){
    //         cin>> a[j];
    //     }
    //     ll q;
    //     cin>> q;
    //     string b[q];
    //     for(ll k = 0;k<q;k++){
    //         cin>> b[k];
    //     }

         
    //     for(ll i=0;i<q;i++){
    //         ll count = 0;
    //         for(ll j=0;j<n;j++){
    //             // cout<< a[i]<<en;
    //             cout<< a[j]<<en;
    //             if(areAnagrams(b[i], a[j])){
    //                 count++;
    //             }
    //         }
    //         cout<< count <<en;
    //     }

        

    // }
    
    return 0;
}
/*
* @author: sgshubham98
* @created:   2020-05-17 15:20:36
* @last Modified: 2020-05-17 23:08:36
*/
#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

const int no_of_chars = 256; 
  
// Function to find smallest window containing 
// all characters of 'pat' 
string findSubString(string str, string pat) 
{ 
    int len1 = str.length(); 
    int len2 = pat.length(); 
  
    // check if string's length is less than pattern's 
    // length. If yes then no such window can exist 
    if (len1 < len2) 
    { 
        return ""; 
    } 
  
    int hash_pat[no_of_chars] = {0}; 
    int hash_str[no_of_chars] = {0}; 
  
    // store occurrence ofs characters of pattern 
    for (int i = 0; i < len2; i++) 
        hash_pat[pat[i]]++; 
  
    int start = 0, start_index = -1, min_len = INT_MAX; 
  
    // start traversing the string 
    int count = 0; // count of characters 
    for (int j = 0; j < len1 ; j++) 
    { 
        // count occurrence of characters of string 
        hash_str[str[j]]++; 
  
        // If string's char matches with pattern's char 
        // then increment count 
        if (hash_pat[str[j]] != 0 && 
            hash_str[str[j]] <= hash_pat[str[j]] ) 
            count++; 
  
        // if all the characters are matched 
        if (count == len2) 
        { 
            // Try to minimize the window i.e., check if 
            // any character is occurring more no. of times 
            // than its occurrence in pattern, if yes 
            // then remove it from starting and also remove 
            // the useless characters. 
            while ( hash_str[str[start]] > hash_pat[str[start]] 
                || hash_pat[str[start]] == 0) 
            { 
  
                if (hash_str[str[start]] > hash_pat[str[start]]) 
                    hash_str[str[start]]--; 
                start++; 
            } 
  
            // update window size 
            int len_window = j - start + 1; 
            if (min_len > len_window) 
            { 
                min_len = len_window; 
                start_index = start; 
            } 
        } 
    } 
  
    // If no window found 
    if (start_index == -1) {
    return ""; 
    } 
  
    // Return substring starting from start_index 
    // and length min_len 
    return str.substr(start_index, min_len); 
}

int main() {
	fast
	test{
		string pat = "123";
		string str; cin >> str;
    	cout << findSubString(str, pat).length() << nl; 
	}
	return 0;
} 
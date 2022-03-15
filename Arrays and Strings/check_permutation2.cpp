#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

//Less efficient way: Sort the strings in O(NlogN) and check for equal strings
//Better:
//Time complexity: O(N)
//Space complexity: O(1)
bool checkPermutation(string s1, string s2) {
    if(s1.length() != s2.length()){
        return false;
    }
    int map[128] = {0};
    for(int i = 0; i < s1.length(); i++){
        map[s1[i]]++;
    }
    for(int i = 0; i < s2.length(); i++){
        map[s2[i]]--;
        if(map[s2[i]] < 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "appl epen";
    string s2 = "pple anep";
    cout<<"Output is "<<checkPermutation(s1, s2);
    return 0;
}
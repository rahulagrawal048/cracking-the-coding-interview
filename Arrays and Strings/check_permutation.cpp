#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

//Time complexity: O(N)
//Space complexity: O(N)
bool checkPermutation(string s1, string s2) {
    if(s1.length() != s2.length()){
        return false;
    }
    unordered_map<char,int> map1, map2;
    for(auto s: s1){
        map1[s]++;
    }
    for(auto s: s2){
        map2[s]++;
    }
    for(auto s: s1){
        if(map2.count(s) == 0){
            return false;
        }
        if(map1.at(s) != map2.at(s)){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "apple pen";
    string s2 = "pplea nep";
    cout<<"Output is "<<checkPermutation(s1, s2);
    return 0;
}
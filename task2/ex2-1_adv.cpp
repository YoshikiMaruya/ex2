#include<iostream>
using namespace std;

void dfs(string s){
    if(s.size()==3){
        cout<<s<<endl;
        return;
    }
    for(char c='a';c<='c';c++){
        dfs(s+c);
    }
    return;
}

int main(){
 dfs("");
 return 0;
}
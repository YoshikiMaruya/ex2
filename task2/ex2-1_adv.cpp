    #include<iostream>
    using namespace std;
    
    void dfs(string s){
        if(s.size()==3){
            for(int i=0;i<s.size();i++){
                for(int j=1;j<s.size();j++){
                    if(i==j) continue;
                         else if(s[i]!=s[j]){
                            if(i==2){
                                cout<<s<<endl;
                                return;
                            }
                        }
                        else return;
                    }
                }
                
            }
                dfs(s+'a');
                dfs(s+'d');
                dfs(s+'g');
    }
    
    int main(){
     dfs("");
     return 0;
    }
#include <iostream>
using namespace std;
bool is_Identifier(string s){
    if(!((s[0] <= 'z' && s[0] >= 'a')||(s[0] <= 'Z' && s[0] >= 'A')|| s[0] == '_')){
        return false;
    }
    for(int i = 1;i < s.size();i++){
        if(!((s[i] <= 'z' && s[i] >= 'a')||(s[i] <= 'Z' && s[i] >= 'A')|| s[i] == '_' || ((s[i] <= '9' && s[i] >= '0')))){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(is_Identifier(s)){
        cout<<"It is a Identifier.\n";
    }
    else{
        cout<<"Not an Identifier!!";
    }
    return 0;
}
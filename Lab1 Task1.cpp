#include <iostream>
using namespace std;
bool is_Numeric(string s){
    for(int i = 0;i < s.size();i++){
        if(!(s[i] <= '9' && s[i] >= '0')){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(is_Numeric(s)){
            cout<<"The number is Numeric\n";
        }
        else{
            cout<<"Not Numeric\n";
        }
    }
}
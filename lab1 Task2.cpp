#include <iostream>
using namespace std;
bool is_operator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '='){
        return true;
    }
    return false;
}
int main()
{
    char c;
    cin>>c;
    if(is_operator(c)){
        cout<<"It is an Operator\n";
    }
    else{
        cout<<"Not an Operator\n";
    }
    return 0;
}
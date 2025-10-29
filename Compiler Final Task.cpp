#include <iostream>
#include <vector>
using namespace std;
bool is_Numeric(string s){
    for(int i = 0;i < s.size();i++){
        if(!(s[i] <= '9' && s[i] >= '0')){
            return false;
        }
    }
    return true;
}
bool is_operator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '='){
        return true;
    }
    return false;
}
bool is_comment_line(string s){
    bool single_comment = false;
    int single_index,mul_starting,mul_ending;
    bool start_comment = false;
    bool Multiple_line_comment = false;
    for(int i = 0;i < s.size()-1;i++){
        if(s[i] =='/' && s[i+1] == '/'){
            single_comment = true;
            single_index = i+2;
        }
        if(s[i] == '/' && s[i+1] == '*'){
            start_comment = true;
            mul_starting = i+2;
        }
        else if(s[i] == '*' && s[i+1] == '/' && start_comment){
            Multiple_line_comment = true;
            mul_ending = i-1;
        }

    }
    if(single_comment){
        cout<<"There is a single line comment\n";
        cout<<"Comment: ";
        for(int i = single_index;i < s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    if(Multiple_line_comment){
        cout<<"There is multiple line comment\n";
        cout<<"Comment: ";
        for(int i = mul_starting;i <= mul_ending;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    if(!single_comment && !Multiple_line_comment){
        cout<<"There is no comment line\n";
    }
}
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
double count_avg(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    double sum = 0;
    for(int i = 0;i < v.size();i++){
        sum+=v[i];
    }
    return (sum/v.size());
}
int find_min_max(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    int mx = 0;
    for(int i = 0;i < v.size();i++){
        mx = max(v[i],mx);
    }
    int mn = v[0];
    for(int i = 0;i < v.size();i++){
        mn = min(v[i],mn);
    }
    cout<<"Maximum Element: "<<mx<<endl;
    cout<<"Minimum Element: "<<mn<<endl;
}
string concate_name(string s1,string s2){
    char s3[s1.size()+1+s2.size()+1];
    int i;
    for(i = 0;i < s1.size();i++){
        s3[i] = s1[i];
    }
    s3[s1.size()] = ' ';
    for(int j = 0;j < s2.size();j++){
        s3[++i] = s2[j];
    }
    s3[++i] = '\0';
    return s3;

}
int main(){
    cout<<"Press 1 to Check Numeric. \n";
    cout<<"Press 2 to Check Operator. \n";
    cout<<"Press 3 to Check Comment Line. \n";
    cout<<"Press 4 to Check Identifier. \n";
    cout<<"Press 5 to find Average. \n";
    cout<<"press 6 to find Minimum and Maximum. \n";
    cout<<"Press 7 to Concate Name. \n";
    cout<<"press 0 to Exit!\n";
    while(1){
        cout<<"Enter Key: ";
        int x;
        cin>>x;
        if(x == 0){break;}
        else if(x == 1){
            string s;
            cout<<"Enter String: ";
            cin>>s;
            if(is_Numeric(s)){
                cout<<"String is Numeric.\n";
            }
            else{
                cout<<"String is not Numeric!\n";
            }
        }
        if(x == 2){
            char s;
            cin>>s;
            if(is_operator(s)){
                cout<<"it is a Operator!\n";
            }
            else{
                cout<<"Not an Operator!\n";
            }
        }
        if(x == 3){
            string s;
            cout<<"Enter String: ";
            cin>>s;
            is_comment_line(s);
        }
        if(x == 4){
            string s;
            cout<<"Enter String: ";
            cin>>s;
            if(is_Identifier(s)){
                cout<<"It is a Identifier.\n";
            }
            else{
                cout<<"Not an Identifier!!";
            }
        }
        if(x == 5){
            cout<<count_avg()<<endl;
        }
        if(x == 6){
            find_min_max();
        }
        if(x == 7){
            string s1,s2;
            cout<<"Enter First Name: ";
            cin>>s1;
            cout<<"Enter Last Name: ";
            cin>>s2;
            cout<<"Full Name: "<<concate_name(s1,s2)<<endl;
        }
    }
}
#include <iostream>
#include <vector>
using namespace std;
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
    string s1,s2;
    cout<<"Enter First Name: ";
    cin>>s1;
    cout<<"Enter Last Name: ";
    cin>>s2;
    cout<<concate_name(s1,s2);
    return 0;
}
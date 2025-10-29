#include <iostream>
#include <vector>
using namespace std;
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

int main(){
    find_min_max();
}
#include <iostream>
#include <vector>
using namespace std;
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
int main(){
    cout<<count_avg()<<endl;
}
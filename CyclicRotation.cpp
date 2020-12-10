#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int main(){
    int K=4;
    vector<int> A{2,6,3,7,9};
    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }
    rotate(A.begin(),A.begin()+A.size()-K,A.end());
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

}

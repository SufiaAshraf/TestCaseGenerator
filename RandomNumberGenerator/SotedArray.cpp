#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

#define RUN 7
#define MAX 10000
#define Maxi 10000

int main(){
    OJ;
    srand(time(NULL));
    for(int i=1; i<=RUN; i++){
        int Num = 1+rand()%Maxi;
        cout<<Num<<endl;
        vector<int>arr;
        for(int j=1; j<Num/2; j++){
            arr.push_back(1+rand()%MAX);
        }
        for(int j=Num/2; j<=Num; j++){
            arr.push_back(1+rand()%MAX - MAX/2);
        }
        sort(arr.begin(),arr.end());
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl<<endl<<endl;
    }
}
#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

#define RUN 7
#define MAX 100000
#define Maxi 10000

int main(){
    OJ;
    srand(time(NULL));
    for(int i=1; i<=RUN; i++){
        int Num = 1+rand()%Maxi;
        
        cout<<Num<<endl;
        for(int j=1; j<=Num; j++){
            cout<<rand()%MAX<<" ";
        }
        int K = 1+rand()%Maxi;
        cout<<K<<endl;
        cout<<endl<<endl<<endl;
    }
}
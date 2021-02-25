#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

#define RUN 9
#define MAX 2
#define Maxi 100000

int main(){
    OJ;
    srand(time(NULL));
    for(int i=1; i<=RUN; i++){
        int Num = rand()%Maxi;
        cout<<Num<<endl;
        // for(int i=0; i<Num ; i++){
        //     cout<<rand()%Maxi<<" ";
        // }
        cout<<endl;
        cout<<endl<<endl;
    }
}
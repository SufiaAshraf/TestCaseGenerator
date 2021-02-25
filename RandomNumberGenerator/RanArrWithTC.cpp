#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);


#define MAX 3000
#define Maxi INT_MAX
#define TC 10
int main(){
    OJ;
    srand(time(NULL));
    int T = 1+rand()%TC;
    cout<<T<<endl;
    for(int i=1; i<=T; i++){
        int Num = 1+rand()%MAX;
        int n = 1+rand()%MAX;
        cout<<Num<<" "<<n<<endl;
        for(int j=1; j<=Num; j++){
            cout<<rand()%Maxi<<" ";
        }
        cout<<endl;
        for(int j=1; j<=n; j++){
            cout<<rand()%Maxi<<" ";
        }
        cout<<endl<<endl<<endl;
    }
}
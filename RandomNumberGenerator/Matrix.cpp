#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

#define RUN 8
#define MAX 100
#define Maxr 50
#define Maxc 50

int main(){
    OJ;
    srand(time(NULL));
    for(int i=1; i<=RUN; i++){
        int row= 1+rand()%Maxr;
        int col = 1+rand()%Maxc;
        cout<<row<<" "<<col<<endl;
        for (int j=1; j<=row; j++){
            for (int k=1; k<=col; k++) {
                cout<<(rand()%MAX-MAX/2)<<" ";
            }
            cout<<endl;
        }
        cout<<rand()%min(row,col)<<endl;
        cout<<endl<<endl<<endl;
    }
}
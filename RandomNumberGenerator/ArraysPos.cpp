#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

void swap(int*a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void shuffle(int*a, int n){
    srand(time(NULL));
    for(int i=n-1; i>0; i--){
        int j=rand()%(i+1);
        swap(&a[i],&a[j]);
    }
}
int main(){
    OJ;
    int n;
    cin>>n;
    int a[n];
    int x=10;
    for(int i=0; i<n; i++){
        a[i]=rand()%x;
        x=x*10;
        if(x==10000){
            x=10;
        }
    }
    shuffle(a,n);
    cout<<n<<endl;
    // cout<<"[";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    // cout<<"]";
}
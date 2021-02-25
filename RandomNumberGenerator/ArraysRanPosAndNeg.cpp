#include<iostream>
#include <bits/stdc++.h>
using namespace std;

#define OJ\
    freopen("InputRan.txt","r",stdin);\
    freopen("OutputRan.txt","w",stdout);

int randomize(){
    return (rand()%INT_MAX);
}
int randomizeNeg(){
    return (rand()%INT_MIN);
}

void swap(int*a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void shuffle(vector<int>&myarr, int N){
    srand(time(NULL));
    for(int i=N-1; i>0; i--){
        int j=rand()%(i+1);
        swap(&myarr[i],&myarr[j]);
    }
}

int main(){
    OJ;
    for(int k=0; k<6; k++){
        int n = rand()%10000; 
        cout<<n<<endl;
        srand(time(NULL));
        vector<int>myarr;

        for(int i=0; i<n/2; i++){
            myarr.push_back(1+rand()%10000);
        }
        for(int i=n/2; i<n; i++){
            myarr.push_back(-1*(1+rand()%10000));
        }
        shuffle(myarr,n);
        for(auto x:myarr){
            cout<<x<<" ";
        }
        cout<<endl;
        myarr.clear();
        cout<<endl<<endl;
    }
}
#include<bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;

#define OJ\
        freopen("InputRan.txt","r",stdin);\
        freopen("OutputRan.txt","w",stdout);

#define RUN 8
#define MAX 100
#define Maxr 50
#define Maxc 50

void sortByRow(int mat[Maxr][Maxc], int n) 
{ 
    for (int i = 0; i < n; i++) 
        sort(mat[i], mat[i] + n); 
} 
  
// function to find transpose of the matrix 
void transpose(int mat[Maxr][Maxc], int n) 
{ 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++){ 
            swap(mat[i][j], mat[j][i]);
        }
    }   
} 

void sortMat(int mat[Maxr][Maxc],int row){
    sortByRow(mat,row);
    transpose(mat,row);
    sortByRow(mat,row);
    transpose(mat,row);
}



int main(){
    OJ;
    srand(time(NULL));
    for(int i=1; i<=RUN; i++){
        int mat[Maxr][Maxc];
        int row= 1+rand()%Maxr;
        // int col = 1+rand()%Maxc;
        cout<<row<<endl;
        for (int j=0; j<row; j++){
            for (int k=0; k<row; k++) {
                int x = rand()%MAX-MAX/2;
                mat[j][k]=x;
            }
        }
        // sortMat(mat,row);
        for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                cout<< mat[i][j] << " ";
            }
            cout<<endl;
        }
        cout<<endl<<endl<<endl;
    }
}
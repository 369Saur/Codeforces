#include<bits/stdc++.h>
using namespace std ;

int toggle(int n){
    if(n == 0){
        return 1 ;
    }
    return 0 ;
}

int main(){
    int grid[3][3] , mat[3][3] = {{1,1,1},{1,1,1},{1,1,1}} ;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> grid[i][j] ;
            if(grid[i][j]%2 != 0){

                //centre
                mat[i][j] = toggle(mat[i][j]) ;

                //left
                if(j > 0){
                    mat[i][j-1] = toggle(mat[i][j-1]) ;
                }

                //right
                if(j < 2){
                    mat[i][j+1] = toggle(mat[i][j+1]) ;
                }

                //up
                if(i > 0){
                    mat[i-1][j] = toggle(mat[i-1][j]) ;
                }

                //down
                if(i < 2){
                    mat[i+1][j] = toggle(mat[i+1][j]) ;
                }
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << mat[i][j] ;
        }
        cout << endl ;
    }
    return 0 ;
}
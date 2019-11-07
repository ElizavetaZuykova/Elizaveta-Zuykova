#include <iostream>
using namespace std;
int build_ziggurat(int n, int **m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if (i<j){
                m[i][j]=i+1;
            }
            else{
                 m[i][j]=j+1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j<n; j++){
            if (i<j){
                m[i][j]=n-j;
            }
            else{
                 m[i][j]=n-i;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

               cout<< m[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){

    int k;
    cin>>k;
    int **ziggurat = new int* [k];
    for (int i =0 ; i<k; i++){
        ziggurat[i] = new int[k];
    }
    build_ziggurat(k, ziggurat);

}

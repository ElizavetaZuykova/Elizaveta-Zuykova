#include <iostream>
#include <algorithm>
using namespace std;
int dig_trench(int n, int **m){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

                m[i][j]=abs(i-j);


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
    int **Trench = new int* [k];
    for (int i =0 ; i<k; i++){
        Trench[i] = new int[k];
    }
    dig_trench(k, Trench);

}

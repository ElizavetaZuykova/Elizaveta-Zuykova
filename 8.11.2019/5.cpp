#include <iostream>
using namespace std;
int c=1;
int put_snake(int s, int k, int **sn){

        for(int j=0; j<s; j++){
            if (j%2==0){
                for (int i=k-1; i>=0; i--){
                    sn[j][i]=c;
                    c++;
                }}
             else  {
                for (int i=0; i<k; i++){
                    sn[j][i]=c;
                    c++;
                }
             }
        }

    for(int i=0; i<s; i++){
        for(int j=0; j<k; j++){

               cout<< sn[i][j]<<'\t';

        }
        cout<<endl;
    }
}

int main(){

    int n, m;
    cin>>n>>m;
    int **snake = new int* [n];

    for (int i = 0 ; i < n ; i++){
        snake[i] = new int[m];
    }
    put_snake(n, m , snake);

}


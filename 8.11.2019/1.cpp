#include <iostream>
using namespace std;

int delete_duplicates (int n, int *m){
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            if (m[i]==m[j]){
                for (int g=i; g<n-1 ; g++ ){
                    m[g]=m[g+1];
                }
                n--;
            }

        }
    }
    for (int i=0; i<n; i++){
        cout<<m[i]<<" ";
    }
}
int main(){

    int k;
    cin>>k;
    int *Arrey = new int [k];
    for (int i=0; i<k; i++){
        cin>>Arrey[i];
    }
    delete_duplicates (k, Arrey);

}

#include <iostream>
using namespace std;
int pr (int c){
    int k=0;
    for (int i=1; i<c; i++){
        if (c%i==0){
            k++;
        }


    }
    if (k==1){
            return 0;
        }
    else {
            return 1;
    }
}
int delete_annoying_primes (int n, int *m){
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            if (m[i]==m[j] && pr(m[i])==0){
               
                for (int g=j; g<n-1; g++ ){
                    m[g]=m[g+1];
                }
                n--;

                for (int f=i-1; f<n-1 ; f++ ){
                    m[f]=m[f+1];
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
    delete_annoying_primes (k, Arrey);



}


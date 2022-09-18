#include <iostream>
using namespace std;

int main() {
    int N, i, j, temp, alice = 0, bob = 0;

    scanf("%d", &N);

    int a_i[N + 1] = {};

    for(i = 0; i < N; i++){
        scanf("%d", &a_i[i]);
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(a_i[j] < a_i[j + 1]){
                temp = a_i[j];
                a_i[j] = a_i[j + 1];
                a_i[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < N; i += 2){
        alice += a_i[i];
    }
    
    for(i = 1; i < N; i += 2){
        bob += a_i[i];
    }

    printf("%d\n", alice - bob);

    return 0;
}
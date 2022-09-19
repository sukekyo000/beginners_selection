#include <iostream>
using namespace std;

int main() {
    int N, i, j, temp, out_num = 0;

    scanf("%d", &N);

    int d_i[N + 1] = {};

    for(i = 0; i < N; i++){
        scanf("%d", &d_i[i]);
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(d_i[j] < d_i[j + 1]){
                temp = d_i[j];
                d_i[j] = d_i[j + 1];
                d_i[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < N; i++){
        if(i != N && d_i[i] > d_i[i + 1]){
            out_num++;
        }
    }

    printf("%d\n", out_num);

    return 0;
}
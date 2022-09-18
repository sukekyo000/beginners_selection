#include <iostream>
using namespace std;

int main() {
    int A, B, C, X, i, j, k, out_num = 0, sum;
    
    scanf("%d %d %d %d", &A, &B, &C, &X);

    for(i = 0; i <= A; i++){
        for(j = 0; j <= B; j++){
            for(k = 0; k <= C; k++){
                sum = (i * 500) + (j * 100) + (k * 50);
                if(sum == X){
                    out_num++;
                }
            }
        }
    }

    printf("%d\n", out_num);

    return 0;
}
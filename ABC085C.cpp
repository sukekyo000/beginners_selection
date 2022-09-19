#include <iostream>
using namespace std;

int main() {
    int N, Y, i, j, k, sum, out_num = 0, pattern[3] = {};

    string judge = "false";

    scanf("%d %d", &N, &Y);

    for(i = 0; i <= N; i++){
        for(j = 0; j <= N - i; j++){
            for(k = 0; k <= N - i - j; k++){
                sum = (10000 * i) + (5000 * j) + (1000 * k);
                if(sum == Y && (i + j + k) == N){
                    judge = "true";
                    pattern[0] = i;
                    pattern[1] = j;
                    pattern[2] = k;
                    break;
                }
            }
        }
    }

    if(judge == "false"){
        printf("%d %d %d\n", -1, -1, -1);
    } else if (judge == "true"){
        printf("%d %d %d\n", pattern[0], pattern[1], pattern[2]);
    }

    return 0;
}
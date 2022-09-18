#include <iostream>
using namespace std;

int SumEachDigit(int n){
    int total = 0;
    while(n > 0){
        total += n % 10;
        n /= 10;
    }
    return total;
}

int main() {
    int N, A, B, i, j, sum_digit = 0, total = 0;

    scanf("%d %d %d", &N, &A, &B);
    
    for(i = 1; i <= N; i++){
        sum_digit = SumEachDigit(i);
        if(A <= sum_digit && sum_digit <= B){
            total += i;
        }
    }

    printf("%d\n", total);

    return 0;
}
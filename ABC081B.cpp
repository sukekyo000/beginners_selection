#include <iostream>
using namespace std;

int main() {
    int n, i, j, out_num = 0;
    string check = "true";
    
    scanf("%d", &n);

    long int A_n[n] = {};

    for(i = 0; i < n; i++){
        scanf("%ld", &A_n[i]);
    }

    while(check == "true"){
        for(i = 0; i < n; i++){
            if(A_n[i] % 2 == 0){
                A_n[i] = A_n[i] / 2;
            } else {
                check = "false";
                break;
            }
        }
        if(check == "false"){
            break;
        } else {
            out_num++;
        }
    }


    printf("%d\n", out_num);

    return 0;
}
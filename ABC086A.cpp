#include <iostream>
using namespace std;

int main() {
    int a , b;
    string even = "Even", odd = "Odd";
    
    scanf("%d %d", &a, &b);

    if((a * b) % 2 == 0){
        printf("%s\n", even.c_str());
    } else {
        printf("%s\n", odd.c_str());
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;
    char s[3];
    
    scanf("%s", s);

    for(i = 0; i < 3; i++){
        if(s[i] == '1'){
            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}
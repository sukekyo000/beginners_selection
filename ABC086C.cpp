#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, i;
    bool judge = true;

    scanf("%d", &N);

    int t_i[N + 1] = {}, x_i[N + 1] = {}, y_i[N + 1] = {};

    for(i = 0; i < N; i++){
        scanf("%d %d %d", &t_i[i], &x_i[i], &y_i[i]);
    }

    for(i = 0; i < N; i++){
        if((t_i[i] < x_i[i]) || t_i[i] < y_i[i]){
            judge = false;
            break;
        }
        if(abs((x_i[i + 1] - x_i[i]) + (y_i[i + 1] - y_i[i])) > abs(t_i[i + 1] - t_i[i])){
            judge = false;
            break;
        }
        if((t_i[i] % 2) != ((x_i[i] + y_i[i]) % 2)){
            judge = false;
            break;
        }
    }

    if(judge == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
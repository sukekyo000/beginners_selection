#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int i, j;

    string S;

    cin >> S;

    printf("%s\n", std::reverse(S.begin(), S.end()));

    return 0;
}
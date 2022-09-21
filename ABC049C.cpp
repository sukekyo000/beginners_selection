#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int i, j, words_num;
    string S, words[4] = {"dream", "dreamer", "erase", "eraser"};
    bool judge = true;

    cin >> S;

    std::reverse(S.begin(), S.end());

    for(i = 0; i < 4; i++){
        std::reverse(words[i].begin(), words[i].end());
    }

    words_num = S.length();
    for(i = 0; i < words_num;){    
        for(j = 0; j < 4; j++){
            if(S.substr(i, words[j].length()) == words[j]){
                i += words[j].length();
                break;
            } else {
                if(j == 3){
                    judge = false;
                    i = S.length();
                }
            }
        }
    }

    if(judge == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
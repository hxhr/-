/* 2250748 ÍõÓåûq ĞÅ02 */
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() 
{
    char game[10][26];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 26; j++) {
            game[i][j] = 0;
        }
    }
    srand((unsigned int)time(NULL));
    int lei = 50;
    while (lei--) {
        int hang = rand() % 10;
        int lie = rand() % 26;
        if (game[hang][lie] != '*') {
            game[hang][lie] = '*';
            for (int i = std::max(hang - 1, 0); i <= std::min(hang + 1, 9); i++) {
                for (int j = std::max(lie - 1, 0); j <= std::min(lie + 1, 25); j++) {
                    if (i != hang || j != lie) {
                        if (game[i][j] != '*') {
                            game[i][j]++;
                        }
                    }
                }
            }
        }
        else {
            lei++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 26; j++) {
            if (game[i][j] != '*') {
                cout << char(game[i][j] + '0') << " ";
            }
            else {
                cout << game[i][j] << " ";
            }
            if (j == 25) {
                cout << endl;
            }
        }
    }
    return 0;
}
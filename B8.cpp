#include <iostream>

using std::cout;
using std::cin;

int main(){
    const int height = 9;
    const int width = 9;

    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++){
            if ((j == i) || j == (width - i + 1) || (i == 1) || (i == height) || (j == 1) || (j == width)){
                cout << " * ";
            }
            else {
                cout << "   ";
            }
        }
        cout << '\n' << '\n';

    }
    return 0;
}
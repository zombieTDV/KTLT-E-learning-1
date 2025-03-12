#include <iostream>

using std::string;
using std::cout;
using std::cin;

int main(){
    const int height = 9;
    const int width = 9;

    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++){
            cout << j << "*" << i << "=" << j*i << '\t';
        }
        cout << '\n';

    }
    return 0;
}
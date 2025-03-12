#include <iostream>

using std::string;
using std::cout;
using std::cin;


int main(){
    float a, b, c, d;
    float max_difference;
    int max_index;
    
    cout << "Nhập 4 số a, b, c và d" << '\n';

    cout << "Nhập a: "; 
    cin >> a;

    cout << "Nhập b: "; 
    cin >> b;

    cout << "Nhập c: "; 
    cin >> c;

    cout << "Nhập d: "; 
    cin >> d;

    float differences[6] = {(a - b), (a - c), (a - d), (b - c), (b - d), (c - d)};
    string value_pairs[6] = {"a - b", "a - c", "a - d", "b - c", "b - d", "c - d"};

    max_difference = differences[0];
    max_index = 0;
    for (int i = 1; i <= 6; i++){
        if (abs(differences[i]) > abs(max_difference)){
            max_difference = differences[i];
            max_index = i;
    }}



    cout << "Cặp số mà hiệu giữa chúng là lớn nhất: " << value_pairs[max_index] << '\n';
    return 0;
}
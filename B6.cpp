#include <iostream>

using std::string;
using std::cout;
using std::cin;

int main(){
    int n;
    int n_negative, n_positive = 0;
    int input;

    cout << "Số lượng số nguyên bạn muốn nhập: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Nhập số nguyên: ";
        cin >> input;

        if (input < 0){
            n_negative++;
        }
        else if (input > 0){
            n_positive++;
        }

    }   

    cout << "Trong tất cả các số bạn đã nhập, có " << n_negative << " " << "số nguyên âm" << " và " << n_positive << " " << "số nguyên dương" << '\n';
    return 0;
}
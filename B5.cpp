#include <iostream>

using std::string;
using std::cout;
using std::cin;

int main(){
    int a, b;
    char _operator;

    cout << "Nhập 2 số tự nhiên a, b!" << '\n';
    cout << "Nhập a: ";
    cin >> a;

    cout << "Nhập b: ";
    cin >> b;

    cout << "Nhập phép toán hợp lệ (+, -, *, /): ";
    cin >> _operator;

    switch (_operator){
    case '+':
        cout << "Kết quả của a + b: " << a + b << '\n';
        break;
    
    case '-':
        cout << "Kết quả của a - b: " << a - b << '\n';
        break;

    case '*':
        cout << "Kết quả của a * b: " << a * b << '\n';
        break;
    
    case '/':
    if (b!=0){
        cout << "Kết quả của a / b: " << (float)a / b << '\n';
        break;
    }
    else{
        cout << "b có giá trị không hợp lệ cho phép chia: " << b << '\n';
    }

    default:
        cout << "Bạn đã nhập phép toán không hợp lệ!";
    }

    return 0;
}
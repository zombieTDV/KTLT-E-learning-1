#include <iostream>

using std::cout;
using std::cin;

bool check_duplicate(float a, float b, float c){
    if ((a == b) || (a == c) || (b == c)){
        return true;
    }
    else {
        return false;
    }
};

float mid_num(float a, float b, float c){
    float max = a;
    float mid;

    if ((b > a) && (b > c)){
        max = b;

        if (a > c){
            mid = a;
        }
        else {
            mid = c;
        }
    }
    else if ((c > a) && (c > b)){
        max = c;
        if (b > a){
            mid = b;
        }
        else {
            mid = a;
        }
    }

    return mid;


};

int main(){
    float a, b, c;
    cout << "Nhập 3 số a, b, c" << '\n';

    cout << "Nhập a: "; 
    cin >> a;

    cout << "Nhập b: "; 
    cin >> b;

    cout << "Nhập c: "; 
    cin >> c;


    while(check_duplicate(a, b, c)){
        cout << '\n' << "Có ít nhất 2 giá trị giống nhau, vui lòng nhập lại!" << '\n' << '\n';
        cout << "Nhập 3 số a, b, c" << '\n';

        cout << "Nhập a: "; 
        cin >> a;

        cout << "Nhập b: "; 
        cin >> b;

        cout << "Nhập c: "; 
        cin >> c;
    }
    

    cout << "Giá trị nằm trong khoảng giữa của 2 số còn lại: " << mid_num(a, b, c) << '\n';


    return 0;
}
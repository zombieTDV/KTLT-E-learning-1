#include <iostream>

using std::cout;
using std::cin;

int main(){
    float n, a, b, c;
    float min;
    float min_var_to_n;
    float* datas[3] = {&a, &b, &c};
    float distance_to_c[3];

    cout << "Nhập 4 số a, b, c và n" << '\n';

    cout << "Nhập a: "; 
    cin >> a;

    cout << "Nhập b: "; 
    cin >> b;

    cout << "Nhập c: "; 
    cin >> c;

    cout << "Nhập n: "; 
    cin >> n;


    for (int i = 0; i <= 2; i++){
        distance_to_c[i] = abs(n - *datas[i]);
    }

    //Cấu trúc lính canh,tìm giá trị nhỏ nhất.
    min = distance_to_c[0];
    min_var_to_n = *datas[0];
    for (int i = 1; i <= 2; i++){
        if (distance_to_c[i] < min){
            min = distance_to_c[i];
            min_var_to_n = *datas[i];
        }
    }

    cout << "Số có giá trị gần nhất với số n: số " << min_var_to_n << '\n';

    
    return 0;
}
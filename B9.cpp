#include <iostream>

using std::string;
using std::cout;
using std::cin;

int main(){
    int bank;

    float currency[9] = {1.000, 2.000, 5.000, 10.000, 20.000, 50.000, 100.000, 200.000, 500.000};
    int money_changes;

    cout << "Nhập khoảng tiền bạn cần rút(đơn vị hàng nghìn/k): ";
    cin >> bank;
    cout << "Tiền thối cho: " << bank << 'k' << '\n';
    for (int i = 8; i >= 0; i--){
        money_changes = bank / currency[i];
        if (money_changes > 0){
            cout << money_changes << " tờ" << " " << currency[i] << "k" << '\n'; 
            bank -= money_changes * currency[i];
    }
    }
    return 0;
}
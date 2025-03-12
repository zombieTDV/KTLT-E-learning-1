#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::getline;

int main(){
    string first_person_surname;
    string first_person_name;
    int first_person_year_of_birth;

    string second_person_surname;
    string second_person_name;
    int second_person_year_of_birth;

    cout << "Người thứ nhất: " << '\n';
    cout << '\t' << "Họ: ";
    getline(cin, first_person_surname);

    
    cout << '\t' << "Tên: ";
    getline(cin, first_person_name);

    cout << '\t' << "Năm sinh: ";
    cin >> first_person_year_of_birth;
    cin.ignore();

    cout << "Người thứ hai: " << '\n';
    cout << '\t' << "Họ: ";
    getline(cin, second_person_surname);

    
    cout << '\t' << "Tên: ";
    getline(cin, second_person_name);

    cout << '\t' << "Năm sinh: ";
    cin >> second_person_year_of_birth;

    while((first_person_year_of_birth <= 0) || 
    (first_person_year_of_birth > 2025) || 
    (second_person_year_of_birth > 2025) || 
    (second_person_year_of_birth <= 0))
    {
        cout << '\n' << "Năm sinh không thể âm hoặc lớn hơn 2025!" << '\n';

        cout << "Người thứ nhất: " << '\n';
        cout << '\t' << "Họ: ";
        getline(cin, first_person_surname);

        
        cout << '\t' << "Tên: ";
        getline(cin, first_person_name);

        cout << '\t' << "Năm sinh: ";
        cin >> first_person_year_of_birth;
        cin.ignore();

        cout << "Người thứ hai: " << '\n';
        cout << '\t' << "Họ: ";
        getline(cin, second_person_surname);

        
        cout << '\t' << "Tên: ";
        getline(cin, second_person_name);

        cout << '\t' << "Năm sinh: ";
        cin >> second_person_year_of_birth;
    }



    cout << "Họ và tên của người thứ nhất: " << first_person_surname << " "<< first_person_name << '\n';
    cout << "Tuổi của người thứ nhất: " << 2025 - first_person_year_of_birth << '\n';
    cout << "Họ và tên của người thứ hai: " << second_person_surname << " "<< second_person_name << '\n';
    cout << "Tuổi của người thứ hai: " << 2025 - second_person_year_of_birth << '\n';

    return 0;
}

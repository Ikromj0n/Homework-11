#include <iostream>
#include <set>

using namespace std;

int main() {
    
    //Problem_3
    int n;
    cin >> n;

    set<int> famous_years;

    for (int i = 0; i < n; i++) {
        int year;
        cin >> year;
        famous_years.insert(year);
    }

    int n1;
    cin >> n1;

    set<int> student_years;

    for (int i = 0; i < n1; i++) {
        int year;
        cin >> year;
        student_years.insert(year);
    }

    int count = 0;
    for (const auto& year : student_years) {
        if (famous_years.find(year) != famous_years.end()) {
            count++;
        }
    }

    if (count == 0) {
        cout << "0" << endl;
    } else if (count == 1) {
        cout << "1" << endl;
    } else if (count == 2) {
        cout << "2" << endl;
    } else if (count == 3) {
        cout << "3" << endl;
    } else {
        cout << "4" << endl;
    }

    return 0;
}

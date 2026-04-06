#include <iostream>
using namespace std;

class Date {
    int d, m, y;

public:
    Date(int dd = 1, int mm = 1, int yy = 2000) {
        if (mm >= 1 && mm <= 12 && dd >= 1 && dd <= 31) {
            d = dd;
            m = mm;
            y = yy;
        } else {
            d = 1;
            m = 1;
            y = 2000;
        }
    }

    void input() {
        cout << "Enter day month year: ";
        cin >> d >> m >> y;
    }

    bool operator<(const Date &other) const {
        if (y < other.y) return true;
        if (y == other.y && m < other.m) return true;
        if (y == other.y && m == other.m && d < other.d) return true;
        return false;
    }
    void display() const {
        cout << d << "/" << m << "/" << y;
    }
};
template <typename T>
class DList {
    T arr[100];
    int size;

public:
    DList() {
        size = 0;
    }

    void add(T obj) {
        arr[size++] = obj;
    }
    void printBetween(T d1, T d2) {
        cout << "\nDates between given range:\n";
        for (int i = 0; i < size; i++) {
            if (d1 < arr[i] && arr[i] < d2) {
                arr[i].display();
                cout << endl;
            }
        }
    }
};
int main() {
    DList<Date> list;
    list.add(Date(10, 1, 2023));
    list.add(Date(15, 2, 2023));
    list.add(Date(5, 3, 2023));
    list.add(Date(25, 1, 2023));
    Date d1, d2;
    cout << "Enter first date (d1)\n";
    d1.input();
    cout << "Enter second date (d2)\n";
    d2.input();
    list.printBetween(d1, d2);
    return 0;
}
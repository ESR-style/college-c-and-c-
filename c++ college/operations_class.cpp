#include <iostream>
using namespace std;

class Operation {
  private:
    int n1, n2;

  public:
    void set_num(int a, int b) {
        n1 = a;
        n2 = b;
    }

    int get_sum() {
        return n1 + n2;
    }

    int get_diff() {
        return n1 - n2;
    }
};

int main() {
    Operation number;
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    number.set_num(a, b);
    cout << "Sum of the entered numbers is: " << number.get_sum() << endl;
    cout << "Difference of the entered numbers is: " << number.get_diff() << endl;
    return 0;
}

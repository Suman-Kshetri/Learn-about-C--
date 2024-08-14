#include <iostream>
using namespace std;

class complex; // Forward declaration of calculator
class calculator {
public:
    int real_sum(complex a, complex b);
    int imaginary_sum(complex x, complex y);
    void display(int a, int b) {
        cout << "THE SUM IS: " << a << " + " << b << "i";
    }
};
class complex {
    int  imaginary,real;
public:
    friend int calculator::real_sum(complex, complex);
    friend int calculator::imaginary_sum(complex, complex);
    
    void setdata() {
        cout << "Real: ";
        cin >> real;
        cout << "Imaginary: ";
        cin >> imaginary;
    }
};



int calculator::real_sum(complex a, complex b) {
    return( a.real + b.real);
}

int calculator::imaginary_sum(complex x, complex y) {
    int sum_img = x.imaginary + y.imaginary;
    return sum_img;
}

int main() {
    complex c1, c2;
    calculator calc;
    
    c1.setdata();
    c2.setdata();
    
    int real_sum = calc.real_sum(c1, c2);
    int img_sum = calc.imaginary_sum(c1, c2);
    
    calc.display(real_sum, img_sum);
    return 0;
}

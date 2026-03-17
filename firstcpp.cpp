#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float imag;

    public:
        complex(){
            real = 0.0f;
            imag = 0.0f;
        }

        void setData(float r, float i){
            real = r;
            imag = i;
        }

        void add(complex c1, complex c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void sub(complex c1, complex c2){
            real = c1.real - c2.real;
            imag = c1.imag - c2.imag;
        }

        void multiply(complex c1, complex c2){
            real = c1.real * c2.real - c1.imag * c2.imag;
            imag = c1.real * c2.imag + c1.imag * c2.real;
        }

        void divide(complex c1, complex c2){
            int denominator = c2.real * c2.real + c2.imag * c2.imag;
            real = float(c1.real * c2.real + c1.imag * c2.imag) / denominator;
            imag = float(c1.imag * c2.real - c1.real * c2.imag) / denominator;
        }

        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
    
};

int main(){
    complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(4, 4);
    cout<<"Complex number 1: ";
    c1.display();
    cout<<"Complex number 2: ";
    c2.display();
    c3.add(c1, c2);
    cout<<"Addition: ";
    c3.display();
    c3.sub(c1, c2);
    cout<<"Subtraction: ";
    c3.display();
    c3.multiply(c1, c2);
    cout<<"Multiplication: ";
    c3.display();
    c3.divide(c1, c2);
    cout<<"Division: ";
    c3.display();
  
    return 0;

}

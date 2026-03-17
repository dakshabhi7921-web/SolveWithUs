#include<iostream>
using namespace std;

class complex{
    //initial
    private:
        float real;
        float imag;
    
    public:
        complex(){                //constructor
            real = 0.0f;
            imag = 0.0f;
        }
            
        void setData(float r, float i){        // set data
            real = r;
            imag = i;
        }

        void add(complex c1, complex c2){                //Addition Function
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void sub(complex c1, complex c2){                //Subtraction Function
            real = c1.real - c2.real;
            imag = c1.imag - c2.imag;
        }

        void multiply(complex c1, complex c2){            //Multiplication function
            real = c1.real * c2.real - c1.imag * c2.imag;
            imag = c1.real * c2.imag + c1.imag * c2.real;
        }

        void divide(complex c1, complex c2){                        //Division Function
            int denominator = c2.real * c2.real + c2.imag * c2.imag;        
            real = float(c1.real * c2.real + c1.imag * c2.imag) / denominator;
            imag = float(c1.imag * c2.real - c1.real * c2.imag) / denominator;
        }

        void display(){                    // Display Function
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
    
};

int main(){
    //inital
    complex c1, c2, c3;
    float r1, r2, i1, i2;

    //getting data from user
    cout<<"Enter real imaginary part of complex 1 : ";
    cin>>r1>>i1;
    cout<<"Enter real imaginary part of complex 2: ";
    cin>>r2>>i2;

    //Setting C1 and C2
    c1.setData(r1, i1);
    c2.setData(r2, i2);

    //Main work
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

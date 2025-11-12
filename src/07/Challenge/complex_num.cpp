#include "complex_num.h"

complex_num::complex_num(double r, double i){
    real = r;
    imag = i;
}

complex_num complex_num::operator +(complex_num w){
    complex_num z;
    z.real = real + w.real;
    z.imag = imag + w.imag;
    return z;
}

complex_num complex_num::operator -(complex_num w){
    complex_num z;
    z.real = real - w.real;
    z.imag = imag - w.imag;
    return z;
}

complex_num complex_num::operator *(complex_num w){
    complex_num z;
    // Write your code here
    return z;
}

complex_num complex_num::operator /(complex_num w){
    complex_num z;
    // Write your code here
    return z;
}

void complex_num::print(std::ostream &os){
    os << real << " + i " << imag << std::endl;
}
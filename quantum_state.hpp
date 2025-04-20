#pragma once
#include <vector>
#include <complex>
#include <iostream>

class QuantumState {
public:
    using Complex = std::complex<double>;
    
    QuantumState();

    void print_state() const; 

private:
    std::vector<Complex> state;
};
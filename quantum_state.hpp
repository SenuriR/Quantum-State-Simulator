#pragma once
#include <vector>
#include <complex>
#include <iostream>
// measurement next
class QuantumState {
public:
    using Complex = std::complex<double>;

    QuantumState();

    void print_state() const; 

    void apply_gate(const std::vector<std::vector<Complex>>& gate);

private:
    std::vector<Complex> state;
};
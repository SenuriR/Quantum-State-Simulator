#include "quantum_state.hpp"
#include "gates.hpp"
#include <cmath>

int main() {
    QuantumState q;
    q.print_state();

    std::vector<std::vector<std::complex<double>>> X = {
        { {0.0, 0.0}, {1.0, 0.0} },
        { {1.0, 0.0}, {0.0, 0.0} }
    };

    double inv_sqrt2 = 1.0 / std::sqrt(2.0);
    std::vector<std::vector<std::complex<double>>> H = {
        { {inv_sqrt2, 0.0}, {inv_sqrt2, 0.0} },
        { {inv_sqrt2, 0.0}, {-inv_sqrt2, 0.0} }
    };

    q.apply_gate(Gates::X);
    std::cout << "\nAfter applying X gate:\n";
    q.print_state();

    QuantumState q2;
    q2.apply_gate(Gates::H);
    std::cout << "\nAfter applying Hadamard gate:\n";
    q2.print_state();

    return 0;
}
#include "quantum_state.hpp"

int main() {
    QuantumState q;
    q.print_state();

    std::vector<std::vector<std::complex<double>>> X = {
        { {0.0, 0.0}, {1.0, 0.0} },
        { {1.0, 0.0}, {0.0, 0.0} }
    };
    q.apply_gate(X);
    std::cout << "\nAfter applying X gate:\n";
    q.print_state();

    return 0;
}
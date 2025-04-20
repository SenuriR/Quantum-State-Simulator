#include "quantum_state.hpp"

QuantumState::QuantumState() {
    state = { Complex(1.0, 0.0), Complex(0.0, 0.0) };
}

void QuantumState::print_state() const {
    std::cout << "Qubit state |ψ⟩:\n";
    for (size_t i = 0; i < state.size(); ++i) {
        std::cout << "|" << i << "⟩: " << state[i] << '\n';
    }
};
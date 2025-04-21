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

void QuantumState::apply_gate(const std::vector<std::vector<Complex>>& gate){
    std::vector<Complex> new_state(state.size(), Complex(0.0, 0.0));
    
    for (size_t i = 0; i < gate.size(); ++i) {
        for (size_t j = 0; j < gate[i].size(); ++j){
            new_state[i] += gate[i][j] * state[j];
        }
    }

    state = new_state;
};
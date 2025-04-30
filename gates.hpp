#pragma once
#include <vector>
#include <complex>
#include <cmath>

using Complex = std::complex<double>;

namespace Gates {
    const std::vector<std::vector<Complex>> X = {
        { {0.0, 0.0}, {1.0, 0.0} },
        { {1.0, 0.0}, {0.0, 0.0} }
    };

    const std::vector<std::vector<Complex>> H = []() {
        double inv_sqrt2 = 1.0 / std::sqrt(2.0);
        return std::vector<std::vector<Complex>> {
            { {inv_sqrt2, 0.0}, {inv_sqrt2, 0.0} },
            { {inv_sqrt2, 0.0}, {-inv_sqrt2, 0.0} }
        };
    }();
}
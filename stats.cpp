#include "stats.h"
#include <limits>
#include <numeric>
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    Stats s;

    if (numbers.empty()) {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
        return s;
    }

    s.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    s.min = *std::min_element(numbers.begin(), numbers.end());
    s.max = *std::max_element(numbers.begin(), numbers.end());

    return s;
}

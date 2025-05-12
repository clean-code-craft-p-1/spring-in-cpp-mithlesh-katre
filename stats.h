#include <vector>

struct Stats {
    float average;
    float min;
    float max;
};
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    
    Stats ComputeStatistics(const std::vector<float>& );
}



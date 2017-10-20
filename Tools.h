#ifndef __tools_h__
#define __tools_h__

#include <numeric>
#include <vector>

using namespace std;

template<typename VectorType>
vector<size_t> sortIndexes(const VectorType &v) {
    // Based on: http://stackoverflow.com/a/12399290/2175837
    // Initialize original index locations
    vector<size_t> idx(v.size());
    iota(idx.begin(), idx.end(), 0);

    // Sort indexes based on comparing values in v
    sort(idx.begin(), idx.end(), [&v](size_t i1, size_t i2) { return v[i1] < v[i2]; });

    return idx;
};

#endif

#ifndef __lda_h__
#define __lda_h__

#include <Eigen/Dense> // http://eigen.tuxfamily.org

using namespace Eigen;

class LDA {
public:
    /**
     * Computes the Eigenvectors of X using LDA.
     * @param  X             Data matrix.
     * @param  classes       Class vector. Must start at 1 and increment by one.
     * @param  numComponents Number of components used for the analysis.
     * @return               Returns the number of components used.
     */
    int32_t compute(const MatrixXf &X, const VectorXi &classes, int32_t numComponents);

protected:
    MatrixXf U; // Eigenvectors
};

#endif

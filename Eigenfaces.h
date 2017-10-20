#ifndef __eigenfaces_h__
#define __eigenfaces_h__

#include <Eigen/Dense> // http://eigen.tuxfamily.org

#include "Facebase.h"
#include "PCA.h"

using namespace Eigen;

class Eigenfaces : public Facebase {
public:
    /**
     * Train Eigenfaces.
     * @param images Each images represented as a column vector.
     */
    void train(const MatrixXi &images);
};

#endif

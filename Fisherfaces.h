#ifndef __fisherfaces_h__
#define __fisherfaces_h__

#include <Eigen/Dense> // http://eigen.tuxfamily.org

#include "Facebase.h"
#include "PCA.h"
#include "LDA.h"

using namespace Eigen;

class Fisherfaces : public Facebase, public LDA {
public:
    /**
     * Train Fisherfaces.
     * @param images  Each images represented as a column vector.
     * @param classes Class labels should start at 1 and increment by 1.
     */
    void train(const MatrixXi &images, const VectorXi &classes);
};

#endif

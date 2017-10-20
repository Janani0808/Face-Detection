#include <iostream>

#include <Eigen/Dense> // http://eigen.tuxfamily.org

#include "Eigenfaces.h"

using namespace std;
using namespace Eigen;

void Eigenfaces::train(const MatrixXi &images) {
    this->n_pixels = images.rows();

    // Copy values from PCA
    this->numComponents = PCA::compute(images);
    this->V = PCA::U; // This contains all Eigenfaces

#ifndef NDEBUG
    cout << "Calculate weights for all images" << endl;
#endif
    this->W_all = project(images); // Calculate weights
#ifndef NDEBUG
    cout << "W_all: " << W_all.rows() << " x " << W_all.cols() << endl;
#endif
}

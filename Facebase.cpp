#include <Eigen/Dense> // http://eigen.tuxfamily.org

#include "Facebase.h"

using namespace Eigen;

MatrixXf Facebase::project(const MatrixXi &X) {
    return V.transpose()*(X.cast<float>().colwise() - mu); // Project X onto subspace
}

VectorXf Facebase::euclideanDist(const VectorXf &W) {
    return ((W_all.colwise() - W)/n_pixels).colwise().norm()/sqrt(numComponents); // Measure euclidean distance between weights
}

VectorXf Facebase::reconstructFace(const VectorXf &W) {
    return V*W;
}

float Facebase::euclideanDistFace(const VectorXi &X, const VectorXf &face) {
    return ((((X.cast<float>() - mu) - face)/n_pixels).colwise().norm()/sqrt(numComponents)).value(); // Measure euclidean distance between weights
}

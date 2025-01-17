#include "biharmonic_solve.h"
#include <igl/min_quad_with_fixed.h>

void biharmonic_solve(
  const igl::min_quad_with_fixed_data<double> & data,
  const Eigen::MatrixXd & bc,
  Eigen::MatrixXd & D)
{
  // REPLACE WITH YOUR CODE
  //D = Eigen::MatrixXd::Zero(data.n,3);
  Eigen::MatrixXd Beq, B;
  B.setZero(data.n,3);
  igl::min_quad_with_fixed_solve(data, B, bc, Beq, D);
}

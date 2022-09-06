//
// Created by tongming on 06/09/22.
//
#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv) {
    Eigen::MatrixXd m1(2, 3);

//    initial a dynamic matrix
    m1 << 1, 2, 3, 4, 5, 6;
    cout << "m1(1, 2) = " << m1(1, 2) << endl;
    cout << "\nm1=\n" << m1 << endl;
    cout << "size m1: " << m1.rows() << " X " << m1.cols() << endl;

//    initialize a dynamic vector
    Eigen::VectorXd v1(3);
    v1 << 2, 7, 1;
    cout << "v1[2] = " << v1[2] << endl;
    cout << "\nv1= \n" << v1 << endl << endl;
    cout << "size v1: " << v1.rows() << " X " << v1.cols() << endl << endl;

//    matrix vector multiplication
    Eigen:
    MatrixXd p1 = m1 * v1;
    cout << "\np1=\n" << p1 << endl;
    cout << "size p1: " << p1.rows() << " X " << p1.cols() << endl << endl;

//    accessing elements of a matrix
    for (int i = 0; i < m1.rows(); i++) {
        for (int j = 0; j < m1.cols(); j++) {
            cout << "m1( " << i << " , " << j << " ) = " << m1(i, j) << endl;
        }
    }
//    extracting block
    MatrixXd mb1 = m1.block(0, 0, 2, 2);
    cout << "\nmb1=\n" << mb1 << endl;

    MatrixXd mb2 = m1.block(0, 1, 2, 2);
    cout << "\nmb2=\n" << mb2 << endl;

//    concatinating mb1 and mb2 horizontally,
    MatrixXd con_h(mb1.rows(), mb1.cols() + mb2.cols());
    con_h << mb1, mb2;
    cout << "\n con_h=\n" << con_h << endl;

//    concatinating mb1 and mb2 vertically,
    MatrixXd con_v(mb1.rows() + mb2.rows(), mb1.cols());
    con_v << mb1, mb2;
    cout << "\n con_v=\n" << con_v << endl;


    return 0;
}

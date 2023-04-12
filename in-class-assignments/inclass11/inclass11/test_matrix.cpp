#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "matrix.h"

TEST_CASE("Testing matrix multiplication with random matrices") {
    Matrix mat1 = gen_matrix(2, 3);
    Matrix mat2 = gen_matrix(3, 2);
    Matrix result = mult_matrices(mat1, mat2);

    CHECK(result.rows == 2);
    CHECK(result.cols == 2);
}

TEST_CASE("Testing matrix multiplication with incompatible matrices") {
    Matrix mat1 = gen_matrix(2, 3);
    Matrix mat2 = gen_matrix(2, 3);

    CHECK_THROWS(mult_matrices(mat1, mat2));
}

TEST_CASE("Testing fraction multiplication") {
    Fraction frac1 = Fraction(2, 3);
    Fraction frac2 = Fraction(4, 5);

    Fraction result = mult_fractions(frac1, frac2);

    CHECK(result.first == 8);
    CHECK(result.second == 15);
}

TEST_CASE("Testing fraction addition") {
    Fraction frac1 = Fraction(2, 3);
    Fraction frac2 = Fraction(4, 5);

    Fraction result = add_fractions(frac1, frac2);

    CHECK(result.first == 22);
    CHECK(result.second == 15);
}

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "lab9.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing functions") {
    SUBCASE("testing matrix multiply function")
    {
        vector<vector<int>> test1 = create_matrix(2, 2);
        vector<vector<int>> test2 = create_matrix(2, 2);
        vector<vector<int>> expected = {{2, 3}, {6, 11}};
        CHECK(matrix_multiply(test1, test2) == expected);
    }
    SUBCASE("create matrix") {
        vector<vector<int>> expected = {{0, 1}, {2, 3}};
        CHECK(create_matrix(2, 2) == expected);
    }
}
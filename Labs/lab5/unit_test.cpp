#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "double_header.h"
#include "doctest.h"
using namespace std;

TEST_CASE("cosine vectors function") {
    SUBCASE("doubles_vectors.txt"){
        vector <double_vect> my_vector1 = read_file("double_vectors.txt");
        CHECK(my_vector1.size() == 10);
        int test_id[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        double test_from[] = {.1, .2, -0.3, 0.4, 0.500, 0.6, .7, 0.8, 0.9, 1.0};
        double test_to[] = {9.9, 2.3, 99.9, 45, 8.9, 22.1, 3.14, 2.717, -55.0,1.1};
        for(int i = 0; i < my_vector1.size(); i++) {
            CHECK(my_vector1[i].id == test_id[i]);
            CHECK(my_vector1[i].from == test_from[i]);
            CHECK(my_vector1[i].to == test_to[i]);
        }
        double_vect v1;
        v1.from = 0.0;
        v1.to = 0.0;
        double_vect v2;
        v2.from = 1.0;
        v2.to = 1.0;
        CHECK(dot_prod(v1, v2) == 0.0);
        double_vect c1;
        c1.from = -1.0;
        c1.to = -2.0;
        double_vect c2;
        c2.from = 3.0;
        c2.to = 4.0;
        CHECK(dot_prod(c1, c2) == -11.0);
        CHECK(vector_len(v1) == doctest::Approx(0));
        CHECK(vector_len(v2) == doctest::Approx(1.41421));
        CHECK(vector_len(v1) == doctest::Approx(0.0));
        CHECK(vector_len(v2) == doctest::Approx(sqrt(2.0)));
        CHECK(cosine_dist(c1, c2) == doctest::Approx(-0.98387));
        vector <pairs> my_pairs = calculate_cosine_pairs(my_vector1);
        sort(my_pairs.begin(), my_pairs.end(), compare);
        for (int i = 0; i < my_pairs.size()-1; i++){
            CHECK(my_pairs[i].dist <= my_pairs[i+1].dist);
        }
}
}


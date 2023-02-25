#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "students.h"

TEST_CASE("testing"){
    SUBCASE("test 1"){
    student s;
    s.final = 100;
    s.midterm = 100;
    s.hw_grades.push_back(100);
    s.hw_grades.push_back(100);

    double class_score = compute_class_score(s);

    CHECK(class_score >= 99.9);
    CHECK(class_score <= 100.1);
    }
    SUBCASE("test2"){
    student s;
    s.final = 5;
    s.midterm = 5;
    s.hw_grades.push_back(5);
    s.hw_grades.push_back(10);

    double class_score = compute_class_score(s);

    CHECK(class_score >= 5.9);
    CHECK(class_score <= 6.1);
    }
    SUBCASE("test3"){
    student s;
    s.final = 0;
    s.midterm = 0;
    s.hw_grades.push_back(0);
    s.hw_grades.push_back(0);

    double class_score = compute_class_score(s);

    CHECK(class_score >= 0);
    CHECK(class_score <= 0);
    }
}

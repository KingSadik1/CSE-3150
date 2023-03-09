#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  DOCTest unit tests
 */

#include <iostream>
#include <vector>
#include "doctest.h"
#include "lambda.h"

using namespace std;

TEST_CASE("Test week 7 assignment") {
  SUBCASE("Test to check for perfect nums") {
      for (int i = 1; i < 100; i++){
          if (i != 6 && i != 28) {
              CHECK(is_perfect_in_range(i) == false);
          } else {
              CHECK(is_perfect_in_range(i) == true);
          }
      }
  };
}
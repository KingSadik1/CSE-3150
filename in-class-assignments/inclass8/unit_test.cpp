#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  DOCTest unit tests
 */

#include "doctest.h"
#include "ad_graph.h"

using namespace std;

vector<int> line = {0, 1};
vector<int> line_one = {5, 7, 8, 1, 3};
vector<int> line_two = {2, 1, 79};

TEST_CASE("unit tests") {
  SUBCASE("unit tests") {
      ifstream infile1("empty.txt");
      auto graph = read_graph(infile1);
      CHECK(graph.size() == 0);
      infile1.close();
  };
  SUBCASE("unit_test 2"){
      ofstream outfile2("non_empty.txt");
      outfile2 << "0 1 \n5 7 8 1 3\n2 1 79";
      outfile2.close();
      ifstream infile2("non_empty.txt");
      auto graph1 = read_graph(infile2);
      CHECK(graph1[0] == line);
      CHECK(graph1[1] == line_one);
      CHECK(graph1[2] == line_two);
      infile2.close();
      remove("empty.txt");
      remove("non_empty.txt");
  };
}
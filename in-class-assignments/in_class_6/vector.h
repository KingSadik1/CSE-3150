#ifndef __VECTOR_FUNCTIONS_
#define __VECTOR_FUNCTIONS_

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include "vector.h"

using namespace std;

struct int_vector {
    int id;
    int from;
    int to;
    int_vector(const int_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; 
    int_vector() : id(-1), from(0), to(0) {};
};

vector<int_vector> read_vectors(ifstream& in_file);
void sort_vectors(vector<int_vector>& vect);
void print_vectors(const vector<int_vector>& vect);

#endif
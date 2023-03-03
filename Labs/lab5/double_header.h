#ifndef __DOUBLE_VECTOR_FUNCTIONS_
#define __DOUBLE_VECTOR_FUNCTIONS_

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;

struct double_vect {
    double id;
    double from;
    double to;
};

struct pairs {
    double from;
    double to;
    double dist;
};

vector <double_vect> read_file(string file1);

double dot_prod(double_vect v1, double_vect v2);

double vector_len(double_vect v1);

double cosine_dist(double_vect v1, double_vect v2);

vector <pairs> calculate_cosine_pairs(vector <double_vect> v);

bool compare(pairs p1, pairs p2);

#endif
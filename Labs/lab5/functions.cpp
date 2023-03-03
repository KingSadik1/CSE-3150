#include "double_header.h"
vector <double_vect> read_file(string file1) {
    vector <double_vect> vector;
    ifstream input_file(file1);
    if (input_file.is_open()) {
        int id_x = 0;
        double from_x;
        double to_x;
        while(input_file >> from_x >> to_x) {
            double_vect vector_x;
            vector_x.id = id_x;
            vector_x.from = from_x;
            vector_x.to = to_x;
            vector.push_back(vector_x);
            id_x++;
        }
    }
    return vector;
}
double dot_prod(double_vect v1, double_vect v2) {
    return (v1.from * v2.from) + (v1.to * v2.to);
}
double vector_len(double_vect v1) {
    return sqrt(dot_prod(v1, v1));
}
double cosine_dist(double_vect v1, double_vect v2) {
    double dot = dot_prod(v1, v2);
    double hypotnuse = vector_len(v1) * vector_len(v2);
    double distance = dot / hypotnuse;
    return distance;
}
vector <pairs> calculate_cosine_pairs(vector <double_vect> v){
    vector <pairs> cosine_pairs;
    for (int i = 0; i < v.size()-1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            struct pairs vector_x;
            vector_x.from = v[i].from;
            vector_x.to = v[i].to;
            vector_x.dist = cosine_dist(v[i], v[j]);
            cosine_pairs.push_back(vector_x);
        }
    }
    return cosine_pairs;
}
bool compare(pairs p1, pairs p2) {
    return p1.dist < p2.dist;
}
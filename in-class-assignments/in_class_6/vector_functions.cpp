#include "vector.h"

vector<int_vector> read_vectors(ifstream& in_file) {
    vector<int_vector> vect;
    int id(0);
    string from, to;
    while (in_file >> from >> to) {
        int_vector i_v;
        i_v.from = atoi(from.c_str());
        i_v.to = atoi(to.c_str());
        i_v.id = id++;
        vect.push_back(i_v);
    }
    return vect;
}
void sort_vectors(vector<int_vector>& vect) {
    sort(vect.begin(),
         vect.end(),
         [](const int_vector& left, const int_vector& right) {
            return left.id > right.id;
         });
}
void print_vectors(const vector<int_vector>& vect) {
    for (auto v : vect) {
        cout << v.id << ": " << v.from << " " << v.to << endl;
    }
}
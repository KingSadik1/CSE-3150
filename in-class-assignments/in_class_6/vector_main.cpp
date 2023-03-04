#include "vector.h"

int main() {
    ifstream in_file;
    in_file.open("vector_2D.txt");

    vector<int_vector> vect = read_vectors(in_file);
    sort_vectors(vect);
    print_vectors(vect);

    in_file.close();
    return 0;
}
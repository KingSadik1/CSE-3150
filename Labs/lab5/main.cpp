#include "double_header.h"
int main() {
    vector <double_vect> my_vector = read_file("double_vectors.txt");
    vector <pairs> my_pairs = calculate_cosine_pairs(my_vector);
    sort(my_pairs.begin(), my_pairs.end(), compare);
    for (auto i : my_pairs) {
        cout << i.from << i.to << " = " << i.dist <<endl;
    }
}
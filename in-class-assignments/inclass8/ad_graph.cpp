#include "ad_graph.h"

vector<vector<int>> read_graph(ifstream& in_file) {
    vector<vector<int>> graph;
    string line;
    while (getline(in_file, line)) {
        vector<int> vector;
        stringstream str(line);
        int num;
        while (str >> num) {
            vector.push_back(num);
        }
        graph.push_back(vector);
    }
    return graph;
}

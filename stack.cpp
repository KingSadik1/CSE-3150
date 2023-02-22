#include <iostream>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include "stack.h"

using namespace std;

queue<int> queue_push_from_file(string file_name) {
    queue<int> q;
    ifstream file(file_name);
    int val;
    while( file >> val) {
        q.push(val);
        }
    file.close();
    return q;
}
int pop_q(queue<int> queue) {
    int sum = 0;
    int front= 0;
    while(!queue.empty()) {
        front = queue.front();
        sum += front;
        queue.pop();
    }
    if(sum < 0) {
        return NULL;
    }
    return front;
}
stack<int> stack_push_from_file(string file_name) {
    stack<int> stack;
    ifstream file(file_name);
    int val;
    while(file >> val ) {
            stack.push(val);
    }
    file.close();
    return stack;
}
int pop_stack(stack<int> stack) {
    int sum = 0;
    int front = 0;
    while(!stack.empty()) {
        int front = stack.top();
        sum += front;
        stack.pop();
    }
    if(sum < 0) {
        return NULL;
    }
    return front;
}
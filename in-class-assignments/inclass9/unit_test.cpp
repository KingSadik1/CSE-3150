#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "List.h"

TEST_CASE("Test list structure") {
    List list;
    // Test push function
    list.push(3);
    list.push(2);
    list.push(1);
    List::Node* node = list.head.get();
    CHECK(node->data == 1);
    node = node->next.get();
    CHECK(node->data == 2);
    node = node->next.get();
    CHECK(node->data == 3);
    node = node->next.get();
    CHECK(node == nullptr);
}
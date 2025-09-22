#include "increment_test.hpp"

void increment_reference(int& x) {
    ++x;
}

int increment_value(int x) {
    ++x;
    return x;
}
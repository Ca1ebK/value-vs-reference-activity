#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/increment_test.hpp"

TEST_CASE( "Testing increment functions" ) {
    // Zero case
    {
        int x = 0;
        increment_reference(x);
        REQUIRE(x == 1);
    }
    REQUIRE(increment_value(0) == 1);

    // One case
    {
        int x = 1;
        increment_reference(x);
        REQUIRE(x == 2);
    }
    REQUIRE(increment_value(1) == 2);

    // Many case
    {
        int x = 41;
        increment_reference(x);
        REQUIRE(x == 42);
    }
    REQUIRE(increment_value(41) == 42);

    // Boundaries case
    {
        int x = 99;
        increment_reference(x);
        REQUIRE(x == 100);
    }
    REQUIRE(increment_value(99) == 100);

    {
        int x = INT_MAX;
        increment_reference(x);
        REQUIRE(x == INT_MAX + 1);
    }
    REQUIRE(increment_value(INT_MAX) == INT_MAX + 1);

    // Interfaces case
    {
        int x = 5;
        increment_reference(x);
        REQUIRE(x == 6);
    }
    REQUIRE(increment_value(5) == 6);

    // Exception-ish case
    {
        int x = -1;
        increment_reference(x);
        REQUIRE(x == 0);
    }
    REQUIRE(increment_value(-1) == 0);
}

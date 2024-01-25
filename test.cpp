#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

using namespace std;

// Testing the Sign Function
TEST_CASE("Sign is computed", "[sign]")
{
    REQUIRE(Sign(0) == 1);
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(100) == 1);
    REQUIRE(Sign(-100) == -1);
}

// Testing the Sum Function
TEST_CASE("Sums are computed", "[sum]")
{
    SECTION("checking just positives")
    {
        vector<int> v1 = {2, 3};
        vector<int> v2 = {2, 3, 4};
        vector<int> v3 = {6, 5};
        vector<int> v4 = {6, 5, 4};
        vector<int> v5 = {20, 30, 7};

        REQUIRE(Sum(v1) == 5);
        REQUIRE(Sum(v2) == 9);
        REQUIRE(Sum(v3) == 11);
        REQUIRE(Sum(v4) == 15);
        REQUIRE(Sum(v5) == 57);
    }

    SECTION("checking with negatives")
    {
        vector<int> v1 = {2, 6};
        vector<int> v2 = {-2, -11, 3};
        vector<int> v3 = {6, 8};
        vector<int> v4 = {6, 7, 2};
        vector<int> v5 = {13, -22, -4};

        REQUIRE(Sum(v1) == 8);
        REQUIRE(Sum(v2) == -10);
        REQUIRE(Sum(v3) == 14);
        REQUIRE(Sum(v4) == 15);
        REQUIRE(Sum(v5) == -13);
    }
}

// Testing the Product Function
TEST_CASE("Products are computed", "[product]")
{
    SECTION("checking when product is negative")
    {
        vector<int> v1 = {2, -3};
        vector<int> v2 = {2, 3, -4};
        vector<int> v3 = {6, -5};
        vector<int> v4 = {6, 5, -4};
        vector<int> v5 = {20, 30, -7};

        REQUIRE(Product(v1) == -6);
        REQUIRE(Product(v2) == -24);
        REQUIRE(Product(v3) == -30);
        REQUIRE(Product(v4) == -120);
        REQUIRE(Product(v5) == -4200);
    }

    SECTION("checking when product is positive")
    {
        vector<int> v1 = {2, 6};
        vector<int> v2 = {-2, -11, 3};
        vector<int> v3 = {6, 8};
        vector<int> v4 = {6, 7, 2};
        vector<int> v5 = {13, -22, -4};

        REQUIRE(Product(v1) == 12);
        REQUIRE(Product(v2) == 66);
        REQUIRE(Product(v3) == 48);
        REQUIRE(Product(v4) == 84);
        REQUIRE(Product(v5) == 1144);
    }
}

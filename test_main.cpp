
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("First test", "[Simple]")
{
	int a;
	a = 1;
	REQUIRE(a == 1);
}

TEST_CASE("Second test", "[Simple]")
{
	int a;
	a = 2;
	REQUIRE(a == 2);
}
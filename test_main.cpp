
#include "catch.hpp"

#define TESTCASE_NAME(test_name) "SRCmodule - " test_name

TEST_CASE(TESTCASE_NAME("TestCase1"), "[className][methodName]")
{
	int a;
	a = 1;
	REQUIRE(a == 1);
}

TEST_CASE(TESTCASE_NAME("TestCase2"), "[className][methodName]")
{
	int a;
	a = 2;
	REQUIRE(a == 2);
}
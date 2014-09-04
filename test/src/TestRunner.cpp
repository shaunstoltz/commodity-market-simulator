#include <iostream>
#include <gtest/gtest.h>
#include "TestUtil.hpp"
#include "TestCommands.hpp"

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}
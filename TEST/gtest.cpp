#include <gtest/gtest.h>
#include "add.h"

TEST(AddTest, HandlerTrueReturn)
{
	ASSERT_TRUE(add(1, 2) == 4);
}

int main(int argc, char*argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

#include "tst_test1.h"
#include "fibonachi_test.h"
#include "findroots_test.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
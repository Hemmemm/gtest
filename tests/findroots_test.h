#ifndef ROOTS_TEST_H
#define ROOTS_TEST_H

#include <gtest/gtest.h>

extern "C"
{
#include "findroots.h"
}

TEST(rootstest, disEq0)
{
    Roots check;
    check.x1 = -1.0;
    check.x2 = -1.0;
    check.found = 1.0;
    Roots res = findRoots(1.0, 2.0, 1.0);
    ASSERT_DOUBLE_EQ(check.x1, res.x1);
    ASSERT_DOUBLE_EQ(check.x2, res.x2);
    ASSERT_EQ(check.found, res.found);
}

#endif // ROOTS_TEST_H

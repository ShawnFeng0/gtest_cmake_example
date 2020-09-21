//
// Created by fs on 2020-09-21.
//

#include <gtest/gtest.h>

#include "sum.h"

TEST(gtest_example, test_add) {
  EXPECT_EQ(2, sum(1, 1));
  EXPECT_EQ(5, sum(2, 3));
}

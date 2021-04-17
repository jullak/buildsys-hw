#include <gtest/gtest.h>
#include "A/index.h"
#include "B/lib.h"


TEST(M, IsInc) {
    Gen g { .x = 0 };
    ASSERT_EQ(g.x, 0);
    g.inc();
    ASSERT_EQ(g.x, 1);
}

TEST(M, AddTest) {
    ASSERT_EQ(lib::add(1, 2), 3);
    ASSERT_EQ(lib::add(1, -2), -1);
    ASSERT_EQ(lib::add(-1, 2), 1);
    ASSERT_EQ(lib::add(-1, -500), -501);
}

TEST(M, MinusTest) {
    ASSERT_EQ(lib::minus(2, 1), 1);
    ASSERT_EQ(lib::minus(1, -2), 3);
    ASSERT_EQ(lib::minus(-1, 2), -3);
    ASSERT_EQ(lib::minus(-1, -500), 499);
}
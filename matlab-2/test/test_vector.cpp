#include "gtest/gtest.h"

#include "matlab.hpp"

TEST(MatlabVectorTest, createWithSize) {
    MatVect v(2U);

    ASSERT_EQ(v.size(), 2U);
    EXPECT_EQ(v.get_elem(0), 0);
    EXPECT_EQ(v.get_elem(1), 0);
}

TEST(MatlabVectorTest, createFromVector) {
    std::vector<int> vs{1, 2};
    MatVect v(vs);

    ASSERT_EQ(v.size(), 2U);
    EXPECT_EQ(v.get_elem(0), 1);
    EXPECT_EQ(v.get_elem(1), 2);
}

TEST(MatlabVectorTest, norm) {
    std::vector<int> vs{3, 4, 0};
    MatVect v(vs);

    EXPECT_EQ(v.norm(), 5);
}

TEST(MatlabVectorTest, add) {
    std::vector<int> vs1{1, 2};
    MatVect v1(vs1);
    std::vector<int> vs2{4, 5};
    MatVect v2(vs2);

    MatVect v_sum = add_vectors(v1, v2);

    ASSERT_EQ(v_sum.size(), 2U);
    EXPECT_EQ(v_sum.get_elem(0), 5);
    EXPECT_EQ(v_sum.get_elem(1), 7);
}

#include "gtest/gtest.h"
#include <ds.h>

class VecFind : public ::testing::Test{
protected:
  std::vector<int> vec = {1,2,3,4,5};
};
TEST_F(VecFind, simpleFind) {
  ASSERT_FALSE(ds::find(vec, 6));
  ASSERT_EQ(5, ds::find(vec,5));
}


class Contains : public ::testing::Test{
protected:
  std::vector<int> vec = {1,2,3,4,5};
  std::set<std::string> set = {"foo", "bar", "baz"};
  int arr[5] = {1,2,3,4,5};

};

TEST_F(Contains, simpleContains){
  EXPECT_FALSE(ds::contains(vec, 0));
  EXPECT_TRUE(ds::contains(vec, 4));

  EXPECT_FALSE(ds::contains(set, "hello"));
  EXPECT_TRUE(ds::contains(set, "bar"));
  
}
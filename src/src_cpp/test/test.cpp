#include <iostream>
#include "hello_world_cpp.h"

#define ASSERT_EQUAL_INT( x, y )                                    \
{                                                                   \
  if( ( (int)x ) != ( (int)y ) )                                    \
  {                                                                 \
        std::cout << "ASSERT_EQUAL_INT Failed "                     \
                <<  __PRETTY_FUNCTION__                             \
                << " in "                                           \
                << __FILE__                                         \
                << ":"                                              \
                << __LINE__                                         \
                << std::endl;                                       \
        return false;                                               \
  }                                                                 \
}

#define ASSERT_TRUE( condition )                                    \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
        std::cout << "ASSERT_TRUE Failed "                          \
                <<  __PRETTY_FUNCTION__                             \
                << " in "                                           \
                << __FILE__                                         \
                << ":"                                              \
                << __LINE__                                         \
                << std::endl;                                       \
        return false;                                               \
  }                                                                 \
}

#define ASSERT_FALSE( condition )                                   \
{                                                                   \
  if( ( condition ) )                                               \
  {                                                                 \
        std::cout << "ASSERT_FALSE Failed "                         \
                <<  __PRETTY_FUNCTION__                             \
                << " in "                                           \
                << __FILE__                                         \
                << ":"                                              \
                << __LINE__                                         \
                << std::endl;                                       \
        return false;                                               \
  }                                                                 \
}

#define ASSERT_RETCODE( condition )                                 \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
        return 1;                                                   \
  }                                                                 \
}

#define PRINT_TEST_NAME()                                           \
{                                                                   \
  std::cout << "Running: "  <<  __FUNCTION__  << std::endl;         \
}


bool test1() {
    PRINT_TEST_NAME();
    ASSERT_TRUE(true);

    return true;
}

bool test2() {
    PRINT_TEST_NAME();
    ASSERT_FALSE(false);

    return true;
}

bool test3() {
    PRINT_TEST_NAME();
    ASSERT_EQUAL_INT(1,1);

    return true;
}

bool test4() {
    PRINT_TEST_NAME();
    ASSERT_TRUE(is_even(4));

    return true;
}

bool test5() {
    PRINT_TEST_NAME();
    ASSERT_FALSE(is_even(5));

    return true;
}

int main() {
     std::cout << "Start Tests" <<  std::endl; 
    ASSERT_RETCODE(test1());
    ASSERT_RETCODE(test2());
    ASSERT_RETCODE(test3());
    ASSERT_RETCODE(test4());
    ASSERT_RETCODE(test5());

    return 0;
}
#include "hello_world_c.h"

#define ASSERT_EQUAL_INT( x, y )                                    \
{                                                                   \
  if( ( (int)x ) != ( (int)y ) )                                    \
  {                                                                 \
        printf("ASSERT_EQUAL_INT Failed %s in %s:%d \n",            \
                __PRETTY_FUNCTION__,                                \
                __FILE__,                                           \
                __LINE__);                                          \
        return false;                                               \
  }                                                                 \
}

#define ASSERT_TRUE( condition )                                    \
{                                                                   \
  if( !( condition ) )                                              \
  {                                                                 \
       printf("ASSERT_TRUE Failed %s in %s:%d \n",                  \
                __PRETTY_FUNCTION__,                                \
                __FILE__,                                           \
                __LINE__);                                          \
        return false;                                               \
  }                                                                 \
}

#define ASSERT_FALSE( condition )                                   \
{                                                                   \
  if( ( condition ) )                                               \
  {                                                                 \
        printf("ASSERT_FALSE Failed %s in %s:%d \n",                \
                __PRETTY_FUNCTION__,                                \
                __FILE__,                                           \
                __LINE__);                                          \
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
    printf("Running: %s\n", __FUNCTION__);                          \
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
    printf("Start Tests\n"); 
    ASSERT_RETCODE(test1());
    ASSERT_RETCODE(test2());
    ASSERT_RETCODE(test3());
    ASSERT_RETCODE(test4());
    ASSERT_RETCODE(test5());

    return 0;
}
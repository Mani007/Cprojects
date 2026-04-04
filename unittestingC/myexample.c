#include <stdio.h>
#include "munit.h"
int some_add(int x, int y){
    return x+y;
}
// munit_case("RUN", some_add, {
//         int res = some_add(3,4);
//         munit_assert_int_equal(res, 7, "The sum of 3 and 4 is 7");
//     });
static MunitResult test_add(const MunitParameter params[], void* data) {
    (void) params;
    (void) data;

    int result = some_add(2, 3);

    munit_assert_int(result, ==, 6);

    return MUNIT_OK;
}

static MunitTest test_suite_tests[] = {
    { "/add", test_add, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
    { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

static const MunitSuite test_suite = {
    "/my_tests",
    test_suite_tests,
    NULL,
    1,
    MUNIT_SUITE_OPTION_NONE
};
int main(int argc, char* argv[]) {
    printf("Testing my munit function");
    // MunitTest test[] = {
    //     munit_test("get sum", some_add),
    //     munit_null_test
    // };
    // MunitSuite suite = munit_suite("get some sum", test);
// return munit_suite_main(&suite, NULL,0,NULL);
// return 0;
return munit_suite_main(&test_suite, NULL, argc, argv);;
}
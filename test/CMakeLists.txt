set(SRC_TESTS basic_test001.cpp testFicture.h tools.h)

add_executable(alg_app_tests_run ${SRC_TESTS})

target_link_libraries(alg_app_tests_run gtest gmock gtest_main)
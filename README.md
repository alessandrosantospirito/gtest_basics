# Execute tests

## With CMake

## Without CMake
Compile test:
```shell
g++ -std=c++14 -isystem /usr/include/gtest -pthread src/math.cpp test/test_math.cpp -l gtest -l gtest_main -o runTests
```

Run tests:
```shell
./runTests
```
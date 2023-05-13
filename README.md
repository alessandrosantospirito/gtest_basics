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
It should look like the following:
![Kazam_screenshot_00014](https://github.com/alessandrosantospirito/gtest_basics/assets/42292291/e6a93b8c-766b-4283-bcdc-ad12da30e315)

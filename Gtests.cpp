#include <iostream>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

//g++ Gtests.cpp -o test -lgtest -lgmock -pthread

TEST(Test1, ZerosAndOnes){
    char *arr = new char;
    arr[0] = '1';
    arr[1] = '0';
    arr[2] = ' ';
    task1 t(true);
    int Test_out = t.checkZerosAndOnes(arr, 3);
    EXPECT_EQ(0, Test_out);
}

TEST(Test2, CountOnes){
    char *arr = new char[8]{'1', ' ', '1', '0', '1', ' ', '1', '1'};
    task1 t(true);
    int Test_out = t.count(arr, 8);
    EXPECT_EQ(3, Test_out);
}

TEST(Test3, StrToStrings){
    char **str = new char*;
    task3 t(true);
    std::cout << "write anything: ";
    t.elementStrings(str, 0);
    delete[] str[0];
    delete[] str;
    ASSERT_TRUE(true);
}

TEST(Test4, StrToStrings2){
    char **str = new char*;
    task3 t(true);
    std::cout << "write anything: ";
    t.elementStrings(str, 0);
    delete[] str[0];
    delete[] str;
    ASSERT_TRUE(true);
}

TEST(Test5, ZerosAndOnes2){
    char *arr = new char;
    arr[0] = '1';
    arr[1] = '2';
    arr[2] = ' ';
    task1 t(true);
    int Test_out = t.checkZerosAndOnes(arr, 3);
    EXPECT_EQ(1, Test_out);
}

TEST(Test6, ZerosAndOnes3){
    char *arr = new char[10]{'1','0',' ',' ','0','1',' ','1','1','1'};
    task1 t(true);
    int Test_out = t.checkZerosAndOnes(arr, 10);
    EXPECT_EQ(0, Test_out);
}

TEST(Test7, CountOnes2){
    char *arr = new char[8]{'1', ' ', '1', '1', '1', ' ', '1', '1'};
    task1 t(true);
    int Test_out = t.count(arr, 8);
    EXPECT_EQ(4, Test_out);
}

TEST(Test8, CountOnes3){
    char *arr = new char[8]{'0', ' ', '0', '0', '0', ' ', '0', '0'};
    task1 t(true);
    int Test_out = t.count(arr, 8);
    EXPECT_EQ(0, Test_out);
}

TEST(Test9, Vivod){
    char *str = new char[11]{'h','e','l','l','o',' ','w','o','r','l','d'};
    char *word = new char[2]{'l','o'};
    char c = ',';
    task2 t(true);
    t.vivod(str, 11, word, 2, c);
    delete[] str;
    delete[] word;
    ASSERT_TRUE(true);
}

TEST(Test10, Vivod2){
    char *str = new char[17]{'h','e','l','l','o',' ','w','o','r','l','d',' ','h','e','l','l','o'};
    char *word = new char[2]{'l','o'};
    char c = ',';
    task2 t(true);
    t.vivod(str, 17, word, 2, c);
    delete[] str;
    delete[] word;
    ASSERT_TRUE(true);
}

int main(int args, char **argv){
    ::testing::InitGoogleTest(&args, argv);
    return RUN_ALL_TESTS();
}
#include "gtest/gtest.h"
#include "../header/taskFile.hpp"


TEST(taskFile, testWriteFileEmpty) {
    vector<Task> taskList = {};
    taskFile file;
    file.setFileName("testFile.txt");
    file.writeFile(taskList);

    ifstream myFile("testFile.txt");
    ASSERT_TRUE(myFile.is_open());

    string line;
    vector<string> fileContent;
    while (getline(myFile, line)) {
        fileContent.push_back(line);
    }
    myFile.close();
    // Both should equal zero
    ASSERT_EQ(fileContent.size(), 0);
}


TEST(taskFile, testReadFileEmpty) {
    vector<Task> taskList = {};
    taskFile file;
    file.setFileName("testFile.txt");
    file.writeFile(taskList);

    file.readFile(taskList);
    EXPECT_EQ(taskList.size(), 0);
}

TEST(taskFile, testReadFile) {
    Task task1("Task 1", 1, "2024-06-01", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "2024-06-02", "Description 2", 2.0, "Label 2");
    vector<Task> taskList = {task1, task2};
    taskFile file;
    file.setFileName("testFile.txt");
    file.writeFile(taskList);
    taskList.clear();
    EXPECT_EQ(taskList.size(), 0);
    file.readFile(taskList);
    EXPECT_EQ(taskList.size(), 2);
}
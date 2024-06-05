#include "gtest/gtest.h"
#include "../header/subtask.hpp"

TEST(subtask, testSubtask) {
    subTask subtask1; 
    Task task1("Task 1", 1, "2024-06-01", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "2024-06-02", "Description 2", 2.0, "Label 2");
    Task task3("Task 3", 3, "2024-06-03", "Description 3", 3.0, "Label 1");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 1");

    vector<Task> expectedContent = {task1, task3};

    ASSERT_EQ(subtask.size(), expectedContent.size());
    for (int i = 0; i < expectedContent.size(); ++i) {
        EXPECT_EQ(subtask[i], expectedContent[i]);
    }
}

TEST(subtask, testSubtaskEmpty) {
    subTask emptysubtask; 
    vector<Task> taskList = {};

    vector<Task> subtask = emptysubtask.createListTasks(taskList, "");

    EXPECT_EQ(subtask.size(), 0);
}

TEST(subtask, testSubtask2) {
    subTask subtask1; 
    Task task1("Task 1", 1, "2024-06-01", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "2024-06-02", "Description 2", 2.0, "Label 2");
    Task task3("Task 3", 3, "2024-06-03", "Description 3", 3.0, "Label 3");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 4");

    EXPECT_EQ(subtask.size(), 0);
    
}

TEST(subtask, testSubtask3) {
    subTask subtask1; 
    Task task1("Task 1", 1, "2024-06-01", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "2024-06-02", "Description 2", 2.0, "Label 1");
    Task task3("Task 3", 3, "2024-06-03", "Description 3", 3.0, "Label 1");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 1");

    vector<Task> expectedContent = taskList;

    ASSERT_EQ(subtask.size(), expectedContent.size());
    for (int i = 0; i < expectedContent.size(); ++i) {
        EXPECT_EQ(subtask[i], expectedContent[i]);
    }
}
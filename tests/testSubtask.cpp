#include "gtest/gtest.h"
#include "../header/subtask.hpp"

TEST(subtask, testSubtask) {
    subTask subtask1; 
    Task task1("Task 1", 1, "06/01/2024", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "06/02/2024", "Description 2", 2.0, "Label 2");
    Task task3("Task 3", 3, "06/03/2024", "Description 3", 3.0, "Label 1");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 1");

    vector<Task> expectedContent = {task1, task3};

    ASSERT_EQ(subtask.size(), expectedContent.size());
    EXPECT_EQ(subtask.at(0).getName(), "Task 1");
    EXPECT_EQ(subtask.at(1).getName(), "Task 3");
}

TEST(subtask, testSubtaskEmpty) {
    subTask emptysubtask; 
    vector<Task> taskList = {};

    vector<Task> subtask = emptysubtask.createListTasks(taskList, "");

    EXPECT_EQ(subtask.size(), 0);
}

TEST(subtask, testSubtask2) {
    subTask subtask1; 
    Task task1("Task 1", 1, "06/01/2024", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "06/02/2024", "Description 2", 2.0, "Label 2");
    Task task3("Task 3", 3, "06/03/2024", "Description 3", 3.0, "Label 3");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 4");

    EXPECT_EQ(subtask.size(), 0);
    
}

TEST(subtask, testSubtask3) {
    subTask subtask1; 
    Task task1("Task 1", 1, "06/01/2024", "Description 1", 1.0, "Label 1");
    Task task2("Task 2", 2, "06/02/2024", "Description 2", 2.0, "Label 1");
    Task task3("Task 3", 3, "06/03/2024", "Description 3", 3.0, "Label 1");
    vector<Task> taskList = {task1, task2, task3};

    vector<Task> subtask = subtask1.createListTasks(taskList, "Label 1");

    vector<Task> expectedContent = taskList;

    ASSERT_EQ(subtask.size(), expectedContent.size());
    EXPECT_EQ(subtask.at(0).getName(), "Task 1");
    EXPECT_EQ(subtask.at(1).getName(), "Task 2");
    EXPECT_EQ(subtask.at(2).getName(), "Task 3");
}
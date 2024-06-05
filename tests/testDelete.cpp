#include "gtest/gtest.h"
#include "../header/deleteTask.hpp"
#include "../header/editTask.hpp"

TEST(DeleteTask, DeleteByName) {
    vector<Task> tasks;
    DeleteTask deleter;
    Task newTask("HW", 3, "2024/07/21", "Test 1", 30.0, "School");
    tasks.push_back(newTask);
    deleter.DeleteByName(tasks, "HW");
    ASSERT_EQ(tasks.size(), 0);
}

TEST(DeleteTask, DeleteByName2) {
    vector<Task> tasks;
    DeleteTask deleter;
    Task newTask("Finish Project", 3, "2024/11/01", "Description 1", 50.0, "Work");
    tasks.push_back(newTask);
    deleter.DeleteByName(tasks, "Finish Project");
    ASSERT_EQ(tasks.size(), 0);
}

TEST(DeleteTask, DeleteByName3) {
    vector<Task> tasks;
    DeleteTask deleter;
    Task newTask("Apply to Jobs", 2, "2024/06/03", "Description 2", 30.0, "Work");
    tasks.push_back(newTask);
    deleter.DeleteByName(tasks, "Apply to Jobs");
    ASSERT_EQ(tasks.size(), 0);
}


TEST(DeleteTask, DeleteWhenDone) {
    vector<Task> tasks;
    DeleteTask deleter;
    editTask editor;
    Task newTask("Setup Party", 2, "2024/09/15", "Description 3", 30.0, "Home");
    editor.markAsComplete(newTask);
    tasks.push_back(newTask);
    deleter.DeleteWhenDone(tasks);
    ASSERT_EQ(tasks.size(), 0);
}


TEST(DeleteTask, DeleteWhenDone2) {
    vector<Task> tasks;
    DeleteTask deleter;
    editTask editor;
    Task newTask("Paper Review", 1, "2024/06/01", "Description 1", 50.0, "Work");
    editor.markAsComplete(newTask);
    tasks.push_back(newTask);
    deleter.DeleteWhenDone(tasks);
    ASSERT_EQ(tasks.size(), 0);
}


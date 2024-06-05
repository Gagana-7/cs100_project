#include "gtest/gtest.h"
#include "../header/editTask.hpp"

TEST(TaskEditTest, EditTaskName) {
    Task Task1("HW", 3, "2024/07/21", "Test 1", 30.0, "School");
    editTask editor;
    editor.editName(Task1, "Cooking Dinner");
    EXPECT_EQ(Task1.getName(), "New Name");
}

TEST(TaskEditTest, EditTaskName) {
    Task Task2("Groceries", 4, "2024/05/23", "Description 2", 20.0, "Errand");
    editTask editor;
    editor.editDeadline(Task2, "2024/04/23");
    EXPECT_EQ(Task2.getDeadline(), "New Deadline");
}

TEST(TaskEditTest, EditTaskName) {
    Task Task3("Setup Party", 2, "2024/09/15", "Description 3", 30.0, "Home");
    editTask editor;
    editor.editDuration(Task3, 40.0);
    EXPECT_EQ(Task3.getDuration(), 40.0);
}

TEST(TaskEditTest, EditTaskName) {
    Task Task2("Make Food", 4, "2024/09/03", "Description 2", 20.0, "Home");
    editTask editor;
    editor.editPriority(Task2, 3);
    EXPECT_EQ(Task2.getPriority(), 3);
}

TEST(TaskEditTest, EditTaskName) {
    Task Task3("Basketball", 5, "2024/08/10", "Description 3", 80.0, "Work");
    editTask editor;
    editor.editLabel(Task3, "Home");
    EXPECT_EQ(Task3.getLabel(), "New Label");
}
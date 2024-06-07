#include "gtest/gtest.h"
#include "../header/editTask.hpp"

TEST(TaskEditTest, EditTaskName1) {
    Task Task1("HW", 3, "07/21/2024", "Test 1", 30.0, "School");
    editTask editor;
    editor.editName(Task1, "Cooking Dinner");
    EXPECT_EQ(Task1.getName(), "Cooking Dinner");
}

TEST(TaskEditTest, EditTaskName2) {
    Task Task2("Groceries", 4, "05/23/2024", "Description 2", 20.0, "Errand");
    editTask editor;
    editor.editDeadline(Task2, "04/23/2024");
    EXPECT_EQ(Task2.getDeadline(), "04/23/2024");
}

TEST(TaskEditTest, EditTaskName3) {
    Task Task3("Setup Party", 2, "09/15/2024", "Description 3", 30.0, "Home");
    editTask editor;
    editor.editDuration(Task3, 40.0);
    EXPECT_EQ(Task3.getDuration(), 40.0);
}

TEST(TaskEditTest, EditTaskName4) {
    Task Task2("Make Food", 4, "09/03/2024", "Description 2", 20.0, "Home");
    editTask editor;
    editor.editPriority(Task2, 3);
    EXPECT_EQ(Task2.getPriority(), 3);
}

TEST(TaskEditTest, EditTaskName5) {
    Task Task3("Basketball", 5, "08/10/2024", "Description 3", 80.0, "Work");
    editTask editor;
    editor.editLabel(Task3, "Home");
    EXPECT_EQ(Task3.getLabel(), "Home");
}
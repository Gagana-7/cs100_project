#include "gtest/gtest.h"
#include "../header/TaskDisplay.hpp"


TEST(TaskDisplay, displayTaskByName) {
    vector<Task> tasks;
    Task Task1("HW", 3, "07/21/2024", "Description 1", 30.0, "School");
    Task Task2("Gym", 4, "07/23/2024", "Description 2", 70.0, "Work");
    Task Task3("Chores", 2, "07/25/2024", "Description 3", 20.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    EXPECT_EQ(tasks[0].getName(), "HW");
}

TEST(TaskDisplay, displayTaskByPriority) {
    vector<Task> tasks;
    Task Task1("Shopping", 3, "06/18/2024", "Description 1", 40.0, "Misc");
    Task Task2("Groceries", 4, "05/23/2024", "Description 2", 20.0, "Errand");
    Task Task3("Basketball", 5, "08/10/2024", "Description 3", 80.0, "Work");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    EXPECT_EQ(tasks[0].getPriority(), 3);
}

TEST(TaskDisplay, displayTaskByDuration) {
    vector<Task> tasks;
    Task Task1("Soccer", 3, "10/01/2024", "Description 1", 50.0, "Work");
    Task Task2("Walk Dog", 1, "09/13/2024", "Description 2", 10.0, "Home");
    Task Task3("Setup Party", 2, "09/15/2024", "Description 3", 30.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    EXPECT_EQ(tasks[0].getDuration(), 50.0);
}

TEST(TaskDisplay, displayTaskByDescription) {
    vector<Task> tasks;
    Task Task1("Finish Project", 3, "11/01/2024", "Description 1", 50.0, "Work");
    Task Task2("Make Food", 4, "09/03/2024", "Description 2", 20.0, "Home");
    Task Task3("Clean Room", 5, "05/15/2024", "Description 3", 10.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    EXPECT_EQ(tasks[0].getDescription(), "Description 1");
}

TEST(TaskDisplay, displayTaskByLabel) {
    vector<Task> tasks;
    Task Task1("Paper Review", 1, "06/01/2024", "Description 1", 50.0, "Work");
    Task Task2("Apply to Jobs", 2, "06/03/2024", "Description 2", 30.0, "Work");
    Task Task3("Baseball", 3, "06/15/2024", "Description 3", 60.0, "Outside");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    EXPECT_EQ(tasks[0].getLabel(), "Work");
}
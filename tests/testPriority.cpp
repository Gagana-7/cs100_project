#include "gtest/gtest.h"
#include "../header/PrioritysortTask.hpp"

TEST(PrioritySortTest, SortTasksByPriority) {
    vector<Task> tasks;
    PrioritySortTask priorSort;
    Task Task1("HW", 3, "2024/07/21", "Test 1", 30.0, "School");
    Task Task3("Basketball", 1, "2024/08/10", "Test 3", 80.0, "Work");
    Task Task2("Walk Dog", 2, "2024/09/13", "Test 2", 10.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task3);
    tasks.push_back(Task2);
    priorSort.sortbypriority(tasks);
    EXPECT_TRUE(tasks[0].getPriority() <= tasks[1].getPriority());
}

TEST(PrioritySortTest, SortTasksByPriority) {
    vector<Task> tasks;
    PrioritySortTask priorSort;
    Task Task1("Paper Review", 1, "2024/06/01", "Description 1", 50.0, "Work");
    Task Task2("Apply to Jobs", 2, "2024/06/03", "Description 2", 30.0, "Work");
    Task Task3("Baseball", 3, "2024/06/15", "Description 3", 60.0, "Outside");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    priorSort.sortbypriority(tasks);
    EXPECT_TRUE(tasks[0].getPriority() <= tasks[1].getPriority());
}

TEST(PrioritySortTest, SortTasksByPriority) {
    vector<Task> tasks;
    PrioritySortTask priorSort;
    Task Task2("Shopping", 4, "2024/06/18", "Description 1", 40.0, "Misc");
    Task Task3("Groceries", 3, "2024/05/23", "Description 2", 20.0, "Errand");
    Task Task1("Basketball", 2, "2024/08/10", "Description 3", 80.0, "Work");
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    tasks.push_back(Task1);
    priorSort.sortbypriority(tasks);
    EXPECT_TRUE(tasks[0].getPriority() <= tasks[1].getPriority());
}

TEST(PrioritySortTest, SortTasksByPriority) {
    vector<Task> tasks;
    PrioritySortTask priorSort;
    Task Task1("Cooking Dinner", 3, "2024/07/21", "Description 1", 30.0, "School");
    Task Task2("Gym", 4, "2024/07/23", "Description 2", 70.0, "Work");
    Task Task3("Chores", 2, "2024/07/25", "Description 3", 20.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    priorSort.sortbypriority(tasks);
    EXPECT_TRUE(tasks[0].getPriority() <= tasks[1].getPriority());
}

TEST(PrioritySortTest, SortTasksByPriority) {
    vector<Task> tasks;
    PrioritySortTask priorSort;
    Task Task1("Soccer", 3, "2024/10/01", "Description 1", 50.0, "Work");
    Task Task2("Walk Cat", 1, "2024/09/13", "Description 2", 10.0, "Home");
    Task Task3("Setup Party", 2, "2024/09/15", "Description 3", 30.0, "Home");
    tasks.push_back(Task1);
    tasks.push_back(Task2);
    tasks.push_back(Task3);
    priorSort.sortbypriority(tasks);
    EXPECT_TRUE(tasks[0].getPriority() <= tasks[1].getPriority());
}
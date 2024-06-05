#include "gtest/gtest.h"
#include "../header/driverTask.hpp"

TEST(TestDriverTask, TestEditTaskDriverName) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 1, "Prepare the cheat sheet");
    EXPECT_EQ(testTask.getName(), "Prepare the cheat sheet");
}

TEST(TestDriverTask, TestEditTaskDriverDeadline) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 3, "06/06/2024");
    EXPECT_EQ(testTask.getDeadline(), "06/06/2024");
}

TEST(TestDriverTask, TestEditTaskDriverDescription) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 4, "Write cheatsheet for CS100 exam");
    EXPECT_EQ(testTask.getDescription(), "Write cheatsheet for CS100 exam");
}

TEST(TestDriverTask, TestEditTaskDriverLabel) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 6, "Personal");
    EXPECT_EQ(testTask.getLabel(), "Personal");
}

TEST(TestDriverTask, TestEditTaskDriverPriority) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 2, 1);
    EXPECT_EQ(testTask.getPriority(), 1);
}

TEST(TestDriverTask, TestEditTaskDriverDuration) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 5, 150.0);
    EXPECT_EQ(testTask.getDuration(), 150.0);
}

TEST(TestDriverTask, TestEditTaskDriverCompleted) {
    Task testTask("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    DriverTask driver;
    driver.editTaskDriver(testTask, 7);
    EXPECT_TRUE(testTask.getCompleted());
}

TEST(TestDriverTask, TestDeleteTaskDriverSizeZero) {
    vector<Task> taskList;
    Task testTask1("Study for finals", 2, "06/06/2024", "Look over study guides", 300.0, "School");
    taskList.push_back(testTask1);
    DriverTask driver;
    driver.deleteTaskDriver("Study for finals", taskList);
    EXPECT_EQ(taskList.size(), 0);
}

TEST(TestDriverTask, TestDeleteTaskDriverSizeNonZero) {
    vector<Task> taskList;
    Task testTask1("Study for finals", 2, "06/06/2024", "Look over study guides", 300.0, "School");
    Task testTask2("Complete chores", 4, "06/11/2024", "Finish cleaning the house", 50.0, "Home");
    taskList.push_back(testTask1);
    taskList.push_back(testTask2);
    DriverTask driver;
    driver.deleteTaskDriver("Study for finals", taskList);
    EXPECT_EQ(taskList.size(), 1);
}

TEST(TestDriverTask, TestDeleteDriverCompleted) {
    vector<Task> taskList;
    Task testTask1("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School");
    taskList.push_back(testTask1);
    DriverTask driver;
    driver.editTaskDriver(testTask1, 7);
    driver.deleteTaskDriver(taskList);
    EXPECT_EQ(taskList.size(), 0);
}

TEST(TestDriverTask, TestCreateDriverVector) {
    vector<Task> taskList;
    DriverTask driver;
    driver.createTaskDriver("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School", taskList);
    EXPECT_EQ(taskList.size(), 1);
}

TEST(TestDriverTask, TestCreateDriverValue) {
    vector<Task> taskList;
    DriverTask driver;
    driver.createTaskDriver("Study for Exam", 3, "06/07/2024", "Prepare for CS100 exam", 200.0, "School", taskList);
    EXPECT_EQ(taskList[0].getPriority(), 3);
}

TEST(TestDriverTask, TestSaveAndLoadDriver) {
    vector<Task> taskList;
    string testFileName = "myFile.txt";
    DriverTask driver;
    Task testTask1("Study for finals", 2, "06/06/2024", "Look over study guides", 300.0, "School");
    Task testTask2("Complete chores", 4, "06/11/2024", "Finish cleaning the house", 50.0, "Home");
    Task testTask3("Exercise", 3, "06/05/2024", "Go to the gym", 60.0, "Home");
    taskList.push_back(testTask1);
    taskList.push_back(testTask2);
    taskList.push_back(testTask3);

    driver.saveFileDriver(testFileName, taskList);
    taskList.clear();

    EXPECT_EQ(taskList.size(), 0);

    driver.loadFileDriver(testFileName, taskList);

    EXPECT_EQ(taskList.size(), 3);
}

TEST(TestDriverTask, TestDisplayDriverPriority) {
    vector<Task> taskList;
    DriverTask driver;
    Task testTask1("Study for finals", 2, "06/06/2024", "Look over study guides", 300.0, "School");
    Task testTask2("Complete chores", 4, "06/11/2024", "Finish cleaning the house", 50.0, "Home");
    Task testTask3("Exercise", 3, "06/05/2024", "Go to the gym", 60.0, "Home");
    taskList.push_back(testTask1);
    taskList.push_back(testTask2);
    taskList.push_back(testTask3);

    driver.displayTasks(taskList, 1);
    EXPECT_EQ(taskList[1].getName(), "Exercise");
}

TEST(TestDriverTask, TestDisplayDriverDeadline) {
    vector<Task> taskList;
    DriverTask driver;
    Task testTask1("Study for finals", 2, "06/06/2024", "Look over study guides", 300.0, "School");
    Task testTask2("Complete chores", 4, "06/11/2024", "Finish cleaning the house", 50.0, "Home");
    Task testTask3("Exercise", 3, "06/05/2024", "Go to the gym", 60.0, "Home");
    taskList.push_back(testTask1);
    taskList.push_back(testTask2);
    taskList.push_back(testTask3);

    driver.displayTasks(taskList, 2);
    EXPECT_EQ(taskList[0].getName(), "Exercise");
}
#include "gtest/gtest.h"
#include "../header/task.hpp"

TEST(TestTask, TestEmptyContructorPriority) {
    Task testTask;
    EXPECT_EQ(testTask.getPriority(), 0);
}

TEST(TestTask, TestEmptyContructorDuration) {
    Task testTask;
    EXPECT_EQ(testTask.getDuration(), 0.0);
}

TEST(TestTask, TestEmptyContructorCompleted) {
    Task testTask;
    EXPECT_FALSE(testTask.getCompleted());
}

TEST(TestTask, TestContructorName) {
    Task testTask("Make tests", 1, "10/10/2029", "Complete the tests for project", 100.0, "School");
    EXPECT_EQ(testTask.getName(), "Make tests");
}

TEST(TestTask, TestContructorDescription) {
    Task testTask("Make tests", 1, "10/10/2029", "Complete the tests for project", 100.0, "School");
    EXPECT_EQ(testTask.getDescription(), "Complete the tests for project");
}

TEST(TestTask, TestContructorLabel) {
    Task testTask("Make tests", 1, "10/10/2029", "Complete the tests for project", 100.0, "School");
    EXPECT_EQ(testTask.getLabel(), "School");
}
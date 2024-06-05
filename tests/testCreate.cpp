#include "gtest/gtest.h"
#include "../header/createtask.hpp"

TEST(TestCreateTask, TestEmptyConstructorName) {
    CreateTask creator;
    EXPECT_EQ(creator.getName(), "Untitled");
}

TEST(TestCreateTask, TestContructorName) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getName(), "Make create tests");
}

TEST(TestCreateTask, TestEmptyConstructorPriority) {
    CreateTask creator;
    EXPECT_EQ(creator.getPriority(), 0);
}

TEST(TestCreateTask, TestContructorPriority) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getPriority(), 2);
}

TEST(TestCreateTask, TestEmptyConstructorDeadline) {
    CreateTask creator;
    EXPECT_EQ(creator.getDeadline(), "No deadline");
}

TEST(TestCreateTask, TestContructorDeadline) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getDeadline(), "06/06/2024");
}

TEST(TestCreateTask, TestEmptyConstructorDescription) {
    CreateTask creator;
    EXPECT_EQ(creator.getDescription(), "No description");
}

TEST(TestCreateTask, TestContructorDescription) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getName(), "Make gtests for the createTask file");
}

TEST(TestCreateTask, TestEmptyConstructorDuration) {
    CreateTask creator;
    EXPECT_EQ(creator.getDuration(), 0.0);
}

TEST(TestCreateTask, TestContructorDuration) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getDuration(), 40.0);
}

TEST(TestCreateTask, TestEmptyConstructorLabel) {
    CreateTask creator;
    EXPECT_EQ(creator.getLabel(), "No label");
}

TEST(TestCreateTask, TestContructorPriority) {
    CreateTask creator("Make create tests", 2, "06/06/2024", "Make gtests for the createTask file", 40.0, "School");
    EXPECT_EQ(creator.getLabel(), "School");
}
#include "../include/task.hpp"

void Task::setName(const std::string& name) {
    this->name = name;
}

void Task::setPriority(int priority) {
    this->priority = priority;
}

void Task::setDeadline(const std::string deadline) {
    this->deadline = deadline;
}

void Task::setDescription(const std::string& description) {
    this->description = description;
}

void Task::setLabel(const std::string& label) {
    this->label = label;
}

void Task::setDuration(double duration) {
    this->duration = duration;
}

void Task::addTask(const std::string& newTask) { 
    taskList = newTask;
}

bool Task::getCompleted() const {
    return completed;
}

std::string Task::getName() const {
    return name;
}

int Task::getPriority() const {
    return priority;
}

std::string Task::getDeadline() const {
    return deadline;
}

std::string Task::getDescription() const {
    return description;
}

std::string Task::getLabel() const {
    return label;
}

double Task::getDuration() const {
    return duration;
}
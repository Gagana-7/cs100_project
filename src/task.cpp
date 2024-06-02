#include "../header/task.hpp"

void Task::setName(const string& name) {
    this->name = name;
}

void Task::setPriority(int priority) {
    this->priority = priority;
}

void Task::setDeadline(const string deadline) {
    this->deadline = deadline;
}

void Task::setDescription(const string& description) {
    this->description = description;
}

void Task::setDuration(double duration) {
    this->duration = duration;
}

void Task::setLabel(const string& label) {
    this->label = label;
}

void Task::setCompleted(bool completed) {
    this->completed = completed;
}

void Task::addTask(const Task& newTask) { 
    taskList.push_back(newTask);
}

string Task::getName() const {
    return name;
}

int Task::getPriority() const {
    return priority;
}

string Task::getDeadline() const {
    return deadline;
}

string Task::getDescription() const {
    return description;
}

double Task::getDuration() const {
    return duration;
}

string Task::getLabel() const {
    return label;
}

const vector<Task>& Task::getTaskList() const {
    return taskList;
}

bool Task::getCompleted() const {
    return completed;
}
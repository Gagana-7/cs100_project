#include "editTask.hpp"

void editTask::editName(string new_name) {
    this->name = new_name;
}

void editTask::editPriority(int new_priority) {
    this->priority = new_priority;
}

void editTask::editDeadline(string new_deadline) {
    this->deadline = new_deadline;
}

void editTask::editDescription(string new_description) {
    this->description = new_description;
}

void editTask::editLabel(string new_label) {
    this->label = new_label;
}

void editTask::editDuration(double new_duration) {
    this->duration = new_duration;
}

void editTask::markAsComplete() {
    this->completed = true;
}
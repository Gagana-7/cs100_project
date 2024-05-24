#include "editTask.hpp"

void editName(string new_name) {
    this->name = new_name;
}

void editPriority(int new_priority) {
    this->priority = new_priority;
}

void editDeadline(string new_deadline) {
    this->deadline = new_deadline;
}

void editDescription(string new_description) {
    this->description = new_description;
}

void editLabel(string new_label) {
    this->label = new_label;
}

void editDuration(double new_duration) {
    this->duration = new_duration;
}

void markAsComplete() {
    this->completed = true;
}
#include "../header/editTask.hpp"

void editTask::editName(Task& task, const string& new_name) {
    task.setName(new_name);
}

void editTask::editPriority(Task& task, int new_priority) {
    task.setPriority(new_priority);
}

void editTask::editDeadline(Task& task, const string& new_deadline) {
    task.setDeadline(new_deadline);
}

void editTask::editDescription(Task& task, const string& new_description) {
    task.setDescription(new_description);
}

void editTask::editDuration(Task& task, double new_duration) {
    task.setDuration(new_duration);
}

void editTask::editLabel(Task& task, const string& new_label) {
    task.setLabel(new_label);
}

void editTask::markAsComplete(Task& task) {
    task.setCompleted(true);
}
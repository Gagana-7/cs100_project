#include "../include/display.h"
#include "../include/Task.h"
#include "../include/PrioritysortTask.h"
#include "../include/deadlineSortTask.h"
#include <iostream>
using namespace std;


void TaskDisplay::displayByPriority(vector<createTask> tasks) const{
    sortbypriority(tasks);
    for (int i = 0; i < tasks.size(); i++){
        cout << "Name:" << tasks.at(i).getName() << endl;
        cout << "Priority" << tasks.at(i).getPriority() << endl;
        cout << "Deadline" <<tasks.at(i).getDeadline() << endl;
        cout << "Description" << tasks.at(i).getDescription() << endl;
        cout << "Duration" << tasks.at(i).getDuration() << endl;
        cout << "Label" << tasks.at(i).getLabel() << endl;
        cout << "Is completed: " << tasks.at(i).getCompleted() << endl;
        cout << endl;
    }


}
void TaskDisplay::displayByDeadline(vector<createTask> tasks) const{
    deadlineSort(tasks);
    for (int i = 0; i < tasks.size(); i++){
        cout << "Name:" << tasks.at(i).getName() << endl;
        cout << "Priority" << tasks.at(i).getPriority() << endl;
        cout << "Deadline" <<tasks.at(i).getDeadline() << endl;
        cout << "Description" << tasks.at(i).getDescription() << endl;
        cout << "Duration" << tasks.at(i).getDuration() << endl;
        cout << "Label" << tasks.at(i).getLabel() << endl;
        cout << "Is completed: " << tasks.at(i).getCompleted() << endl;
        cout << endl;
    }


}
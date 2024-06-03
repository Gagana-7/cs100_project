#include "../header/TaskDisplay.hpp"
#include "../header/task.hpp"
#include "../header/PrioritysortTask.hpp"
#include "../header/DeadlineSortTask.hpp"
#include <iostream>
#include <algorithm>
using namespace std;


void TaskDisplay::displayByPriority(vector<Task> &taskList) const{
    PrioritySortTask taskpriority;
    taskpriority.sortbypriority(taskList);
    for (int i = 0; i < taskList.size(); i++){
        cout << "Name: " << taskList.at(i).getName() << endl;
        cout << "Priority: " << taskList.at(i).getPriority() << endl;
        cout << "Deadline: " <<taskList.at(i).getDeadline() << endl;
        cout << "Description: " << taskList.at(i).getDescription() << endl;
        cout << "Duration: " << taskList.at(i).getDuration() << endl;
        cout << "Label: " << taskList.at(i).getLabel() << endl;
        cout << "Is completed: " << taskList.at(i).getCompleted() << endl;
        cout << endl;
    }


}
void TaskDisplay::displayByDeadline(vector<Task> &taskList) const{
    DeadlineSortTask taskdeadline;
    taskdeadline.DeadlineSort(taskList);
    for (int i = 0; i < taskList.size(); i++){
        cout << "Name: " << taskList.at(i).getName() << endl;
        cout << "Priority: " << taskList.at(i).getPriority() << endl;
        cout << "Deadline: " <<taskList.at(i).getDeadline() << endl;
        cout << "Description: " << taskList.at(i).getDescription() << endl;
        cout << "Duration: " << taskList.at(i).getDuration() << endl;
        cout << "Label: " << taskList.at(i).getLabel() << endl;
        cout << "Is completed: " << taskList.at(i).getCompleted() << endl;
        cout << endl;
    }


}
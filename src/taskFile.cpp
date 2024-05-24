#include "taskFile.hpp"

void taskFile::setFileName(string name) {
    fileName = name;
}

void taskFile::writeFile(vector<Task>& tasks) {
    ofstream myFile (fileName);
    if (myFile.is_open()) {
        for (int i = 0; i < tasks.size(); i++) {
            myFile << tasks.at(i).getName() << "\n";
            myFile << tasks.at(i).getLabel() << "\n";
            myFile << tasks.at(i).getDescription() << "\n";
            myFile << tasks.at(i).getPriority() << "\n";
            myFile << tasks.at(i).getDuration() << "\n";
            myFile << tasks.at(i).getCompleted() << "\n";
            myFile << tasks.at(i).getDeadline() << "\n";
            myFile << "\n"; //separating each task in the .txt file
        }
        myFile.close();
    } else {
        cout << "Unable to open file.";
    }
}

void taskFile::readFile(vector<Task>& tasks) {
    string line;
    int priority;
    double duration;
    bool completed;
    Task newTask;
    int i = 0;
    int j = 0;
    ifstream myFile (fileName);
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            if (line.empty()) {
                tasks.at(i) = newTask;
                i++;
                j = 0;
            } else {
                switch (j) {
                    case 0:
                        newTask.setName(line);
                        break;
                    case 1:
                        newTask.setLabel(line);
                        break;
                    case 2:
                        newTask.setDescription(line);
                        break;
                    case 3:
                        priority = stoi(line);
                        newTask.setPriority(priority);
                        break;
                    case 4:
                        duration = stod(line);
                        newTask.setDuration(duration);
                        break;
                    case 5:
                        if (line == "true") {
                            newTask.setCompleted(true);
                        } else {
                            newTask.setCompleted(false);
                        }
                        break;
                    case 6: 
                        newTask.setDeadline(line);
                }
                j++;    
            }
        }
        myFile.close();
    }
}
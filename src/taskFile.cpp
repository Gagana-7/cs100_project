#include "../header/taskFile.hpp"

void taskFile::setFileName(string name) {
    fileName = name;
}

void taskFile::writeFile(const vector<Task>& tasks) {
    ofstream myFile (fileName);
    if (myFile.is_open()) {
        for (int i = 0; i < tasks.size(); i++) {
            myFile << tasks.at(i).getName() << endl;
            myFile << tasks.at(i).getPriority() << endl;
            myFile << tasks.at(i).getDeadline() << endl;
            myFile << tasks.at(i).getDescription() << endl;
            myFile << tasks.at(i).getDuration() << endl;
            myFile << tasks.at(i).getLabel() << endl;
            myFile << tasks.at(i).getCompleted() << endl;
            
            myFile << endl; //separating each task in the .txt file
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
                tasks.push_back(newTask);
                i++;
                j = 0;
            } else {
                switch (j) {
                    case 0:
                        newTask.setName(line);
                        break;
                    case 1:
                        priority = stoi(line);
                        newTask.setPriority(priority);
                        break;

                    case 2:
                        newTask.setDeadline(line);

                    case 3:
                        newTask.setDescription(line);
                        break;
                    case 4:
                        duration = stod(line);
                        newTask.setDuration(duration);
                        break;
                    case 5:
                        newTask.setLabel(line);
                        break;
                    case 6: 
                        if (line == "true") {
                            newTask.setCompleted(true);
                        } else {
                            newTask.setCompleted(false);
                        }
                        break;
                }
                j++;    
            }
        }
        myFile.close();
    }
}
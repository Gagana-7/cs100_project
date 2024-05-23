
# RANGBOT
 
 Authors: Arnav Subramanian, Nikhil Rao, Roman Javadyan, Gagana Warusawithana
Authors: <[Arnav Subramanian](https://github.com/asubr014)>, <[Nikhil Rao](https://github.com/nrao017)> ,<[Roman Javadyan](https://github.com/rjava005)>, <[Gagana Warusawithana](https://github.com/gwaru001)> 

## Description
 > * Importance

  > This project is interesting to us because a task manager is extremely important and useful in daily life. The task manager can be used to make sure notes and reminders are up to date for any assignments that may need to be completed through the quarter, semester, or even year. In this way we will be able to stay on track and finish any and all assignments while priding ourselves with great time managements skills to allow us to balance our quality of life. In this way we are also able to stay on track with time and work according to a clock which allows us to be more efficient in anything that we intend to accomplish, school or not. 


 > * Technology/tools/languages

  > In order to complete these assingments, we as a team are going to use github in order to stay up to date with our project and allow us to collaborate efficiently as group. We will also be using visual studios code in order to code our project efficiently. We will predomininantly be using C++ and Cmake in our code to start off however we could be adding other features which could require us to use other languages as well such as HTML or python. We will also have a database to store tasks. Finally, we will also be using the terminal in order to keep our code up to date with the whole team by pushing and pulling and changes that we have made to github in order to allow other team members to see progress as well. Finally, we will merge the files together to create our final project.


 > * Input/Output

> In order to create the task, the input would be the task the user is trying to complete and the output would be the task being sucessfully created. The inputs would also be the dates and times of the tasks, and what priority they hold for the user while the output would be setting the tasks in order based on their priority and time. 
> In order to remove or delete a task, the user would input the completion of the task and the output would be the removal of the task from the task board.
> In order to see the tasks need to be completed the user would input a command to see the task board and the output would be a notifications to the user informing them of their upcoming tasks, and a interface showcasing the tasks.
> In order to sort a task based on priority a user will indicate how they want the tasks sorted and the ouput would be the way the user chose to sort the tasks.


 > * Features

  > The project features such as storing and removing the tasks using the task manager and various commands. It will allow the user to set the tasks in a priority that the user chooses such as time, importance, etc. The user will be able to see all of the tasks which need to be completed in a display form as either a board view or notification system. The task will be formatted with the utmost importance given based on the user priority preference and chronoligical ordering of the tasks. Users will be able to input the name of the task, the level of prioirty, and due date of the task before officially creating the task.


 > ## Phase II

## User Interface Specification


### Navigation Diagram
<img width="856" alt="Screen Shot 2024-05-03 at 12 16 18 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/124764989/beacd7c0-ee09-45f2-a05e-f9573c31aefa">

This is the navigation diagram that we envision. To start off, we have the main display where we introduce our Rangbot task management system. From here, we give the user three options where they can either create a new task, delete a task, display all of their current tasks at once, edit tasks, or quit the system. From the create task, we are able to go back to main display after creating the task to ensure the user is able to give another command after creating the task. From diplay, we are able to to navigate to two different sorting options, priority sort or deadline sort. In this way we are able to sort the tasks based on the user's preference. After displaying the tasks we also once again allow the user to navigate back to the main display to look for further options. Through the edit task system we allow the user to edit any task that they previously made a mistake on or if a date has been changed. Again, from the edit task bar we allow the user to go straight back to the main display. From the delete task section, it is the same in that the user is able to delete a certain task then go back to the main display. Finally, we have the quit function which terminates the program and saves whatever tasks need to be saved. We are still figuring out the display of the quit program but for now we might simply terminate the program and see where to go from there. 


### Screen Layouts

<img width="687" alt="Screenshot 2024-05-03 at 12 51 39 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/3ea0cd85-9c78-424d-8919-ca14d9877164">
<img width="696" alt="Screenshot 2024-05-03 at 12 52 25 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/a27be46d-ee24-4c1e-aa12-c14cc98a866f">
<img width="746" alt="Screenshot 2024-05-05 at 11 26 43 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/d3b5da52-918a-4afc-93ba-b4df89597f53">

For the screen layout we decided to create different displays based on the section of the program; each display is under the title 
---nameofdisplay--. As of now we assume that the words will be formed with a proper background of our choosing. As of now the layout of our program is undecided but will most likely follow the idea of text on top of a background that is engaging and user friendly. Display task starts of by asking the user to choose a particular sorting method, deadline or priority. Then the tasks are displayed in the user that the order chooses. The create task display asks the user to input information such as title, deadline, priority, and description (of the task if need). The delete task option simply asks the user for the name of the task meant to be deleted and deletes the task automatically once the name is entered. Finally, the quit function ouputs a message reminding the to complete their tasks. As of now the quit function can be left, but as a group we do want to change it to something more enticing which we will figure out through the proccess. 

## Class Diagram (UML)

> ![image](https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/e4c171d8-ac16-4e2e-bd9c-6bb15633ce72)

Below is the description for all the functions of the UML diagram we start off with the task class which is the biggest class with most of the variables under. From here, all the other functions such as sort, display, edit, are children of the task class and inherit the function from the parent class as well. In each of these children classes we will override the parent task class function definitions as we see fit, however as of now we are not sure which functions will need the override and which ones would not. 

> Description

> Class Task : parent class of the other classes that handles the task scheduler.
> 
> Private:
> * Name : a string variable that stores the name of the task.
> * Priority : an int variable that stores the importance level of a task, ranked from 1-5.
> * Deadline : a time_t variable, from the ctime library, that stores the due date of the task.
> * Description : a string type variable that stores an explanation of the task.
> * Label : a string type variable that allows for the classification of the task into a category.
> * Duration : a time_t variable, from the ctime library, that stores how long the task will take before being completed.
>   
> Public:
> * getName() : a string fuction that returns the name of a task.
> * setName(string) : a void fuction that lets the user name a task.
> * getPriority() : an int function that returns the priority of a task.
> * setPriority(int) : a void function that gives a task a priority level.
> * getLabel() : a string function that returns the classification of a task.
> * setLabel(string) : a void function that creates a classification for a task.
> * getDeadline() : a time_t function that returns the due date of a task.
> * setDeadline(time_t) : a void function that creates a deadline for a task.
> * getDescription() : a string function that returns the description of a task.
> * setDescription(string) : a void function that creates a description for a task.
> * getDuration() : a time_t function that returns the length it takes to do a task.
> * setDuration(time_t) : a void function that creates the duration of a task.
> * Vector \<string\> vector : a vector initalizer with a string type to store tasks.

> Class SubTask : a class that inherits from Task class, that allows for task lists that can hold smaller tasks.
> 
> Public:
> * createListTasks() : a vector with string type, that acts as a task but being a vector so that it can hold other tasks.

> Class Edit_Task : a class that inherits from Task class, that helps with creating, deleting, and editing parts of the task. It has the ability to keep calling itself to keep editing a task.
> 
> Public:
> * setTask(Name, Priority, Deadline, Description, Duration, Label) : a void function that creates the task with all the inputs from the user.
> * deleteTask(Name) : a void function that takes the Name of a task and removing it from the vector.
> * editName() : a void function that renames the task.
> * editPriority() : a void function that changes the priority level of the task.
> * editDeadline() : a void function that changes the due date of the task.
> * editDescription() : a void function that changes the description of the task.
> * editLabel() : a void function that changes the classification of the task.
> * editDuration() : a void function that changes how long a task will take to complete.

> Class Sort_Task : a class that inherits from Task class, that sorts the tasks in whatever order the user chooses so that it can be displayed.
> Public:
> * sortDeadline() : a void function that sorts the tasks in the vector according to how close their due date is.
> * sortPriority() : a void function that sorts the tasks in the vector accoridng to their importance level.

> Class Display_Task : a class that inherits from Sort_Task class, that uses the sorts from it to display the tasks in order requested by the user.
> 
> Public:
> * displayDeadline() : a void function that prints the tasks in the order of their due dates.
> * displayPriority() : a void function that prints the tasks in the order of their importance.
 
 > ## Phase III

 Updated Class UML Diagram:
 
>  Single Responsibility Principle: For our first update to the SOLID principles in the UML diagram we seperate the EDIT task class into Create, Delete and Edit Task classes. In this way we are shifting responsibilites so that each class is only responsble for one aspect of the task manager program. This helps us format our code and determine which part of our code needs to be fixed more efficiently.
         > create task helps to only create the task and create the constructor
         > delete taks helps to only delete tht tasks and create the destructor 

> Single Responsibility Principle: We also created a fileTask class to write and save our files (tasks) more efficiently in one space. In this way we are shifting the entirely of the file applications into one of our programs. This allows us to keep our code clean and see the errors in our file applications all in one file rather than it being scattered among multiple different files that we have to rummage through to find.

> Open-Closed Principle: We created our Task.cpp class which is a class that will not be modified in anyway since it will just be used for function calls in other classes. If anything the class will only be extend for more functions that might need to be used throughout the code. In this way we can inherit most of these function from the class while the class will not be modified in any way which follows the open-closed principle.

> Interface Segregation Principle: In this case, since we are implmenting a driver class which only the user has to interfere with, we are able to segregate the interface the user has to deal with into one class while the programmers worry about back end issues. In this way clients will not be forced to interact with interfaces they they do not understand. Also, if there is any problem in the fucntionality from the clients and we will be able to more accurately see where the issues are in our code.


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 

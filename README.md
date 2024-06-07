## RANGBOT
 
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
>
>OLD UML
>>
> <img width="536" alt="Screenshot_2024-05-03_at_12 28 26_PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/65ed6716-da77-41f4-ace7-5854a7283055">
>
> 
> NEW UML!!!
>
> ![image](https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/8425f508-3126-4a36-acb0-88a44030ffa0)

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

> ![image](https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/8425f508-3126-4a36-acb0-88a44030ffa0)

> Description

> Class Task : parent class of the other classes that handles the task scheduler.
> 
> Private:
> * Name : a string variable that stores the name of the task.
> * Priority : an int variable that stores the importance level of a task, ranked from 1-5.
> * Deadline : a string variable, that stores the due date of the task.
> * Description : a string type variable that stores an explanation of the task.
> * Label : a string type variable that allows for the classification of the task into a category.
> * Duration : a double variable, that stores how long the task will take before being completed.
>   
> Public:
> * getName() : a string fuction that returns the name of a task.
> * setName(string) : a void fuction that lets the user name a task.
> * getPriority() : an int function that returns the priority of a task.
> * setPriority(int) : a void function that gives a task a priority level.
> * getLabel() : a string function that returns the classification of a task.
> * setLabel(string) : a void function that creates a classification for a task.
> * getDeadline() : a string function that returns the due date of a task.
> * setDeadline(string) : a void function that creates a deadline for a task.
> * getDescription() : a string function that returns the description of a task.
> * setDescription(string) : a void function that creates a description for a task.
> * getDuration() : a double function that returns the length it takes to do a task.
> * setDuration(double) : a void function that creates the duration of a task.
> * Vector \<Task\> vector : a vector initalizer with a string type to store tasks.

> Class SubTask : a class that inherits from Task class, that allows for task lists that can hold smaller tasks.
> 
> Public:
> * createListTasks() : a vector with string type, that acts as a task but being a vector so that it can hold other tasks.

> Class Edit_Task : a class that inherits from Task class, that helps with creating, deleting, and editing parts of the task. It has the ability to keep calling itself to keep editing a task.
> 
> Public:
> * editName() : a void function that renames the task.
> * editPriority() : a void function that changes the priority level of the task.
> * editDeadline() : a void function that changes the due date of the task.
> * editDescription() : a void function that changes the description of the task.
> * editLabel() : a void function that changes the classification of the task.
> * editDuration() : a void function that changes how long a task will take to complete.

> Class Create_Task :
>
> Public:
> * Task() : Initializes a default task object.
> * Task(string, int, string, string, string, string, double) : Initializes a task object with given parameters.

> Class Delete_Task :
>
> Public:
> * ~Task() : Destructor for Task class. 

> Class driverTask :
>
> public:
> * makeTask() : Prompts the user for a Task, which then calls the createTask class with the user inputed values.
> * deleteTask() : Deletes a user-specified task. The deleteTask class will be called. 
> * editTask() : Edits a task from a given user input, which will also ask for the changes to be made. 
> * displayTask() : Displays the list of all user-created tasks sorted by user specification. 

> Class Priority_Sort : a class that inherits from Task class, that sorts the tasks in whatever order the user chooses so that it can be displayed.
> Public:
> * sortPriority() : a void function that sorts the tasks in the vector according to their importance level.

> Class Deadline_Sort :
> Public:
> * sortDeadline() : a void function that sorts the tasks in the vector according to how close their due date is.

>

> Class Display_Task : a class that inherits from Sort_Task class, that uses the sorts from it to display the tasks in order requested by the user.
> 
> Public:
> * displayDeadline() : a void function that prints the tasks in the order of their due dates.
> * displayPriority() : a void function that prints the tasks in the order of their importance.

>  Single Responsibility Principle: For our first update to the SOLID principles in the UML diagram we seperate the EDIT task class into Create, Delete and Edit Task classes. In this way we are shifting responsibilites so that each class is only responsble for one aspect of the task manager program. This helps us format our code and determine which part of our code needs to be fixed more efficiently.
         > create task helps to only create the task and create the constructor
         > delete taks helps to only delete tht tasks and create the destructor

> Single Responsibility Principle: We seperated the two sorting task class into two different classes, Priority sort and Deadine sort. In this way we are ablke to simplify each sorting fucntion to one class which further simplifies the single responsibility principle.

> Single Responsibility Principle: We also created a fileTask class to write and save our files (tasks) more efficiently in one space. In this way we are shifting the entirely of the file applications into one of our programs. This allows us to keep our code clean and see the errors in our file applications all in one file rather than it being scattered among multiple different files that we have to rummage through to find.

> Open-Closed Principle: We created our Task.cpp class which is a class that will not be modified in anyway since it will just be used for function calls in other classes. If anything the class will only be extend for more functions that might need to be used throughout the code. In this way we can inherit most of these function from the class while the class will not be modified in any way which follows the open-closed principle.

> Interface Segregation Principle: In this case, since we are implmenting a driver class which only the user has to interfere with, we are able to segregate the interface the user has to deal with into one class while the programmers worry about back end issues. In this way clients will not be forced to interact with interfaces they they do not understand. Also, if there is any problem in the fucntionality from the clients and we will be able to more accurately see where the issues are in our code.


 
 > ## Final deliverable
>
>Class UML Diagram: Same as Phase III just added for reference
>
> ![image](https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/8425f508-3126-4a36-acb0-88a44030ffa0)
 >
 ## Screenshots
> 
> To start off we see that our system already has previous tasks that were created from the last time the program was ran. This shows that the tasks save when the program stops and load up when program starts.
>
> We first output the tasks based on their priority with the most important (1) on top down to the least important (5) on the bottom. This shows us that our display by priority function/option works.
> 
><img width="682" alt="Screenshot 2024-06-04 at 7 24 57 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/32cbe34e-58c0-4951-a797-075fe2e9b855">
>
> We then output the tasks with the most recent deadline on top and the furthest deadline on the bottom. This shows that our display by deadline function/option works.
> 
> <img width="420" alt="Screenshot 2024-06-04 at 7 25 36 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/ee0d5761-ca21-4d41-bbc3-42772416b320">
>
> After we display wiht both priority and deadline we then start to edit the function. Once we are in edit we mark the task "Do project" as completed. This changes the marked as completed section from 0 (false) to 1 (true) if it works. Once the mark as task button is clicked (through typing 7) the task is automatically marked. This shows us that our edit function/option works.
> 
> <img width="293" alt="Screenshot 2024-06-04 at 7 38 30 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/4b664957-d64f-402e-a892-3171aa539fa9">
>
> We then output by priority once again and see that "Do project" has been changed from 0 (false) to 1 (true). This shows that our mark as complete function/option works
>
<img width="363" alt="Screenshot 2024-06-04 at 7 38 58 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/b41acdee-a399-4f3a-84b9-f0e572165384">

> We then go to our delete Task option and see that there are two option: "delete by name" and "delete all marked completed". In this case we click "delete all marked completed" and we see that the task as been officially deleted. This shows us that our delete task function/option and edit task function/option works.
>
><img width="424" alt="Screenshot 2024-06-04 at 7 50 39 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/9f1a5407-91f8-4652-8869-6acd27717233">
>
> We then check to see if the task has been deleted and officially see that it has been deleted when we display by deadline. This shows us our display by deadline function/option works and shows delete when marked as completed function/option works.
>
> <img width="314" alt="Screenshot 2024-06-04 at 8 05 57 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/e32b9f00-0853-44ba-bca8-f56fe7793c9d">
>
> After shows that the marked as complete works, we then create a new Task called "Do chores" as seen below with a priority level 4. We get an output message saying that our task has been created. We then check display by deadline to see that the task has been officially created and it has. This shows that our create function/option works.
>
> <img width="428" alt="Screenshot 2024-06-04 at 8 10 52 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/f3f98673-dbec-45a3-abde-4d523ca35f36">
>
> We then edited the Do chores task one more time to bring the deadline up to June 7 to check if it would be moved when calling deadline sort. The task did move which shows that our edit function/option and our deadline sort function/option works.
>
> <img width="328" alt="Screenshot 2024-06-04 at 8 44 28 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/63f4c04c-0730-4c47-8b50-5eef90538172">
>
> We then use the save function to save our tasks manually so that they save if you close and reopen the program. If you accidently quit the program without saving the tasks automatically save so dont worry about forgetting to save. We then showed our save function/option working below by closing the application and reopening it while displaying tasks by deadline. As seen below the save function/option works. 
>
> <img width="328" alt="Screenshot 2024-06-04 at 8 44 28 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/679766b9-bc48-400c-a6e3-81b6f2beb828">
>
> We then decided to delete a task by name. We decide to delete the task "Do Chores" and output the other tasks based on priority level to see if the task is deleted. We can see below that the task has been deleted and has not been displayed below. This shows that our delete by name function/option and our display by priority function/option works.
>
> <img width="476" alt="Screenshot 2024-06-04 at 9 08 30 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/19862bd7-672f-46f7-86ee-43a7fd7d88a9">
>
> Finally, we decide to changed the whole play soccer task into something else in order to show the edit function/option completely works.
>
> <img width="352" alt="Screenshot 2024-06-04 at 9 15 10 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/caaca0dd-96ad-40cd-ba63-bca07ac6a776">
>
> <img width="334" alt="Screenshot 2024-06-04 at 9 15 39 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/37084035-6393-4fbc-b7e5-fdc189632912">
>
> After all the options have been edited we output to see that the task has been completely changed. This shows that our edit function completely works.
>
> <img width="352" alt="Screenshot 2024-06-04 at 9 15 10 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/47b6ed5b-f1c2-40ce-90b4-aa323a0133c2">
>
> Finally we close the program with the quit function/option and get a nice message. We then load up the program again to show the autosave function and see that the program still has the tasks saved. This shows that our quit function/option and our auto save function/option both work.
>
> <img width="1187" alt="Screenshot 2024-06-04 at 9 24 36 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/914fe021-1f4a-4b6c-aa2f-ac9804ec763b">
>
> We also added a subtask part of display and we have made it functioning below. As we see there are two tasks saved and when we run subtask and state the subtask we want to run (i.e school) we can see that only the tasks with label schools show up.
>
> <img width="306" alt="Screenshot 2024-06-06 at 8 13 51 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/066ff448-5c28-4117-9340-ad0639d74af1">
>
>These are all the input and output screenshots for our program.




 
 ## Installation/Usage
>
> In order to run this application the github repository must be cloned
        (command: git clone --recursive <https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005.git>). 
>
>In order to run the tests: After cloning the repository
> 
> Step 1: Run cmake.
> 
> Step 2: make
> 
> Step 3: ./bin/runAllTests
>
><img width="1078" alt="Screenshot 2024-06-06 at 8 15 47 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/5fed4ff6-71da-4588-8d99-3f94ee9c1e53">

>
> In order to run the program: 
>
>After the repo has been cloned use file path to open an integrated terminal in the src folder.After the intergrated terminal has been opened run the following command statements (Alternatively you can also manually download the folder and upload it to your own IDE and run it):
> 
>g++ main.cpp driverTask.cpp task.cpp editTask.cpp deleteTask.cpp createTask.cpp taskFile.cpp TaskDisplay.cpp PrioritysortTask.cpp DeadlineSortTask.cpp subtask.cpp
>
> ./a.out
>
>Then the application will begin to run
><img width="1097" alt="Screenshot 2024-06-06 at 8 19 51 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/6797d991-82ae-4a1b-80fb-3f68ad1f2407">



 ## Testing
>
> We tested this project by running cmake . make and ./bin/runAllTests. These commands allowed us to create an executable in the bin file which ran all of our 61 tests total. Below are the screenshots from every test that was ran through each file. All of them passed.
> 
><img width="963" alt="Screenshot 2024-06-05 at 12 12 40 AM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/bd4969dd-a16f-4083-8756-833fbc0a4569">
>
> <img width="477" alt="Screenshot 2024-06-05 at 12 13 05 AM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/bb8c88bd-75e0-44c2-bc10-037219b75903">
>
><img width="448" alt="Screenshot 2024-06-05 at 12 13 25 AM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/0413afa8-6e75-40ed-8371-c925d3e115f6">
>
><img width="480" alt="Screenshot 2024-06-05 at 12 13 40 AM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/716e5636-20b0-447b-b8aa-4ece47f020b2">
>
> We added subtask and its tests
>
><img width="491" alt="Screenshot 2024-06-06 at 8 03 06 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/a8b32343-b9fd-4e1a-a7cb-cf0acbe13242">
>
> We also checked memory allocation through valgrind and got no memory leaks with full memory allocation. For the tests and for the Program
>Run (valgrind --leak-check=full \<executable\>)
>
> Tests executable (run cmake. make, and ./bin/runAllTests):
>
><img width="617" alt="Screenshot 2024-06-06 at 8 03 14 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/f34546be-7c43-4ee2-997a-b8c847fef171">

>
>Program executable (run ./a.out):
>
><img width="489" alt="Screenshot 2024-06-06 at 8 08 44 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/126820928/a92d0e41-e5c4-4a5a-9b93-a4671e9f29f9">
>
> We ran these tests through gcov and lcov.
>
><img width="1418" alt="Screenshot 2024-06-06 at 10 20 53 PM" src="https://github.com/cs100/final-project-asubr014-nrao017-gwaru001-rjava005/assets/165944309/d4bf6812-45c3-41c0-bb3c-0e1ac290443f">
>
> The reason we don't have 100% of driverTask.cpp is because it is detecting the deafault cases in switch, which are needed in case the user inputs an option not present.







 

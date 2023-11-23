#include <iostream>
#include <vector>

using namespace std;

struct Task
 {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

void showMenu() {
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Quit\n";
}

void addTask(vector<Task>& tasks) {
    string taskDescription;
    cout << "Enter task: ";
    cin.ignore(); // Clear buffer
    getline(cin, taskDescription);

    tasks.emplace_back(taskDescription);
    cout << "Task added!\n";
}

void viewTasks(const vector<Task>& tasks) {
    if (!tasks.empty()) {
        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            cout << (tasks[i].completed ? "[Completed] " : "[Pending] ");
            cout << tasks[i].description << '\n';
        }
    } else {
        cout << "No tasks available.\n";
    }
}

void markTaskCompleted(vector<Task>& tasks) {
    viewTasks(tasks);

    if (!tasks.empty()) {
        int index;
        cout << "Enter the task number to mark as completed: ";
        cin >> index;

        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed!\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }
}

void removeTask(vector<Task>& tasks) {
    viewTasks(tasks);

    if (!tasks.empty()) {
        int index;
        cout << "Enter the task number to remove: ";
        cin >> index;

        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed!\n";
        } else {
            cout << "Invalid task number!\n";
        }
    }
}

int main() {
    vector<Task> tasks;

    int choice;
    while(true){
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice==1)
         {

                addTask(tasks);
          }
          else if(choice==2)
          {
                viewTasks(tasks);
           }
           else  if(choice==3)
            {
                markTaskCompleted(tasks);
              }
            else if(choice==4)
            {
                removeTask(tasks);
            }
            else if(choice==5)
            {
                cout << "Exiting program. Goodbye!\n";
              }
            else{
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
               }
        }



    return 0;
}

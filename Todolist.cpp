#include <bits/stdc++.h>
using namespace std;


struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back({description, false});
    }

    void viewTasks() {
        cout << "Tasks:\n";
        for (auto task : tasks) {
            cout << "- " << task.description;
            if (task.completed) {
                cout << " (completed)";
            }
            cout << "\n";
        }
    }

    void deleteTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "Task deleted.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }
};

int main() {
    ToDoList todo;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add task\n";
        cout << "2. View tasks\n";
        cout << "3. Delete task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore(); // Clear newline from previous input
                getline(std::cin, description);
                todo.addTask(description);
                break;
            }
            case 2:
                todo.viewTasks();
                break;
            case 3: {
                int index;
                cout << "Enter task index to delete: ";
                cin >> index;
                todo.deleteTask(index);
                break;
            }
            case 4:
                cout << "Exiting. Have a great day!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}

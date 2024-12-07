#include <iostream>
#include <string>
using namespace std;

struct Project {
    string projectName;
    string duration;
    Project* next;

    Project(string name, string projectDuration) : projectName(name), duration(projectDuration), next(nullptr) {}
};

struct Employee {
    string employeeName;
    string employeeID;
    Project* projectHead;
    Employee* next;

    Employee(string name, string id) : employeeName(name), employeeID(id), projectHead(nullptr), next(nullptr) {}
};

class ProjectManagement_2311104011 {
private:
    Employee* head;

public:
    ProjectManagement_2311104011() : head(nullptr) {}

    void addEmployee_2311104011(string name, string id) {
        Employee* newEmployee = new Employee(name, id);
        newEmployee->next = head;
        head = newEmployee;
    }

    void addProject_2311104011(string employeeID, string projectName, string duration) {
        Employee* current = head;
        while (current && current->employeeID != employeeID) {
            current = current->next;
        }
        if (current) {
            Project* newProject = new Project(projectName, duration);
            newProject->next = current->projectHead;
            current->projectHead = newProject;
        }
    }

    void deleteProject_2311104011(string employeeID, string projectName) {
        Employee* current = head;
        while (current && current->employeeID != employeeID) {
            current = current->next;
        }
        if (current) {
            Project* prev = nullptr;
            Project* currentProject = current->projectHead;
            while (currentProject && currentProject->projectName != projectName) {
                prev = currentProject;
                currentProject = currentProject->next;
            }
            if (currentProject) {
                if (prev) {
                    prev->next = currentProject->next;
                } else {
                    current->projectHead = currentProject->next;
                }
                delete currentProject;
            }
        }
    }

    void deleteEmployee_2311104011(string employeeID) {
        Employee* prev = nullptr;
        Employee* current = head;
        while (current && current->employeeID != employeeID) {
            prev = current;
            current = current->next;
        }
        if (current) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            Project* project = current->projectHead;
            while (project) {
                Project* temp = project;
                project = project->next;
                delete temp;
            }
            delete current;
        }
    }

    void displayData_2311104011() {
        Employee* current = head;
        while (current) {
            cout << current->employeeName << " (ID: " << current->employeeID << ")\n";
            Project* project = current->projectHead;
            while (project) {
                cout << "  - " << project->projectName << ": " << project->duration << "\n";
                project = project->next;
            }
            current = current->next;
        }
    }
};

int main() {
    ProjectManagement_2311104011 management;

    management.addEmployee_2311104011("Andi", "P001");
    management.addEmployee_2311104011("Budi", "P002");
    management.addEmployee_2311104011("Citra", "P003");

    management.addProject_2311104011("P001", "Aplikasi Mobile", "12 Bulan");
    management.addProject_2311104011("P002", "Sistem Akuntansi", "8 Bulan");
    management.addProject_2311104011("P003", "E-commerce", "10 Bulan");

    management.addProject_2311104011("P001", "Analisis Data", "6 Bulan");
    management.deleteProject_2311104011("P001", "Aplikasi Mobile");

    cout << "Data proyek dan karyawan:\n";
    management.displayData_2311104011();

    return 0;
}

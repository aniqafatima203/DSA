#include <iostream>
#include <string>

using namespace std;

// Node structure for linked list
struct Node {
    string note;
    Node* next;
};

// Class to represent the Notepad
class Notepad {
private:
    Node* head;

public:
   // Notepad() : head(nullptr) {}

    // Function to add a note
    void addNote(const string& noteContent) {
        Node* newNode = new Node();
        newNode->note = noteContent;
        newNode->next = head; // Insert at the beginning
        head = newNode;
        cout << "Note added successfully!" << endl;
    }

    // Function to display all notes
    void displayNotes() {
        if (head == nullptr) {
            cout << "No notes available." << endl;
            return;
        }

        Node* current = head;
        int index = 1;
        while (current != nullptr) {
            cout << index++ << ". " << current->note << endl;
            current = current->next;
        }
    }

    // Function to delete a note by index
    void deleteNote(int index) {
        if (head == nullptr) {
            cout << "No notes available to delete." << endl;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        if (index == 1) {
            head = current->next; // Move head to next node
            delete current; // Free memory
            cout << "Note deleted successfully!" << endl;
            return;
        }

        for (int i = 1; current != nullptr && i < index; i++) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Note not found!" << endl;
            return;
        }

        previous->next = current->next; // Unlink the node
        delete current; // Free memory
        cout << "Note deleted successfully!" << endl;
    }

    // Destructor to free memory
    ~Notepad() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

// Main function to interact with the Notepad
int main() {
    Notepad notepad;
    int choice;
    string noteContent;
    int noteIndex;

    do {
        cout << "\n--- Notepad Menu ---\n";
        cout << "1. Add Note\n";
        cout << "2. Display Notes\n";
        cout << "3. Delete Note\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after the choice

        switch (choice) {
            case 1:
                cout << "Enter your note: ";
                getline(cin, noteContent);
                notepad.addNote(noteContent);
                break;
            case 2:
                notepad.displayNotes();
                break;
            case 3:
                cout << "Enter the note index to delete: ";
                cin >> noteIndex;
                notepad.deleteNote(noteIndex);
                break;
            case 4:
                cout << "Exiting Notepad. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
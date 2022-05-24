#include <string>
#include <iostream>
#include <vector>

using namespace std;

int iterations = 0;

struct Person
{
    string passions, skills, intrests, effort;

    struct Person* next = NULL;

    Person(string passion, string skill, string intrest, string work) {
        passions = passion;
        skills = skill;
        intrests = intrest;
        effort = work;
    }
};

struct Person* head;

bool Confirmation(string comment) {
    string x;
    while (true) {
        cout << comment;
        cin >> x;
        if (x.at(0) == 'y' || x.at(0) == 'Y') {
            return true;
        }
        else if (x.at(0) == 'n' || x.at(0) == 'N') {
            return false;
        }
    }
}

void DatabaseEnter(int i) {
    string passions, skills, intrests;
    string effort;
    cout << "Enter your hobbies, skills, work, and intrests" << endl;
    cout << endl << "hobbies:";
    cin >> passions;
    cout << endl << "skills:";
    cin >> skills;
    cout << endl << "intrest:";
    cin >> intrests;
    cout << endl << "work:";
    cin >> effort;
    cout << endl;

    Person* temp = new Person(passions, skills, intrests, effort);

    if (i == 0) {
        head = temp;
        iterations++;
    }
    else {
        struct Person* temp2 = head;
        for (int i = 0; i < i; i++) {
            temp2 = temp2->next;
        }
        //linked list
        temp2->next = temp;
        temp->next = NULL;
        cout << "new Profile added" << endl;
        iterations++;
    }
}






int main() {
    bool runningProgram = true;
    while (runningProgram) {
        if (Confirmation("Are you adding a profile? y/n :")) {
            DatabaseEnter(iterations);
        }
        else {
            cout << endl << "find matches" << endl;
            string passions, skills, intrests;
            string effort;
            cout << "Enter your hobbies, skills, work, and intrests" << endl;
            cout << endl << "hobbies:";
            cin >> passions;
            cout << endl << "skills:";
            cin >> skills;
            cout << endl << "intrest:";
            cin >> intrests;
            cout << endl << "work:" << endl;
            cin >> effort;
            cout << "Matchmaking..." << endl;

            Person* temp = head;
            int playerNum = 1;
            if (head == NULL)
                cout << "you need at least 1 player in the list" << endl;
            if (head != NULL) {
                if (temp->passions == passions || temp->skills == skills || temp->intrests == intrests || temp->effort == effort) {
                    cout << "match found      player: " << playerNum;
                    return 0;
                }

            }
            while (temp->next != NULL) {
                int match;
                if (temp->passions == passions || temp->skills == skills || temp->intrests == intrests || temp->effort == effort) {
                    cout << "match found      player: " << playerNum;
                    return 0;
                }
                temp->next = temp;
                playerNum++;
            }
            cout << "no matches" << endl;
        }
    }
    return 0;
}
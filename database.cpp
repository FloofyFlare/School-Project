#include <string>
#include <iostream>
#include <vector>

using namespace std;

int iterations = 0;

struct Person
{
    string passions, skills, intrests;
    int effort;
    struct Person* next;

    Person(string passion, string skill, string intrest, int work) {
        passions = passion;
        skills = skill;
        intrests = intrest;
        effort = work;
    }
};

struct Person* head;
void DatabaseEnter(int i) {
        string passions, skills, intrests;
        int effort;
        cout << "Enter your hobbies, skills, work, and intrests" << endl;
        cout << endl << "hobbies:";
        getline(cin, passions);
        cout << endl << "skills:";
        getline(cin, skills);
        cout << endl << "intrest:";
        getline(cin, intrests);
        cout << endl << "work:";
        cin >> effort;

        Person* temp = new Person(passions, skills, intrests, effort);

        if (i == 0) {
            head = temp;
            temp->next = NULL;
            iterations++;
        }
        else {
            struct Person* temp2 = head;
            for (int i = 0; i < i - 1; i++) {
                temp2 = temp2->next;
            }
            //linked list
            temp2->next = temp2;
            iterations++;
        }
    }



bool Confirmation(string comment){
    string x;
        while(true){
            cout << comment;
            getline(cin, x);
            if (x.at(0) == 'y'){
                return true;
            }
            else if (x.at(0) == 'n'){
                return false;
            }   
        }
}

int main() {
    bool runningProgram = true;
    while (runningProgram) {
        if(Confirmation("Are you adding a profile? y/n")){
            DatabaseEnter(iterations);
        }
        else{
            cout << "describe attributes for matchmaking" << endl;

            cout << "Matchmaking...";
        }
    }
    return 0;
}

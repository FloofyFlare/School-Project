#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Person
{
    string passions, skills, intrests;
    int effort;
    struct Person *next;

    Person(string passion, string skill,string intrest, int work){
        passions = passion;
        skills = skill;
        intrests = intrest;
        effort = work;
    }

     // returns a list of possible team members for this Person struct
     vector<Person> findTeam(Person person[], int length){
        vector<Person> team;
        for (int i = 0; i < length; i++){
            if (person[i].effort == effort){
                team.push_back(person[i]); 
            }

        }
        return team;
    }
};

struct Person* head;

void DatabaseEnter(int i) {
    string passions, skills, intrests;
    int effort;
    printf("Enter your hobbies, skills, work, and intrests");
    cout << endl << "hobbies:";
    getline(cin,passions);
    cout << endl << "skills:";
    getline(cin,skills);
    cout << endl << "intrest:";
    getline(cin,intrests);
    cout << endl << "work:";
    getline(cin,effort);   
    
    Person* temp = new Person*(passions, skills, intrests, effort);
    
    if (i == 0)
    head = temp;
    else{
       struct Person* temp2 = head;
     for(int i = 0; i < i - 1; i++){   
       temp2 = temp2->next;
    }
        //linked list
     temp2->next =    
    }
}



int main() { 
    bool keep = true;
    int i = 0;
    while(keep){
    DatabaseEnter(i);
       i++;
    }
}

#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Person
{
    string passions, skills, intrests;
    int effort;

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
    }
};
 
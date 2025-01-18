/*
insertion
        at start{head null,prev node ho}
        at last{head null, prev node}
        afterAge{head null,prev node }
updation
        update via key{head null, node ho, not found}
deletion
        delete via key(head null, node ho, not found)
*/
#include <iostream>
#include <stdexcept>
using namespace std;

class person
{
public:
        string name;
        int age;
        person *next;
        person(string name, int age) : name(name), age(age), next(NULL) {};
};
class singlyLkdLst
{
private:
        person *head;

public:
        singlyLkdLst() : head(NULL) {};
        // insertion
        bool insertAtStart(string name, int age)
        {
                person *temp = new person(name, age);
                if (head == NULL)
                {
                        head = temp;
                        return 1;
                }
                else
                {
                        temp->next = head;
                        head = temp;
                        return 1;
                }
        }
        bool insertAtLast(string name, int age)
        {
                person *temp = new person(name, age);
                if (head == NULL)
                {
                        head = temp;
                        return 1;
                }
                else
                {
                        person *crnt = head;
                        while (crnt->next != NULL)
                        {
                                crnt = crnt->next;
                        }
                        crnt->next = temp;
                        return 1;
                }
        }
        bool insertAfter(string name, int age, int ageAfter)
        {
                person *temp = new person(name, age);
                if (head == NULL)
                {
                        throw invalid_argument("No person exist");
                }
                else
                {
                        person *crnt = head;
                        while (crnt != NULL)
                        {
                                if (crnt->age == ageAfter)
                                {
                                        break;
                                }
                                else
                                {
                                        crnt = crnt->next;
                                }
                        }
                        if (crnt == NULL)
                        {
                                throw invalid_argument("given age person does not exist");
                        }
                        person *tmp2 = crnt->next;
                       crnt->next = temp;
                        temp->next = tmp2;
                        return 1;
                }
        }

        // updation
        bool updateViaAge(int age, int nwAge, string nName)
        {
                if (head == NULL)
                {
                        throw invalid_argument("Give age's no perosn Exist");
                        return 0;
                }
                person *crnt = head;
                while (crnt != NULL)
                {
                        if (crnt->age == age)
                        {
                                break;
                        }
                        crnt = crnt->next;
                }
                if (crnt == NULL)
                {
                        throw invalid_argument("Give age's no perosn Exist");
                        return 0;
                }
                crnt->name = nName;
                crnt->age = nwAge;
                return 1;
        }
        // deletion
        bool deleteViaAge(int age)
        {
                if (head == NULL)
                {
                        throw invalid_argument("Person Not found");
                        return 0;
                }
                person *crnt = head;
                person *prev = NULL;
                while (crnt != NULL)
                {
                        if (crnt->age == age)
                        {
                                break;
                        }
                        prev = crnt;
                        crnt = crnt->next;
                }
                if (crnt == NULL)
                {
                        throw invalid_argument("person Not Found");
                        return 0;
                }
                if (prev == NULL)
                {
                        head = crnt->next;
                }
                else
                {
                        prev->next = crnt->next;
                }
                delete crnt;
                return 0;
        }
        // display
        void display()
        {
                if (head == NULL)
                {
                        cout << "No person exist";
                        return;
                }
                person *crnt = head;
                while (crnt)
                {
                        cout << crnt->name << " age is " << crnt->age << endl;
                        crnt = crnt->next;
                }
        }

        ~singlyLkdLst()
        {
                person *crnt = head;
                while (crnt != NULL)
                {
                        person *next = crnt->next;
                        delete crnt;
                        crnt = next;
                }
                cout << "destructor called";
        }
};
int main()
{
        try
        {

                singlyLkdLst pg1;
                cout << pg1.insertAtStart("Sushil kandu", 21);
                cout << pg1.insertAtLast("Sushil", 31);
                cout << pg1.insertAfter("Sushil Maddheshiya", 41, 31);
                cout << pg1.insertAfter("Sushil Maddheshiya", 41, 31);

                cout << "befor updation";
                pg1.display();

                cout << pg1.updateViaAge(31, 34, "Vishnu Maddheshiya");
                cout << pg1.insertAfter("Sushil Maddheshiya", 45, 41);
                cout << "after updation";
                // clalling display method
                pg1.display();

                pg1.deleteViaAge(45);
                cout << "after deleteion";
                // after deletion
                pg1.display();
        }
        catch (const invalid_argument &e)
        {
                cout << "Invalid Argument ";
                cout << e.what();
        }
        catch (const exception &e)
        {
                cout << e.what();
        }
        return 0;
}
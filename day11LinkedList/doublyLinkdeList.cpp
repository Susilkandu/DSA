/*
insertion
    insertAtStart(head Null ho, nodes exist)
    insertAtEnd(head Null, nodes exist)
    insertAfter(head Null, nodes exist, not found)
updation
    updateViaKey(head Null, node exist , found, not found)
deletion
    deleteViaKey(head Null , nodes exist , found,not found)
*/
#include <iostream>
#include <stdexcept>
using namespace std;
// node structure
class Node
{
public:
    string song;
    Node *prev, *next;
    Node(string songName) : song(songName), prev(NULL), next(NULL) {};
};
class playList
{
private:
    Node *head, *end;

public:
    playList() : head(NULL), end(NULL) {};
    // insertion
    bool insertAtStart(string songName)
    {
        Node *tmp = new Node(songName);
        if (head == NULL)
        {
            head = tmp;
            end = head;
            return true;
        }
        else
        {
            head->prev = tmp;
            tmp->next = head;
            head = tmp;
            return true;
        }
    }
    bool insertAtEnd(string songName)
    {
        Node *tmp = new Node(songName);
        if (head == NULL)
        {
            head = tmp;
            end = tmp;
            return true;
        }
        else
        {
            end->next = tmp;
            tmp->prev = end;
            end = tmp;
            return true;
        }
    }
    // updation
    bool updateViaKey(string prSongName, string newSongName)
    {
        if (head == NULL)
        {
            throw out_of_range("Playlist is empty");
        }
        else
        {
            Node *crnt = head;
            while (crnt)
            {
                if (crnt->song == prSongName)
                    break;
                crnt = crnt->next;
            }
            if (crnt == NULL)
            {
                cout << prSongName << " song does not exist" << endl;
                return false;
            }
            crnt->song = newSongName;
            return true;
        }
    }
    // deletion
    bool deleteViaKey(string songName)
    {
        if (head == NULL && end == NULL)
        {
            throw out_of_range("Playlist is \b Empty");
        }
        Node *crnt = head;
        Node *first, *second;
        // finding the keys
        while (crnt)
        {
            if (crnt->song == songName)
            {
                first = crnt->prev;
                second = crnt->next;
                break;
            }
            crnt = crnt->next;
        }
        //if song not found
        if (crnt == NULL)
        {
            cout << songName << " song does not exist" << endl;
            return false;
        }//if song found
        else
        {
            //  deleting song when single song exist
            if (first == NULL && second == NULL)
            {
                delete crnt;
                head = NULL;
                end = NULL;
                return true;
            } //if song is last but available song in previou of that
            else if (crnt->next == NULL)
            {
                delete crnt;
                first->next = NULL;
                end = first;
                return true;
            } //if song is first and it's next song is available
            else if (crnt->prev == NULL)
            {
                delete crnt;
                second->prev = NULL;
                head = second;
                return true;
            }
            //if song is in mid of two song
            else
            {
                delete crnt;
                first->next = second;
                second->prev = first;
                return true;
            }
        }
    }
    // display
    void display()
    {
        Node *crnt = head;
        while (crnt)
        {
            cout << crnt->song << endl;
            crnt = crnt->next;
        }
    }
    void rDisplay()
    {
        Node *crnt = end;
        while (crnt)
        {
            cout << crnt->song << endl;
            crnt = crnt->prev;
        }
    }
    ~playList()
    {
        Node *crnt = head;
        while (crnt)
        {
            Node *aage = crnt->next;
            delete crnt;
            crnt = aage;
        }
        cout << "Destructor called";
    }
};
int main()
{
    try
    {
        playList hindi;
        // hindi.insertAtStart("Om jay shiv omkara");
        // hindi.insertAtStart("Purn hanuman chalisha");
        // hindi.insertAtStart("Om jay jagadish hare");
        hindi.insertAtEnd("Jay Ambey Gaur maiya jay shyama gauri");
        hindi.display();
        cout << endl
             << "display in reverse order" << endl;
        hindi.rDisplay();
        // deleting a song
        hindi.deleteViaKey("Jay Ambey Gaur maiya jay shyama gauri");
        // after deletion display
        cout << "after deletion display" << endl;
        hindi.display();
        return 0;
    }
    catch (const out_of_range &e)
    {
        cerr << e.what() << endl;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
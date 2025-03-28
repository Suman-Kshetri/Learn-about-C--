#include <iostream>
using namespace std;

//// LIBRARY START
class Base
{
public:

    Base() { }

    virtual // Ensures to invoke actual object destructor
    ~Base() { }

    // An interface
    virtual void DisplayAction() = 0;
};

class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "Derived1 created" << endl;
    }

    ~Derived1()
    {
        cout << "Derived1 destroyed" << endl;
    }

    void DisplayAction()
    {
        cout << "Action from Derived1" << endl;
    }
};

class Derived2 : public Base
{
public:
    Derived2()
    {
        cout << "Derived2 created" << endl;
    }

    ~Derived2()
    {
        cout << "Derived2 destroyed" << endl;
    }

    void DisplayAction()
    {
        cout << "Action from Derived2" << endl;
    }
};

class User
{
    private:
    Base *pBase;
public:

    // Creates Drived1
    User() : pBase(nullptr)
    {
        // What if Derived2 is required? - Add an if-else ladder (see next sample)
        pBase = new Derived1();
    }

    ~User()
    {
        if( pBase )
        {
            delete pBase;
            pBase = nullptr;
        }
    }

    // Delegates to actual object
    void Action()
    {
        pBase->DisplayAction();
    }


};

int main()
{
    User *user = new User();
    user->Action();

    delete user;
}

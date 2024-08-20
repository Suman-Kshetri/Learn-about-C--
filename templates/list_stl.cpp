// wap to illustrate the use of list template to insert data into list and display them in sorted order
#include<iostream>
#include<list>
#include<cstring>

using namespace std;

int main()
{
    list <string> l;
    l.push_back("Ram");
    l.push_back("Hari");
    l.push_back("Krishna");
    l.push_back("Suman");
    l.push_back("Shiva");
    l.sort();
    while(!l.empty())
    {
        cout<<l.front()<<endl;
        l.pop_front();
    }
    return 0;
}
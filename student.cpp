#include<iostream>
using namespace std;

class student{
    public:
    char name[50];
    int age;
    bool gender;
};
int main(){
    student a[3];
    int i;
    for(i=0;i<3;i++)
    {
        cin>>a[i].name[50];
        cin>>a[i].age;
        cin>>a[i].gender;
    }
    return 0;
}
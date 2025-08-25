#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
    
        string name;
        int age;
        int id;
        
    public:
        
        Person()
        {
            
        }
        
        Person(string name , int age)
        {
            this->name = name;
            this->age = age;
        }
        
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor : public Person
{
    private:
        
        int Publications;
        static int ProfID;
    
    public:
        
        Professor() : Person()
        {
            id = ProfID;
            ProfID++;
        }
        
        Professor(string name , int age) : Person(name , age)
        {
            
        }
        
        void getdata()
        {
            cin >> name >> age >> Publications;
        }
        
        void putdata()
        {
            cout << name << " " << age << " " << Publications << " " << id << endl;
        }
};

class Student : public Person
{
    private:
        
      int marks[6];
      int SumMarks;
      static int StudID;
      
    public:
        
        Student() : Person()
        {
            id = StudID;
            StudID++;
            SumMarks = 0 ;
        }
        
        Student(string name , int age) : Person(name, age)
        {
            SumMarks = 0 ;
        }
        
        void getdata()
        {
            cin >> name >> age;
            
            for (int  i = 0 ; i < 6 ; i++)
            {
                cin >> marks[i];
                SumMarks += marks[i];
            }
            
        }
        
        void putdata()
        {
            cout << name << " " << age << " " << SumMarks << " " << id << endl;
        }
};

int Professor::ProfID = 1;
int Student::StudID = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}


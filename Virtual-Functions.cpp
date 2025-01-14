#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int age;
        virtual ~Person() = default; //// Default virtual destructor
        virtual void getdata(){}
        
        virtual void putdata(){}
};

class Student: public Person{
    private:
        static int cur_id;  // When we use static whenever the funtion is called then the value will remain same like global, but for this class
        // since same is needed for cur_id private is needed
    public:
        int marks[6];
        void getdata() override{
            cin >> name >> age;
            for(int i = 0;i<6;i++){
                cin >> marks[i];
            }
        }
    
        void putdata() override{
            int total=0;
            for(int i = 0;i<6;i++){
                total += marks[i];
            }
            cout << name << " " << age << " " << total << " " << ++cur_id << endl;
        }
};

class Professor : public Person{
    private:
        static int cur_id; // When we use static whenever the funtion is called then the value will remain same like global, but for this class
        // since same is needed for cur_id private is needed
    public: 
        int publications;
        void getdata() override{
            cin >> name >> age >> publications;
        }
        
        void putdata() override{
            cout << name << " " << age << " " << publications << " " << ++cur_id << endl;
        }
};

int Professor::cur_id=0,Student::cur_id=0;
// Can only initialise outside the function, so done here

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

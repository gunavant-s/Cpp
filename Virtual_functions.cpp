

#include <iostream>
#include <string>

using namespace std;

class Entity{
public:
    virtual string GetName(){ // Generates V table for the function such that if overwritten it will point to that function
        return "Entity";
    }
    
};

class Player : public Entity{
private:
    string m_Name;
public:
    Player(const string& name) 
        : m_Name(name) {}
        
    string GetName() override{
        return m_Name;
    }
};

void printName(Entity* entity){
    cout << entity -> GetName() << endl;
}

int main()
{
    Entity* e = new Entity();
    printName(e);

    Player* p = new Player("Player");
    printName(p);

    return 0;
}

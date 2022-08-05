#include<bits/stdc++.h>
using namespace std; 


class Person{
    private:
      char name[80];
      int age;

    public:
    
    Person(){
        strcpy(name,"noname");
        age = 0;
    }

    Person(char *name,int age){
        strcpy(this->name,name);
        this->age = age;
    }

    void print(){
        cout<<"Hi i am "<<name<<" and i am "<<age<<" years old";
    }

    void change(){
        strcpy(name,"chetan pathak");
        age = 30;
    }

};

int main()
{
    Person obj("chetan",20);
    
    fstream file;
    file.open("person.bin", ios::binary | ios::in | ios::out | ios::trunc);

    if(file.is_open()){
        file.write((char*) &obj, sizeof(Person));
        file.seekg(0);
        
        Person obj1;
        
        file.read((char*) &obj1, sizeof(Person));
        obj.change();
        obj.print();
        cout<<endl;
        obj1.print();
    }else{
        cout<<"error!";
    }

    file.close();
    return 0;
}   

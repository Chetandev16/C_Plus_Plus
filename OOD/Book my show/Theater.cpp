#include <bits/stdc++.h>
using namespace std;

class Theater
{
private:
    int id;
    string name;
    string location;
    int capacity;
    
    vector<show> shows;

    public:
    Theater(){
        
    }
    Theater(int id,string name,string location,int capacity){
        this->id = id;
        this->name = name;
        this->location = location;
        this->capacity = capacity;
        this->shows = {};
    }

    //getter setter

    int getId(){
        return id;
    }

    void setId(int id){
        this->id = id;
    }

    string getName(){
        return name;
    }

    void setName(string name){
        this->name = name;
    }

    string getLocation(){
        return location;
    }

    void setLocation(string location){
        this->location = location;
    }

    int getCapacity(){
        return capacity;
    }

    void setCapacity(int capacity){
        this->capacity = capacity;
    }
    

    vector<show> getShows(){
        return shows;
    }

    void setShows(vector<show> shows){
        this->shows = shows;
    }

};

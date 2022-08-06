#include<bits/stdc++.h>
#include "User.cpp"
#include "Ticket.cpp"
using namespace std;

class RegisteredUser: public User{
    private:
    vector<Ticket> bookingHistory; 

    public:
    RegisteredUser(int id,string name):User(id,name){
        this->bookingHistory = {};
    }
};
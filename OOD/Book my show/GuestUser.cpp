#include<bits/stdc++.h>
#include "User.cpp"
using namespace std;

class GuestUser : public User{
    public:
    GuestUser(int id,string name) : User(id,name){

    }
};
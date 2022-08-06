#include<bits/stdc++.h>
#include "show.cpp"
using namespace std;

class Ticket{
    private:
    int id;
    string ownerName;
    string bookingTime;
    int noOfSeats;
    
    show bookedShow;

    public:
    Ticket(int id,string ownerName, string bookingTime,int noOfSeats,show bookedShow){
        this->id = id;
        this->ownerName = ownerName;
        this->bookingTime = bookingTime;
        this->noOfSeats = noOfSeats;
        this->bookedShow = bookedShow;
    }

    string getOwnerName(){
        return ownerName;
    }

    void setOwnerName(string ownerName){
        this->ownerName = ownerName;
    }

    string getBookingTime(){
        return bookingTime;
    }

    void setBookingTime(string bookingTime){
        this->bookingTime = bookingTime;
    }

    show getBookedShow(){
        return bookedShow;
    }

    void setBookedShow(show bookedShow){
        this->bookedShow = bookedShow;
    }
};
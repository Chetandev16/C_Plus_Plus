#include <bits/stdc++.h>
#include "movie.cpp"
#include "Theater.cpp"
using namespace std;

class show
{
private:
    int id;
    string showtime;
    int availableeSeats;

    Movie movie;
    Theater theater;

public: 
    show(){
        
    }
    show(int id, string showTime, Movie movie, Theater theater)
    {
        this->id = id;
        this->showtime = showTime;
        this->movie = movie;
        this->theater = theater;
        this->availableeSeats = theater.getCapacity();
    }

    //getter setter

    int getId(){
        return id;
    }

    void setId(int id){
        this->id = id;
    }

    string getShowTime(){
        return showtime;
    }

    void setShowTime(string showtime){
        this->showtime = showtime;
    }

    Movie getMovie(){
        return movie;
    }

    void setMovie(Movie movie){
        this->movie = movie;
    }

    Theater getTheater(){
        return theater;
    }

    void setTheater(Theater theater){
        this->theater = theater;
    }
};
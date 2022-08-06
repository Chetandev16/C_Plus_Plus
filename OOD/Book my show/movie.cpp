#include <bits/stdc++.h>
#include "Genre.cpp"
#include "Language.cpp"
using namespace std;

class Movie
{
private:
    string name;
    float ratings;
    Genre genre;
    Lang language;

public:
    Movie(){
        
    }
    Movie(string name, Lang language, Genre genre)
    {
        this->name = name;
        this->language = language;
        this->genre = genre;
        this->ratings = 0.0;
    }

    //getter setter

    string getName(){
        return name;
    }

    void setName(string name){
        this->name = name;
    }

    float getRatings(){
        return ratings;
    }

    void setRatings(float ratings){
        this->ratings = ratings;
    }

    Lang getLanghuage(){
        return language;
    }

    void setLanguage(Lang language){
        this->language = language;
    }

    Genre getGenre(){
        return genre;
    }

    void setGenre(Genre genre){
        this->genre = genre;
    }

};

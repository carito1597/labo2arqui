#pragma once
#include <string>
using namespace std;

class Reference{
    protected:
        string lastName;
        string firstName;
        int year;
        string title;
        string editionPlace;
        string editor;
    public:
        Reference(string _lastName, string _firstName,string _title, string _edPlace, string _editor,int _year){
            firstName = _firstName;
            lastName = _lastName;
            year = _year;
            title = _title;
            editionPlace = _edPlace;
            editor = _editor;
        }

        virtual void print(){
            cout<<lastName<<", "<<firstName<<" ("<<year<<").";
        }
};
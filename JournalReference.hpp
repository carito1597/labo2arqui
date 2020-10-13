class JournalReference: public Reference{
    private:
        int journalYear;
        int number;
    public:
         JournalReference(string _lastName, string _firstName,string _title,  string _edPlace, string _editor,
                       int _year, int _yearJournal, int _number)
                       :Reference(_lastName,   _firstName,_title, 
                                   _edPlace,_editor,_year){

                journalYear = _yearJournal;
                number = _number;
                
            }
        void print(){
            Reference::print();
            cout<<" \""<<title<<"\". En: "<<editionPlace<<", "<<editor<<"Anio "<<journalYear<<", No "<<number<<", "<<editionPlace<<endl;
        }

};
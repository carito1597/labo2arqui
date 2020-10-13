class BookReference: public Reference{
    public:
        BookReference(string _firstName, string _lastName,string _title, string _edPlace, string _editor,int _year):
            Reference(_firstName,_lastName,_title, _edPlace,_editor,_year){
            }
        void print(){
            Reference::print();
            cout<<" "<<title<<". "<<editionPlace<<": "<<editor<<endl;
        }

};
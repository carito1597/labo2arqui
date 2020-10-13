class ConferenceReference: public Reference{

    public:
            ConferenceReference(string _lastName, string _firstName,string _title, string _edPlace, string _editor,int _year):
            Reference(_lastName,_firstName,_title, _edPlace,_editor,_year){
            }

        void print(){
            Reference::print();
            cout<<" "<<title<<". En: "<<editor<<", "<<editionPlace<<endl;
        }

};
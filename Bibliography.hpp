#include "Reference.hpp"

class Bibliography{
    private:
        int capacity;
        int size;
        Reference** refs;
    public:
        Bibliography(int _capacity){
            capacity = _capacity;
            size = 0;
            refs = new Reference*[capacity];
        }
        void add(Reference* refence){
            if(size<capacity){
                refs[size] = refence;
                size++;
            }
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<"["<<i+1<<"]";
                refs[i]->print();
            }
        }
};
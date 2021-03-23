#include <bits/stdc++.h>
using namespace std;

class SingletonClass{
private:
    static SingletonClass* instance;

    //private constructor: so that the object can't be formed
    SingletonClass(){};
public:

    //it will only let pass a single instance;
    static SingletonClass* getInstance(){
        if(instance==NULL){
            instance = new SingletonClass();
        }
        return instance;
    }

    static void resetInstance(){
        instance=NULL;
    }
};

//initially the instance should be null
SingletonClass* SingletonClass::instance = NULL;


int main(){

    //below both will get same instance
    SingletonClass* one = SingletonClass::getInstance();
    SingletonClass* two = SingletonClass::getInstance();
    
    //resetting instance
    SingletonClass::resetInstance();

    //below both will get same instance
    SingletonClass* three = SingletonClass::getInstance();
    SingletonClass* four = SingletonClass::getInstance();


    cout<<one<<endl;
    cout<<two<<endl;
    cout<<three<<endl;
    cout<<four<<endl;
}
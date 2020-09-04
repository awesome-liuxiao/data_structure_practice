#include<iostream>

using namespace std;

int main(){
    enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

    struct Passenger {
        string      name;
        MealType    mealPref;
        bool        isFreqFlyer;
        string      freqFlyerNo;
    };

    Passenger pass1 = {"John Smith", VEGETARIAN, true, "12345"};
    cout << pass1.name<<endl;
    pass1.name = "Yin Wang";
    cout << pass1.name<<endl;

    Passenger *p;
    p = new Passenger;
    p->name = "Yolo Hama";
    p->mealPref = LOW_FAT;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    cout << p->isFreqFlyer <<endl;
    delete p;

    char* buffer = new char[500];
    buffer[3] = 'a';
    cout<<buffer[1]<<", "<<buffer[3]<<endl;
    delete [] buffer;

    string author = "Jimmy";
    author += " Ken";
    cout<<author<<endl;
    string& penName = author;
    penName = "Big K";
    cout<<author<<endl;
    return 0;
}

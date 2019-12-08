#include <iostream>
#include <fstream>
#include "Data.h"
#include <string>
using namespace std;

Data :: Data() { //default constructor
    TweeterID = -1;
    Retweet_Num = -1;
    Favorite_Num = -1;
    UserID = -1;
}

Data :: Data (int tweeterid, int retweet_num, int favorite_num, int userid) {
    TweeterID = tweeterid;
    Retweet_Num = retweet_num;
    Favorite_Num = favorite_num;
    UserID = userid;
}

//operator overload for comparison
bool operator > (const Data &Last_User, const Data &Current_User){
    return Last_User.Retweet_Num > Current_User.Retweet_Num;
}
bool operator <= (const Data &Last_User, const Data &Current_User){
    return Last_User.Retweet_Num <= Current_User.Retweet_Num;
}

ostream& operator << (ostream& os, const Data NextUser) {
    os << "This tweeter has " << NextUser.Retweet_Num << "retweets" << endl;
    os << "This tweeter has " << NextUser.Favorite_Num << "favorite";
    return os;
}
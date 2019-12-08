#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//This code uses Data from the Kaggle, which is about tweeters during the 2019 election of Australia
//https://www.kaggle.com/taniaj/australian-election-2019-tweets
//Sorting by the number of retweet
//This Data set has 183k entries

class Data {
    friend ostream& operator << (ostream& os, Data a);

public:
    Data();
    Data(int TweeterID, int Retweet_Num, int Favorite_Num, int UserID);

    //comparision operator overload
    friend bool operator > (const Data &Last_User, const Data &Current_User);
    friend bool operator <= (const Data &Last_User, const Data &Current_User);

private:
    //four data members
    int TweeterID;
    int Retweet_Num;
    int Favorite_Num;
    int UserID;
};

#endif //PROJECT9_DATA_H

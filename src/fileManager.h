//
//  fileManager.hpp
//  FunWithFiles
//
//  Created by Caroline Record on 8/24/16.
//
//


#include "ofMain.h"
#include "oneImage.h"

class fileManager{
    public:
    
        void setup();
        void update();
        void draw();
    
    private:
    
    
    string startPath; 
    
    //variables about the file path
    string nextFileToLoad;
    int indexDay;
    int indexMoment;
    int numOfDays;
    int numOfMoments;
    ofDirectory day;
    ofDirectory moment;
    string lastWeather;
    // maps of un-used days
    map<int,string> mapOfDays;
    // re-initialize list of unused days
    int dayCount;
    void makeUnusedDaysMap();
    int selectDay();
    string currentDayWeather;
    void checkNewMoment();
    void checkNewDay();
    ofDirectory dirToCheck;
    void setUpDays();
    void insertMomentCheck(string momentPath);
    void nextMoment();
    
    oneImage test;
    
    // the deque
    deque<unique_ptr<oneImage>> testQ;
    int imgWidth;
    int imgHeight;
    // the current moment
    oneImage curMoment;
    
    int posX; 
    
};

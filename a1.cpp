#include<iostream>
#include <locale>
#include<fstream>
#include <string>
using namespace std;

int main(){
    // took the file as the input
    ifstream ip("Assignment_Timecard.xlsx - Sheet1.csv");

    // if file not found then error would be thrown
    if(!ip.is_open()) cout<<"Error"<<endl;

    string PositionID;
    string PositionStatus;
    string Time;
    string TimeOut;
    string TimecardHours;
    string Start;
    string End;
    string EmployeeName;
    string FileNumber;

    while(ip.good()){
        getline(ip, PositionID, ',');
        getline(ip, PositionStatus,',');
        getline(ip, Time,',');
        getline(ip, TimeOut,',');
        getline(ip, TimecardHours,',');
        getline(ip, Start,',');
        getline(ip, End,',');
        getline(ip, EmployeeName,'0');
        getline(ip, FileNumber,'\n');

        // cout<<"ID"<<" "<<PositionID<<endl;
        // cout<<"Status"<<" "<<PositionStatus<<endl;
        // cout<<"IN"<<" "<<Time<<endl;
        // cout<<"OUT"<<" "<<TimeOut<<endl;
        // cout<<"TOTAL"<<" "<<TimecardHours<<endl;
        // cout<<" ------------------------------------------------"<<endl;

        // int tame = stoi(TimecardHours[0]);
        char ch = TimecardHours[0];
        int time = ch - '0';
        // now a part
        // for 7 consecutive hours
        if(time>=7) cout<<"NAME"<<" , "<<EmployeeName<<" , "<<"ID"<<PositionID<<" , "<<"Time"<<" , "<<TimecardHours<<" , "<<"StartTime"<<" , "<<Start<<" , "<<"EndTime"<<" , "<<End<<endl;

        // this is showing all the employs with working hours of 7 hours or more
        // code shows name id and time the employs worked and start time and end time
    }

    ip.close();
};
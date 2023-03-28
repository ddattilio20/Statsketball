#include "Executive.h"
#include "Team.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <typeinfo>
#include <stdlib.h>


Executive::Executive(char*& file)
{
    fileName = file;
}

Executive::~Executive()
{

}


void Executive::readFile()
{
    std::ifstream infile(fileName);
    std::string line;

    while(std::getline(infile, line))
    {
       //auto val = line;
      //std::cout << val << "\n";
        std::stringstream ss(line);
          std::string newName;
          getline(ss, newName, ',');
          std::string games;
          getline(ss, games,',');
          const char * charGames = games.c_str();
          std::string wins;
          getline(ss, wins, ',');
          const char * charWins = wins.c_str();
          std::string losses;
          getline(ss, losses,',');
          const char * charloss = losses.c_str();
          std::string winPerc;
          getline(ss, winPerc, ',');
          const char * charWinPerc = winPerc.c_str();
          std::string homewin;
          getline(ss, homewin,',');
          const char * charHomeW = homewin.c_str();
          std::string homeloss;
          getline(ss, homeloss, ',');
          const char * charHomeL = homeloss.c_str();
          std::string roadwin;
          getline(ss, roadwin,',');
          const char * charRoadW = roadwin.c_str();
          std::string roadloss;
          getline(ss, roadloss, ',');
          const char * charRoadL = roadloss.c_str();
          std::string pointsfor;
          getline(ss, pointsfor,',');
          const char * charPointsFor = pointsfor.c_str();
          std::string pointsDef;
          getline(ss, pointsDef, ',');
          const char * charPointsDef = pointsDef.c_str();

          int intGames = atoi(charGames);
          int intWins = atoi(charWins);
          int intLosses = atoi(charloss);
          float floatWinPerc = atof(charWinPerc);
          int intHomeW = atoi(charHomeW);
          int intHomeL = atoi(charHomeL);
          int intRoadW = atoi(charRoadW);
          int intRoadL = atoi(charRoadL);
          float floatPointsFor = atof(charPointsFor);
          float floatPointsDef = atof(charPointsDef);

          float ppg = floatPointsFor / intGames;
          float defPPG = floatPointsDef / intGames;

          Team newTeam = Team(newName);
          newTeam.setGames(intGames);
          newTeam.setWins(intWins);
          newTeam.setLoss(intLosses);
          newTeam.setwinPerc(floatWinPerc);
          newTeam.sethomeWins(intHomeW);
          newTeam.sethomeLoss(intHomeL);
          newTeam.setroadWins(intRoadW);
          newTeam.setroadLoss(intRoadL);
          newTeam.setPPG(ppg);
          newTeam.setPPG(defPPG);

          teamVector.emplace_back(newTeam);

    }
}



void Executive::run()
{
    readFile();
    std::cout << "\n\n\nWelcome to Statsketball, a NCAA Basketball stats organizer and viewing tool.\n\n";


    int userIn;
    while(userIn != 7)
    {
        std::cout << "What Would You like to do? \n1) View All Teams\n2) View Specifi Team\n3) View All Teams with Specific Stat\n4) View Stat Leaders\n5) Add Team\n6) Delete Team\n7) Exit\n";
        std::cin >>userIn;
    }


}
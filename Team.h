#ifndef TEAM_H
#define TEAM_H
#include <string>

class Team{
    public:
        Team(std::string newName);
        ~Team();


        std::string getName();
        void setName(std::string newName);
        //getters and setters for team attributes
        double getPPG();
        void setPPG(double newPPG);

        double getdefPPG();
        void setdefPPG(double newdefPPG);

        int getGames();
        void setGames(int newGames);

        int getWins();
        void setWins(int newWins);

        int getLoss();
        void setLoss(int newLoss);

        float getwinPerc();
        void setwinPerc(float newWinPerc);

        int gethomeWins();
        void sethomeWins(int newHWins);

        int gethomeLoss();
        void sethomeLoss(int newHLoss);

        int getroadWins();
        void setroadWins(int newRWins);

        int getroadLoss();
        void setroadLoss(int newRLoss);



    private:
        //standard team attributes 
        std::string teamName;
        double PPG;
        //defensive points per game (points against)
        double defPPG;
        int games;
        float winPercentage;
        int wins;
        int losses;
        int homeWins;
        int homeLoss;
        int roadWins;
        int roadLoss;
};

#endif
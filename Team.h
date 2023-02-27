#ifndef TEAM_H
#define TEAM_H

class Team{
    public:
        Team();
        ~Team();

        //getters and setters for team attributes
        double getPPG();
        void setPPG(double newPPG);

        double getdefPPG();
        void setdefPPG(double newdefPPG);

        int getWins();
        void setWins(int newWins);

        int getLoss();
        void setLoss(int newLoss);

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
        double PPG;
        //defensive points per game (points against)
        double defPPG;
        int wins;
        int losses;
        int homeWins;
        int homeLoss;
        int roadWins;
        int roadLoss;
};

#endif
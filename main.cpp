#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>

using namespace std;

string CountryNames[]={
 "Norsca",
 "Troll Country",
 "Kislev",
 "The Empire",
 "Bretonnia",
 "Estalia",
 "Tilea",
 "The Border Princes",
 "The Badlands"
};

string ChaosNames[]={
    "Khorne",
    "Nurgle",
    "Tzeentzch",
    "Slaanesh",
    "Horned Rat"
};


class Board{
class ChaosArmy{
    string Owner;
    int Quantity[3];
public:
    ChaosArmy(){}
    ChaosArmy(string Owner):Owner(Owner){
        for(int i=0;i<3;i++)Quantity[i]=0;
    }
};
class Region{
    string Name;
    set<string> Neighbours;
    ChaosArmy Armies[5];
public:
    Region(string Name):Name(Name){
        if(Name==CountryNames[0])Neighbours.insert(CountryNames[1]);
        if(Name==CountryNames[1]){
            Neighbours.insert(CountryNames[0]);
            Neighbours.insert(CountryNames[2]);
        }
        if(Name==CountryNames[2]){
            Neighbours.insert(CountryNames[3]);
            Neighbours.insert(CountryNames[1]);
        }
        if(Name==CountryNames[3]){
            Neighbours.insert(CountryNames[2]);
            Neighbours.insert(CountryNames[4]);
            Neighbours.insert(CountryNames[7]);
        }
        if(Name==CountryNames[4]){
            Neighbours.insert(CountryNames[5]);
            Neighbours.insert(CountryNames[6]);
            Neighbours.insert(CountryNames[7]);
            Neighbours.insert(CountryNames[3]);
        }
        if(Name==CountryNames[5]){
            Neighbours.insert(CountryNames[4]);
            Neighbours.insert(CountryNames[6]);
        }
        if(Name==CountryNames[6]){
            Neighbours.insert(CountryNames[4]);
            Neighbours.insert(CountryNames[5]);
            Neighbours.insert(CountryNames[7]);
        }
        if(Name==CountryNames[7]){
            Neighbours.insert(CountryNames[8]);
            Neighbours.insert(CountryNames[6]);
            Neighbours.insert(CountryNames[4]);
            Neighbours.insert(CountryNames[3]);
        }
        if(Name==CountryNames[8]){
            Neighbours.insert(CountryNames[7]);
        }
    }
};

    vector<Region> Regions;
    
public:
    Board(){
        for(int i=0;i<9;i++)
            Regions.push_back(Region(CountryNames[i]));
    }
    
    
};


int main(){

    
}

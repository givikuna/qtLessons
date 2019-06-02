#include <iostream>
// C program to generate random numbers

#include <time.h>
#include "windows.h"
using namespace std;

int GetRandom()
{
    return rand() % 100000 + 1;
}

struct Rocket
{
public:
    Rocket(){
        m_planetsTraveled = 0;
        cout<<"started starter planet is: planet "<<m_planetsTraveled<<" (Earth) "<<endl;
        cout<<"\n";
        cout<<"-----------------------------------------------------------------------------"<<endl;
    }

    void ReturnBack()
    {
        m_planetsTraveled = 0;
        cout<<"now you are on: planet "<<m_planetsTraveled<<endl;

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";
    }
    void GoToOtherPlanet()
    {
        m_planetsTraveled += 1;
        cout<<"now you are on: planet "<<m_planetsTraveled<<endl;

        for (int n =0;n<120;n++) {
            Sleep(60);
            cout<<"................>>->=>->>";
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
            cout << "\b" ;
        }

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";

        if(m_planetsTraveled == 1){
            cout<<"\n\r";
            cout<<"you are already on planet one better known as Mars, I am AI, and I wanted to tell you that I won't be here anymore, sell me and then you will be able to buy some new stuff. trust me. but still your choice."<<endl;
            cout<<"\n";

            cout<<"\n\r";

            char C;

            cout<<"write C to continue";
            cin>>C;

            for (int n =0;n<5;n++) {
                Sleep(60);
                cout<<"\n\r";
                cout << "-------->";
                cout << "\b" ;
                cout << " SOLD   .   !";
                cout << "\b" ;
            }


            cout<<"\n\r";


            cout<<"I was sold for 2,000 Galaxy Coins, see ya!"<<endl;
            m_Current_GalaxyCoins = 2000;
            cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;
            }

                    cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;


        if(m_planetsTraveled == 5){
            char confirm;
            cout<<"you reached planet 5 you made enough energy to make a hyperjump wanna try (you will travel 5 planets more!)? y/n ";
            cin>>confirm;

            cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;

            if(confirm == 'y'){

                m_planetsTraveled += 5;
                m_planetsTraveled -= 1;
            }
            else{
                cout<<"oops, your powers are going down, you need to return 2 planets back to recharge your battery, or you will blew up and explode in a galaxy"<<endl;
                m_planetsTraveled -= 2;
            }
            cout<<"-------------------------------------------------------------"<<endl;
            cout<<"\n\r";
        }
        if(m_planetsTraveled == 13){
            char y;
            cout<<"wanna try another HyperJump? 6 planets buddy!";
            cin>>y;
            if(y == 'y'){
                m_planetsTraveled += 6;
                m_planetsTraveled -= 1;
            cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
                cout<<"\n\r";
            }
        }
        if(m_planetsTraveled == 19){
            cout<<"JUST ONE MORE BUDDY!!!!!!!!!!!!!!!!!!"<<endl;
            cout<<"there YOU GO!"<<endl;
        }
        if(m_planetsTraveled == 20){
            cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;
            char confirm;
            cout<<"you reached planet ten you made enough energy to make a mega hyper jump wanna try (you will travel 10 planets more!)? y/n ";
            cin>>confirm;

            if(confirm == 'y'){
                m_planetsTraveled += 10;
                m_planetsTraveled -= 1;
            }
            else {
                cout<<"oops, your powers are going down, you need to return 5 planets back to recharge your battery, or you will blew up and explode in a galaxy"<<endl;
                m_planetsTraveled -= 5;

            }

            cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;
        }

        if(m_planetsTraveled == 21){
            int hellofucker;
            cout<<"YOU FINALLY REACHED PLANET 21, THERE YOU GO, CHOOSE HOW MANY GALAXY COINS YOU WANT";
            cin>>hellofucker;

            m_Current_GalaxyCoins += hellofucker;

            cout<<" You have "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;

        }

        if(m_planetsTraveled == 32){
            cout<<"----------------------------"<<endl;
            cout<<"you are on planet 32"<<endl;
            cout<<"----------------------"<<endl;
            cout<<"Hello, I am your assistant, my name is TM,"<<
            " I was stuck in the Rocket for all the time and I do not know how to"
            <<" help you with anything but I just got out of there,"
            <<" you did not even notice me did you?"<<endl;
            cout<<"----"<<endl;
            cout<<"here, I have some Galaxy Coins, Use it the correct way"<<endl;
            cout<<"ohh, it turns out I have only 10 Galaxy Coin"<<endl;
            cout<<"well woth that you can't buy new ship with that but it is still enough for Energy Fuel"<<endl;
            cout<<"you can buy "<<endl;
            cout<<"1. New Motor (it will make you two times faster)"<<endl;
            cout<<"2. Gas Fuel "<<endl;
            cout<<"Nothing (you will get 10 extra Galaxy Credits"<<endl;
            cout<<"-----------"<<endl;
            char Iwant;
            cout<<"so sadly you can not buy anything else so choose fast, for Gad write G, for Motor write M, if nothing write N, there you go what you want:  ";
            cin>>Iwant;
            if(Iwant == 'G'){
                cout<<"you got Gas"<<endl;
                cout<<"--------"<<endl;
             }
            else if(Iwant == 'g'){
                cout<<"you got Gas"<<endl;
                cout<<"--------"<<endl;
             }
            else if (Iwant =='M')
            {
                cout<<"you got Motor"<<endl;
                cout<<"--------"<<endl;
            }
            else if (Iwant == 'm')
            {
                cout<<"yu got Motor"<<endl;
                cout<<"---------"<<endl;
            }
            else if (Iwant == 'N')
            {
                m_Current_GalaxyCoins += 10;
                cout<<"you got 10 more Galaxy Coins!"<<endl;
            }
        }
        if(m_planetsTraveled == 40)
        {
            cout<<"you reached planet 40!"<<endl;
            cout<<"it is me, TM"<<endl;
            cout<<"ahh, I can make a HyperJump for you! 5 planets are gonna be crossed and youw ill be able to reach planet 2000 faster"<<endl;
            cout<<"there we go..."<<endl;
            m_planetsTraveled +=5;
            m_planetsTraveled -=1;
            cout<<"and I found 5 more Galaxy Coins and there you go I am gonna give it to you!"<<endl;
            m_Current_GalaxyCoins += 5;
            cout<<"now you have "<<m_Current_GalaxyCoins<<" Galaxy Points "<<endl;

        }
        if(m_planetsTraveled == 41){
            char y;
            cout<<"wanna make another HyperJump?";
            cin>>y;
            if (y == 'y'){
                m_planetsTraveled = 47;
            }
            if(y == 'n'){
                for ( int fuck = 0 ; fuck < 500 ; fuck++ )
                Sleep(60);
                cout<<"YOU LOST!!!!!!!!!!!!!!"<<endl;
            }
        }
        if(m_planetsTraveled == 49)
        {
            cout<<"just one more planet and you will reach your checkpoint!!!"<<endl;
        }
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";
        if(m_planetsTraveled == 50){
            cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;
            int AddedGalaxyCoins;
            m_Current_GalaxyCoins = 0;
            cout<<"you reached planet 50 you will get extra help and start making money,"
            <<" when you buy new stuff you get to travel faster"<<endl;
            cout<<"you recieved 50 galaxy coin, return in a new version see ya!"<<endl;
            m_Current_GalaxyCoins += 50;
            cout<<"Thanks for playing"<<endl;
            cout<<"\n\r";
            cout<<"you wanna get some more Galaxy Coins? write how much you want,"
               <<" you will get it:  ";
            cin>>AddedGalaxyCoins;
            cout<<"\n";
            cout<<"your current balance is: "<<(m_Current_GalaxyCoins + AddedGalaxyCoins)<<endl;

            m_Current_GalaxyCoins += AddedGalaxyCoins;

            cout<<"-------------------------------------------------------------"<<endl;
            cout<<"\n\r";

            char YorN;

            cout<<"do you want any extra Galaxy Coins?  y/n:   ";
            cin>>YorN;

            if (YorN == 'y'){

                int h = m_Current_GalaxyCoins + GetRandom();
                cout<<"you got "<<GetRandom()<<" Galaxy Coins "<<endl;
                cout<<"Now you have "<<h<<endl;
                m_Current_GalaxyCoins += GetRandom();
                cout<<"your current balance: "<<m_Current_GalaxyCoins<<" Galaxy Coins "<<endl;
        }
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";
        }
    }
    int m_planetsTraveled;
    int m_galaxyCoins;
    int m_Current_GalaxyCoins;
};

int main()
{
    Rocket USArocket;
    srand (time(nullptr));
    for(;;)
    {
        char goTo;
        cout<<"continue travelling around galaxy? y/n ";
        cin>>goTo;



        if(goTo == 'y') {
            USArocket.GoToOtherPlanet();
        }

        else {
            cout<<"oh no! your plane was crashed by meteor, you lost!"<<endl;
            break;
        }

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";

        char ReturnToEarth;
        cout<<"return to earth?? y/n ";
        cin>>ReturnToEarth;

        if(ReturnToEarth == 'y'){
            USArocket.ReturnBack();
        }

        if(ReturnToEarth == 'n'){
            USArocket.GoToOtherPlanet();
        }

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\n\r";
        //

        // Driver program


    }

    return 0;
}

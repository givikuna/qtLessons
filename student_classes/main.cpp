#include <iostream>

// C program to generate random numbers

#include <time.h>
#include "windows.h"
using namespace std;

int GetRandom()
{
    return rand() % 4 + 1;
}

struct Student
{
public:
    Student(string name)
    {
        m_name = name;
    }
    string getName()
    {
        return m_name;
    }
    void start()
    {
        for (;;) {
            cout << "\n\r";

            cout << "Hey there! Welcome to your new school!" << endl;

            cout << "\n\r";

            cout << "\n\r";

            char startschool;

            cout << "you want to start your school? y/n _ ";
            cin >> startschool;

            if ( startschool == 'n' )
            {
                cout << "You got beaten up by your parents, poor kiddo, so I guess they won't let you play games anymore that is really bad" << endl;
                cout << " YOU LOST A EASIEST GAME!!!!!!!!!!! " << endl;
                cout << "\n\r";
                cout << "\n\r";
                cout << "\n\r";

                break;
            }

            if ( startschool == 'y')
            {
                cout << "you got 10 dollar from your parents because you was a good kid in a school today" << endl;
                m_Money += 10;

                cout << "\n\r";
                cout << "--------------" << endl;
                cout << "\n\r";
            }

            cout << " MATH TEST (FRACTIONS)" << endl;
            cout << " You Got (" << GetRandom() << "/4) as a grade" << endl;
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
            if (GetRandom() == 1){
                cout << " you got really bad grade, how did u even made it? you got beaten up by your parent and it is so sad " << endl;
                break;
            }
            else if (GetRandom() == 2){
                cout << " you got really bad grade, how did u even made it? you got beaten up by your parent and it is so sad " << endl;
                break;
            }
            else if (GetRandom() == 3){
                cout << " your parents didn't even care, they just said it is good that you even got a grade, sad right? you could take a retake but in the game game creator i evil and do not want you to feel good, sorry about it but it is true! LOL " << endl;
                cout << " so you will reastart game do you want it or not MUHAHAHAHAHAHAHAHAHA " << endl;
                continue;
            }
            else if (GetRandom() == 4) {
                m_Money += 20;
                cout << " now you have " << m_Money << " dollars, your parents are so happy! " << endl;
            }
            cout << " now you have First Science Ecperiment so Good luck! " << endl;
            cout << " \n \r" << endl;
            cout << " you got " << GetRandom() << " / 4 " << endl;
            if (GetRandom() == 1) {
                cout << " your parents got mad at you and they kicked you out of your home! LOL Poor kid " << endl;
                char restartkiddo;
                cout << " do you want to restart game! you died so. y/n _ ";
                cin >> restartkiddo;
                if (restartkiddo == 'y')
                {
                    char YouReallyWannaRestartRightquestionmark;
                    cout << " Are ypou shure you want to restart a game? y/n _  ";
                    cin >> YouReallyWannaRestartRightquestionmark;
                    if (YouReallyWannaRestartRightquestionmark == 'y'){
                        cout << " okay, you are restarting! " << endl;
                        continue;
                    }
                    else if (YouReallyWannaRestartRightquestionmark == 'n'){
                        char yep;
                        cout << " Ok then you will quit game. let me ask you again do you really want to quit game? y/n _ ";
                        cin >> yep;
                        if (yep == 'y')
                        {
                            cout << " you are quiting game see you later! " << endl;
                            break;
                        }
                        else if (yep == 'n')
                        {
                            char YeahDudeIamSureLetMeGoBroStopFuckingMyFuckingDeadBrainYouMotherfuckerLOLDudeyouAreMakingMeThinkYouAreDumbOrYouReallyAre;
                            cout << " Okay so you are restarting a game do you want to restart? y/n _ ";
                           cin >> YeahDudeIamSureLetMeGoBroStopFuckingMyFuckingDeadBrainYouMotherfuckerLOLDudeyouAreMakingMeThinkYouAreDumbOrYouReallyAre;
                            if (YeahDudeIamSureLetMeGoBroStopFuckingMyFuckingDeadBrainYouMotherfuckerLOLDudeyouAreMakingMeThinkYouAreDumbOrYouReallyAre == 'y'){
                                cout << " ok so you are restarting the game! here you go! Good Luck! " << endl;
                                continue;
                            }
                            else if (YeahDudeIamSureLetMeGoBroStopFuckingMyFuckingDeadBrainYouMotherfuckerLOLDudeyouAreMakingMeThinkYouAreDumbOrYouReallyAre == 'n') {
                                cout << " Okay Now you stop playing game see ya next time! " << endl;
                                break;
                            }
                            else if(restartkiddo == 'n'){
                                char YesDudeImSureStopFuckingMyBrainPlease;
                                cout << " are you sure you want to stop playing game? y/n _ " << endl;
                                cin >> YesDudeImSureStopFuckingMyBrainPlease;
                                if (YesDudeImSureStopFuckingMyBrainPlease == 'y')
                                {
                                    cout << " Okay then see ya next time bye! " << endl;
                                    break;
                                }
                                else if (YesDudeImSureStopFuckingMyBrainPlease == 'n')
                                {
                                    cout << " Okay you will restart a game, good luck! " << endl;
                                    continue;
                                }
                            }
                        }
                    }
                }
            }
            else if (GetRandom() == 2){
                cout << " your parents are mad and they murdered you they are murderers " << endl;
                break;
            }
            else if (GetRandom() == 3){
                cout << " your parents are glad you could make it to the 3 they were expecting one, you got 2 dollars for that! hurray! " << endl;
                m_Money += 2;
            }
            else if (GetRandom() == 4){
                cout << " your parent are excited they were waitin for 1 so, now you have 100 dollar more, gosh it is cool! " << endl;
                m_Money +=100;
            }
            char Both;
            cout << " Now tell me, are you boy or girl? b/g _ ";
            cin >> Both;
            if (Both == 'b')
            {
                char GirlfriendName;
                cout << " you are a boy? Okay! write your girlfriends name (if you do not have one just write n _ ";
                cin >> GirlfriendName;

                if (GirlfriendName == 'n')
                {
                    cout << "\n\r";
                    cout << " You need to have a girlfriend to play this game so bye! " << endl;
                    break;
                }
                char IguessSO;
                cout << ". " << GirlfriendName << " is really good name! did you just made it up? y/n _ ";
                cin >> IguessSO;

                if (IguessSO == 'y')
                {
                    cout << " It is a game of truth, you must have wrote truth, you kicked out from a game!" << endl;
                    break;
                }
                else if (IguessSO == 'n')
                {
                    cout << " I do not know that you are lying or not so you are kicked out of the game! LOL Just kidding! you are not you are being kicked out of the game! " << endl;
                    break;
                }
                else{
                    cout << " you are the luckiest person I have ever met dude, I am sure you will win! good luck, lets continue the game! " << endl;
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                    cout << "\n\r";
                }
            }
            else if (Both == 'g') {
                cout << " Girls can not play this game I am sorry! " << endl;
                char IchoseThisLOL;
                cout << " you must reastart a game and say that you are a boy, or stop playing game which one do you choose? b(say that you are boy) s(stop) b/s _ ";
                cin >> IchoseThisLOL;
                if (IchoseThisLOL == 'b')
                {
                    cout << " RESTARTING THE GAME PLEASE WAIT " << endl;
                    continue;
                }
                else if (IchoseThisLOL == 's') {
                    cout << " TURNING OFF THE GAME PLEASE WAIT! " << endl;
                    break;
                }
                else if (IchoseThisLOL == 'd') {
                    cout << " DUDE WHY ARE YOU SO LUCKY! LOL! LETS CONTINUE THE GAME! " << endl;
                }
                else{
                    cout << " you lied you are not a boy! " << endl;
                    cout << " TURNING OF THR GAME PLEASE WAIT! " << endl;
                    break;
                }
                char IDKHOWLUCKYIAMLETMECHECKBROFUCKINGSHITTHEREISWAYTOOSMALLCHANCEFORMETOGETTHEIWNINTHEHARDESTGAMEEVERMUTHERFUCKER;
                cout << " that lucky huh? write anything here and let me see how lucky you are ";
                cin >> IDKHOWLUCKYIAMLETMECHECKBROFUCKINGSHITTHEREISWAYTOOSMALLCHANCEFORMETOGETTHEIWNINTHEHARDESTGAMEEVERMUTHERFUCKER;
                if (IDKHOWLUCKYIAMLETMECHECKBROFUCKINGSHITTHEREISWAYTOOSMALLCHANCEFORMETOGETTHEIWNINTHEHARDESTGAMEEVERMUTHERFUCKER == 'q') {
                    cout << " OMG Lucky, you got it right! LOL, OK now lets continue the game " << endl;
                }
                else if (IDKHOWLUCKYIAMLETMECHECKBROFUCKINGSHITTHEREISWAYTOOSMALLCHANCEFORMETOGETTHEIWNINTHEHARDESTGAMEEVERMUTHERFUCKER == 'a') {
                    cout << " DUDE this is the only one that make you loose, other are continue game or restart, and youo got the only one that makes yopu loose loser! " << endl;
                    break;
                }
                else {
                    cout << "not that much lucky huh? LOL! TRY AGAIN" << endl;
                    continue;
                }
            }
            cout << " DUDE YOU FINALLY REACHED THE END? IT TOOK YOUS AGES RIGHT? LOL dude that's sad! " << endl;
            int IamSomethingYearsOld;
            cout << " answer the question how old are you? ";
            cin >> IamSomethingYearsOld;
            if (IamSomethingYearsOld > 999999999 || IamSomethingYearsOld < 13)
            {
                cout << " Sorry but the game is pg-13 so, you got kicked out! BYE! " << endl;
                cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";cout << "\n\r";
                break;
            }
            cout << " Tomorrow you have to take a exam In math! " << endl;
            cout << " get ready, copy the code and paste it:01 " << endl;
            cout << " 101010101010010101011001010 " << endl;
            char CodeToHackMathExam1;
            cout << " Write your code here! " ;
            cin >> CodeToHackMathExam1;
            if (CodeToHackMathExam1 == 'y')
            {
                cout << " UNLUCKY! " << endl;
                cout << " PARENTS MURDERED YOU POOR KIDDO! " << endl;
                break;
            }
            else if (CodeToHackMathExam1 == 'q')
            {
                cout << " Luckiest person alive dude! " << endl;
                cout << " Let's continue! " << endl;
                cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;cout << "\n\r" ;
            }
            else {
                cout << " you didnt copy the code! so you are out! " << endl;
                cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl; cout << " BREAK TIME KID! " << endl;
                break;
            }
            char HackCode
            cout << " Let's continue the game! " << endl;
            cout << " I got a sad news for you! you have an exam, write 1 and 0 code to hack it! ";
            cin >> HackCode;
            if (HackCode == '1') {
                cout << " It is not a code! Restarting Game! " << endl;
                continue;
            }
            else if (HackCode == '0') {
                cout << " It is not a code! Restarting Game! " << endl;
               continue;
            }
        }
    }

    int m_Money;
    int m_test1MATH;
    int m_test2MATH;
    int m_test3MATH;
    int m_test4MATH;
    int m_ExamMATH;
    int m_Experiment1SCIENCE;
    int m_Experiment2SCIENCE;
    int m_Experiment3SCIENCE;
    int m_Experiment4SCIENCE;
    int m_Experiment5SCIENCE;
    string m_name;

};

int main()
{

    Student st("Givi");

    cout << " SADLY SCHOOL STARTED MUHAHAHAHAHAHAHAHAHAHAHAHAHA " << endl;

    srand (time(nullptr));

    st.start();

    return 0;
}

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

//"----------------|-----------------\n"

using namespace std;

int main()
{
    int menu=0;
    int sett=1,culoare=8;

    srand( time(0));   //seed
    string ic1[8]={" ____  ____  ____  ","   __   __   ___   ", "    _o_      _o_   ","     ________      ", "JACKPOTJACKPOTJACKP","     ,--./,-.      ", " __/^\\__   __/^\\__ ","    __ __ __ __ __  "};
    string ic2[8]={"|__  ||__  ||__  | ","  |__] |__| |__/   ", "   (   )    (   )  ","    /_|____|_\\     ","ACKPOTJACKPOTJACKPO","    / #      \\     "," \\  *  /   \\  *  / ","  /__/__/__/__/__/| "};
    string ic3[8]={"  / /   / /   / /  ","  |__] |  | |  \\   ","   )   (    )   (  ","    '. \\  / .'     ","CKPOTJACKPOTJACKPOT","    \\        /     ","  >   <     >   <  ",  " /__/__/__/__/__/|/ "};
    string ic4[8]={" /_/   /_/   /_/   ","  ***************  ", "  '-'o'-'  '-'o'-' ","      '.\\/.'       ","KPOTJACKPOTJACKPOTJ","     `._,._,'      ", " /.-^-.\\   /.-^-.\\ "," |__'__'__'__'__|/  "};
    int x=9,lei=100,par=5,lin=3;
    int a1,a2,a3,b1,b2,b3,c1,c2,c3,ok1=0,ok2=0,ok3=0;
    a1=rand()%8+0;b1=rand()%8+0;c1=rand()%8+0;
    a2=rand()%8+0;b2=rand()%8+0;c2=rand()%8+0;
    a3=rand()%8+0;b3=rand()%8+0;c3=rand()%8+0;

    HANDLE  color;
    color = GetStdHandle(STD_OUTPUT_HANDLE);  //text colour

    while(menu!=4){
              system("cls");  //main menu
        cout<<"  ____                            _      "<<endl;
        cout<<" |  _ \\ __ _  ___ __ _ _ __   ___| | ___ "<<endl;
        cout<<" | |_) / _` |/ __/ _` | '_ \\ / _ \\ |/ _ \\"<<endl;
        cout<<" |  __/ (_| | (_| (_| | | | |  __/ |  __/"<<endl;
        cout<<" |_|   \\__,_|\\___\\__,_|_| |_|\\___|_|\\___|"<<endl;
        cout<<endl;
        cout<<"                   1.Play      \n";
        cout<<"                  2.Options    \n";
        cout<<"                  3.Credits    \n";
        cout<<"                   4.Quit      \n\n\n";
        cout<<" Alegerea ta este:";
        cin>>menu;
        system("cls");

    ////////////////////////////////////////////

    switch(menu){
        case 1:while(x!=0){
          system("cls"); //afisare simboluri

      cout<<endl;
      cout<<"        "<<ic1[a1]<<"  "<<ic1[a2]<<"  "<<ic1[a3]<<endl;
      cout<<"        "<<ic2[a1]<<"  "<<ic2[a2]<<"  "<<ic2[a3]<<"   "<<ok1<<endl;
      cout<<"        "<<ic3[a1]<<"  "<<ic3[a2]<<"  "<<ic3[a3]<<endl;
      cout<<"        "<<ic4[a1]<<"  "<<ic4[a2]<<"  "<<ic4[a3]<<endl;
      cout<<endl;
      cout<<"        "<<ic1[b1]<<"  "<<ic1[b2]<<"  "<<ic1[b3]<<endl;
      cout<<"        "<<ic2[b1]<<"  "<<ic2[b2]<<"  "<<ic2[b3]<<"   "<<ok2<<endl;
      cout<<"        "<<ic3[b1]<<"  "<<ic3[b2]<<"  "<<ic3[b3]<<endl;
      cout<<"        "<<ic4[b1]<<"  "<<ic4[b2]<<"  "<<ic4[b3]<<endl;
      cout<<endl;
      cout<<"        "<<ic1[c1]<<"  "<<ic1[c2]<<"  "<<ic1[c3]<<endl;
      cout<<"        "<<ic2[c1]<<"  "<<ic2[c2]<<"  "<<ic2[c3]<<"   "<<ok3<<endl;
      cout<<"        "<<ic3[c1]<<"  "<<ic3[c2]<<"  "<<ic3[c3]<<endl;
      cout<<"        "<<ic4[c1]<<"  "<<ic4[c2]<<"  "<<ic4[c3]<<endl;
      cout<<endl<<endl;

      cout<<"  Mai ai "<<lei<<" lei."<<endl<<endl;
      cout<<"  [1] Schimba miza: "<<par<<" lei."<<endl;
      cout<<"  [2] Momentan joci pe "<<lin<<" linii."<<endl;
      cout<<"  [3] Da-i de maneta vere.                                       [0] Exit"<<endl;
      cout<<endl;
      cout<<"  >";cin>>x;

      if(x==1){if(par<25)par+=5;  //optiuni pariere
               else par=5;}
      if(x==2){if(lin==3)lin=1;
               else lin=3;}
      if(x==3){lei=lei-par*lin;ok1=0;ok2=0;ok3=0;   //pariu
               a3=rand()%8+0;b1=rand()%8+0;c1=rand()%8+0;
               b2=rand()%8+0;c2=rand()%8+0;c3=rand()%8+0;
               b3=rand()%8+0;a2=rand()%8+0;a1=rand()%8+0;

               if(lin==1&&x==3){if(b1==b2&&b2==b3){lei=lei+par*8;ok2=3;}   //verificare + rasplata bani
                                else{if(b1==b2||b1==b3||b2==b3){lei=lei+par*3;ok2=2;}}}

               if(lin==3&&x==3){if(a1==a2&&a2==a3){lei=lei+par*8;ok1=3;}
                                else{if(a1==a2||a1==a3||a2==a3){lei=lei+par*3;ok1=2;}}
                                if(b1==b2&&b2==b3){lei=lei+par*8;ok2=3;}
                                else {if(b1==b2||b1==b3||b2==b3){lei=lei+par*3;ok2=2;}}
                                if(c1==c2&&c2==c3){lei=lei+par*8;ok3=3;}
                                else {if(c1==c2||c1==c3||c2==c3){lei=lei+par*3;ok3=2;}}}}

        if(lei<=0){
            system("cls");
            cout<<"  _____     _ _                      _   "<<endl;
            cout<<" |  ___|_ _| (_)_ __ ___   ___ _ __ | |_ "<<endl;
            cout<<" | |_ / _` | | | '_ ` _ \\ / _ \\ '_ \\| __|"<<endl;
            cout<<" |  _| (_| | | | | | | | |  __/ | | | |_ "<<endl;
            cout<<" |_|  \\__,_|_|_|_| |_| |_|\\___|_| |_|\\__|"<<endl;
            cout<<"             Scorul ti-a fost resetat."<<endl<<endl<<" ";
            system("pause");
            lei=100;x=0;
        }

        }x=9;break;
    //////////////////////////////////////////////
        case 2:while(sett!=0){
        cout<<"-------------Options-------------\n\n";
        cout<<"  1.Culoare Text = "<<culoare-7<<endl;
        cout<<"  2.Reseteaza scorul: "<<lei<<endl<<endl;
        cout<<"  0.Exit"<<endl<<endl;
        cout<<">";cin>>sett;

        if(sett==1){if(culoare>14)culoare=8;
                    else culoare++;
                    SetConsoleTextAttribute(color, culoare);}
        if(sett==2)lei=100;
        system("cls");
        }sett=1;break;
    //////////////////////////////////////////////
        case 3:cout<<"-------------Credits-------------\n\n";
               cout<<"           Beraed 2016\n";
               cout<<"           Version 1.0\n";
               cout<<"             Lang C++\n\n";

        system("pause");break;
    //////////////////////////////////////////////
        case 4: {break;}
    //////////////////////////////////////////////
           }}
    return 0;
    }





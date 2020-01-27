 #include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>

using namespace std;

bool gra=true;
bool gra1=true;
char kwadracik=0xDB;

void kolor(int n)
{
    HANDLE hwyj;
    hwyj = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwyj, n);
}

void start_gry()
{
    string poczatek = "Witaj w grze labirynt!";
    string zasady = "Aby wygrac musisz dostac sie do ";
    string graj="Kliknij dowolny przycisk, zeby zagrac";
    char cel=0xFE;

    cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t      ";
    for(int i=0; i<22; i++)
    {
        Sleep(50);
        cout<<poczatek[i];
    }

    cout<<endl<<endl<<"\t\t\t\t\t ";

    for(int i=0; i<32; i++)
    {
        Sleep(50);
        cout<<zasady[i];
    }
    kolor(14);
    cout<<cel<<endl<<endl<<endl<<endl;
    kolor(15);

    int labiryncik[7][11]=
    {1,1,1,1,1,1,1,1,1,1,1,
     1,0,1,0,0,0,0,1,1,0,1,
     1,0,1,0,1,1,0,0,0,0,1,
     1,0,0,0,0,1,0,1,1,0,1,
     1,1,1,1,0,1,0,1,1,0,1,
     1,0,0,1,0,1,0,0,1,0,1,
     1,1,1,1,1,1,1,1,1,1,1
    };

    for(int i=0;i<7;i++)
    {
        cout<<"\t\t\t\t\t\t    ";
        Sleep(100);
        for(int j=0;j<11;j++)
        {
            if(labiryncik[i][j]==1) cout<<kwadracik;
            else cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<"\t\t\t\t      ";

    for(int i=0;i<37;i++)
    {
        Sleep(50);
        cout<<graj[i];
    }

    getch();

    system("cls");
}

int labirynt[20][39]={
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,2,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
    1,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,0,1,
    1,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,1,0,1,
    1,0,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,1,0,1,
    1,0,0,1,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,
    1,1,1,1,0,1,0,0,0,0,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,
    1,0,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
    1,0,1,1,1,1,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,
    1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,1,1,0,0,0,1,0,0,0,1,0,1,
    1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,
    1,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,
    1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,0,0,0,1,0,1,1,1,1,1,1,1,0,1,
    1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,1,
    1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,0,1,0,1,0,1,
    1,0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,
    1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,0,1,1,1,0,1,
    1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,0,3,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

int labirynt1[20][40]={
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,2,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
    1,0,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,0,0,1,1,1,1,0,1,
    1,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,0,0,0,1,
    1,0,1,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,0,0,0,1,0,0,0,1,1,0,1,
    1,0,1,0,0,0,1,0,1,0,1,1,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,0,1,
    1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,1,
    1,1,1,1,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1,
    1,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,1,0,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,1,
    1,0,1,1,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,1,1,1,1,1,0,1,
    1,0,1,0,1,1,1,1,1,0,1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,1,1,1,0,0,1,0,1,0,1,
    1,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,1,0,1,
    1,0,0,0,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,3,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,
    1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,1,
    1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,
    1,1,1,1,1,1,0,1,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,1,1,0,1,
    1,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,0,0,0,0,0,1,
    1,0,1,1,1,1,1,1,0,1,0,1,0,0,0,0,0,0,1,1,1,1,0,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,1,
    1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

int ruch1_x=1;
int ruch1_y=1;

void wypisz_labirynt1()
{
    char kwadracik=0xDB;
    char gracz=0xFE;
    char cel=0xFE;

    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t POZIOM 1"<<endl<<endl;
    for(int i=0; i<20; i++)
     {
         cout<<"\t\t\t\t\t";

        for (int j=0; j<40; j++)
        {
            if(labirynt1[i][j]==1)
            {
                kolor(13);
                cout<<kwadracik;
                kolor(15);
            }
            else if(labirynt1[i][j]==0) cout<<" ";
            else if(labirynt1[i][j]==2)
            {
                kolor(11);
                cout<<gracz;
                kolor(15);
            }
            else if(labirynt1[i][j]==3)
            {
                kolor(14);
                cout<<cel;
                kolor(15);
            }
        }
        cout<<endl;
     }
}

void ruch1()
{
    char znak;
    switch(getch())
    {
    case 224:
        znak=getch();

        switch(znak)
        {
        case 72:                //strzalka w gore
           {
               if(labirynt1[ruch1_x-1][ruch1_y]==0)
               {
                   labirynt1[ruch1_x-1][ruch1_y]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                   ruch1_x=ruch1_x-1;
               }

               if(labirynt1[ruch1_x-1][ruch1_y]==3)
               {
                   labirynt1[ruch1_x-1][ruch1_y]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                    gra1=false;
               }
           }
           break;
        case 80:                //strzalka w dol
            {
                if(labirynt1[ruch1_x+1][ruch1_y]==0)
               {
                   labirynt1[ruch1_x+1][ruch1_y]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                   ruch1_x=ruch1_x+1;
               }
               if(labirynt1[ruch1_x+1][ruch1_y]==3)
               {
                   labirynt1[ruch1_x+1][ruch1_y]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                    gra1=false;
               }
            }
            break;
        case 75:        //strzalka w lewo
            {
            if(labirynt1[ruch1_x][ruch1_y-1]==0)
               {
                   labirynt1[ruch1_x][ruch1_y-1]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                   ruch1_y=ruch1_y-1;
               }
            if(labirynt1[ruch1_x][ruch1_y-1]==3)
            {
                    labirynt1[ruch1_x][ruch1_y-1]=2;
                    labirynt1[ruch1_x][ruch1_y]=0;
                     gra1=false;
            }
            }
            break;
        case 77:        //strzalka w prawo
            {
                if(labirynt1[ruch1_x][ruch1_y+1]==0)
               {
                   labirynt1[ruch1_x][ruch1_y+1]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                   ruch1_y=ruch1_y+1;
               }
               if(labirynt1[ruch1_x][ruch1_y+1]==3)
               {
                   labirynt1[ruch1_x][ruch1_y+1]=2;
                   labirynt1[ruch1_x][ruch1_y]=0;
                    gra1=false;
               }
            }
            break;
        }
    }
}


void wypisz_labirynt()
{
    char kwadracik=0xDB;
    char gracz=0xFE;
    char cel=0xFE;

    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t POZIOM 2"<<endl<<endl;
    for(int i=0; i<20; i++)
     {
         cout<<"\t\t\t\t\t";

        for (int j=0; j<39; j++)
        {
            if(labirynt[i][j]==1)
            {
                kolor(10);
                cout<<kwadracik;
                kolor(15);
            }
            else if(labirynt[i][j]==0) cout<<" ";
            else if(labirynt[i][j]==2)
            {
                kolor(4);
                cout<<gracz;
                kolor(15);
            }
            else if(labirynt[i][j]==3)
            {
                kolor(14);
                cout<<cel;
                kolor(15);
            }
        }
        cout<<endl;
     }
}

int ruch_x=1;
int ruch_y=1;

void ruch()
{
    char znak;
    switch(getch())
    {
    case 224:
        znak=getch();

        switch(znak)
        {
        case 72:                //strzalka w gore
           {
               if(labirynt[ruch_x-1][ruch_y]==0)
               {
                   labirynt[ruch_x-1][ruch_y]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   ruch_x=ruch_x-1;
               }

               if(labirynt[ruch_x-1][ruch_y]==3)
               {
                   labirynt[ruch_x-1][ruch_y]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   gra=false;

               }
           }
           break;
        case 80:                //strzalka w dol
            {
                if(labirynt[ruch_x+1][ruch_y]==0)
               {
                   labirynt[ruch_x+1][ruch_y]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   ruch_x=ruch_x+1;
               }
               if(labirynt[ruch_x+1][ruch_y]==3)
               {
                   labirynt[ruch_x+1][ruch_y]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   gra=false;
               }
            }
            break;
        case 75:        //strzalka w lewo
            {
            if(labirynt[ruch_x][ruch_y-1]==0)
               {
                   labirynt[ruch_x][ruch_y-1]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   ruch_y=ruch_y-1;
               }
            if(labirynt[ruch_x][ruch_y-1]==3)
            {
                    labirynt[ruch_x][ruch_y-1]=2;
                    labirynt[ruch_x][ruch_y]=0;
                    gra=false;
            }
            }
            break;
        case 77:        //strzalka w prawo
            {
                if(labirynt[ruch_x][ruch_y+1]==0)
               {
                   labirynt[ruch_x][ruch_y+1]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   ruch_y=ruch_y+1;
               }
               if(labirynt[ruch_x][ruch_y+1]==3)
               {
                   labirynt[ruch_x][ruch_y+1]=2;
                   labirynt[ruch_x][ruch_y]=0;
                   gra=false;
               }
            }
            break;
        }
    }
}

void poziom2()
{
    string nastepny="Gratulacje! Udalo ci sie przejsc poziom 1!";
    cout<<endl<<"\t\t\t\t       ";

    for(int i=0;i<42;i++)
    {
        Sleep(50);
        cout<<nastepny[i];
    }
    cout<<endl<<endl<<"\t\t\t\t  ";

    string kliknij="Kliknij dowolny przycisk, zeby przejsc do poziomu 2";

    for(int i=0;i<51;i++)
    {
        Sleep(50);
        cout<<kliknij[i];
    }

    getch();
}

void koniec_gry()
{
    string koniec="Gratulacje! Koniec gry!";
    cout<<endl<<"\t\t\t\t\t\t";
    for(int i=0;i<23;i++)
    {
        Sleep(50);
        cout<<koniec[i];
    }
    cout<<endl<<endl<<endl;
}

void ustaw_kursor(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}

void ukryj_kursor()
{
    HANDLE hConsoleOut =::GetStdHandle( STD_OUTPUT_HANDLE );
    CONSOLE_CURSOR_INFO hCCI;
    GetConsoleCursorInfo( hConsoleOut, & hCCI );
    hCCI.bVisible = FALSE;
    SetConsoleCursorInfo( hConsoleOut, & hCCI );
}

int main ()

{
    start_gry();

   while(gra1)
    {
     ustaw_kursor(0,0);
     ukryj_kursor();
     wypisz_labirynt1();
     ruch1();
    }
     ustaw_kursor(0,0);
     wypisz_labirynt1();

     poziom2();

     system("cls");


     while(gra)
     {
     ustaw_kursor(0,0);
     ukryj_kursor();
     wypisz_labirynt();
     ruch();
     }
     ustaw_kursor(0,0);
     wypisz_labirynt();

    koniec_gry();

    getch();

}

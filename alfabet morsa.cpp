#include <iostream>

using namespace std;


int main()
{
    string wyraz;

    while(getline(cin,wyraz))
    {
        for(int i=0;i<wyraz.length();i++)
        {

            switch(wyraz[i])
            {
            case 'a':
                cout<<".-/";
                break;
            case 'A':
                cout<<".-/";
                break;
            case 'b':
                cout<<"-.../";
                break;
            case 'B':
                cout<<"-.../";
                break;
            case 'c':
                cout<<"-.-./";
                break;
            case 'C':
                cout<<"-.-./";
                break;
            case 'd':
                cout<<"-../";
                break;
            case 'D':
                cout<<"-../";
                break;
            case 'e':
                cout<<"./";
                break;
            case 'E':
                cout<<"./";
                break;
            case 'f':
                cout<<".-../";
                break;
            case 'F':
                cout<<".-../";
                break;
            case 'g':
                cout<<"--./";
                break;
            case 'G':
                cout<<"--./";
                break;
            case 'h':
                cout<<"..../";
                break;
            case 'H':
                cout<<"..../";
                break;
            case 'i':
                cout<<"../";
                break;
            case 'I':
                cout<<"../";
                break;
            case 'j':
                cout<<".---/";
                break;
            case 'J':
                cout<<".---/";
                break;
            case 'k':
                cout<<"-.-/";
                break;
            case 'K':
                cout<<"-.-/";
                break;
            case 'l':
                cout<<"..-./";
                break;
            case 'L':
                cout<<"..-./";
                break;
            case 'm':
                cout<<"--/";
                break;
            case 'M':
                cout<<"--/";
                break;
            case 'n':
                cout<<"-./";
                break;
            case 'N':
                cout<<"-./";
                break;
            case 'o':
                cout<<"---/";
                break;
            case 'O':
                cout<<"---/";
                break;
            case 'p':
                cout<<".--./";
                break;
            case 'P':
                cout<<".--./";
                break;
            case 'q':
                cout<<"--.-/";
                break;
            case 'Q':
                cout<<"--.-/";
                break;
            case 'r':
                cout<<".-./";
                break;
            case 'R':
                cout<<".-./";
                break;
            case 's':
                cout<<".../";
                break;
            case 'S':
                cout<<".../";
                break;
            case 't':
                cout<<"-/";
                break;
            case 'T':
                cout<<"-/";
                break;
            case 'u':
                cout<<"..-/";
                break;
            case 'U':
                cout<<"..-/";
                break;
            case 'v':
                cout<<"...-/";
                break;
            case 'V':
                cout<<"...-/";
                break;
            case 'w':
                cout<<".--/";
                break;
            case 'W':
                cout<<".--/";
                break;
            case 'x':
                cout<<"-..-/";
                break;
            case 'X':
                cout<<"-..-/";
                break;
            case 'y':
                cout<<"-.--/";
                break;
            case 'Y':
                cout<<"-.--/";
                break;
            case 'z':
                cout<<"--../";
                break;
            case 'Z':
                cout<<"--../";
                break;
            case ' ':
                cout<<"/";
                break;
            }
        }
        cout<<endl;
    }
    return 0;

}

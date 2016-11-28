#include <iostream>

using namespace std;

int main ()
{
string wyraz;
int ile;
int ii=0;
int tab[52]={0};
int dlugosc;
cin>>ile;
while(ii<=ile)
{
    getline(cin,wyraz);
    dlugosc=wyraz.length();
    for(int du=0;du<dlugosc;du++)
    {


        if(wyraz[du]=='a')tab[0]++;
        if(wyraz[du]=='b')tab[1]++;
        if(wyraz[du]=='c')tab[2]++;
        if(wyraz[du]=='d')tab[3]++;
        if(wyraz[du]=='e')tab[4]++;
        if(wyraz[du]=='f')tab[5]++;
        if(wyraz[du]=='g')tab[6]++;
        if(wyraz[du]=='h')tab[7]++;
        if(wyraz[du]=='i')tab[8]++;
        if(wyraz[du]=='j')tab[9]++;
        if(wyraz[du]=='k')tab[10]++;
        if(wyraz[du]=='l')tab[11]++;
        if(wyraz[du]=='m')tab[12]++;
        if(wyraz[du]=='n')tab[13]++;
        if(wyraz[du]=='o')tab[14]++;
        if(wyraz[du]=='p')tab[15]++;
        if(wyraz[du]=='q')tab[16]++;
        if(wyraz[du]=='r')tab[17]++;
        if(wyraz[du]=='s')tab[18]++;
        if(wyraz[du]=='t')tab[19]++;
        if(wyraz[du]=='u')tab[20]++;
        if(wyraz[du]=='v')tab[21]++;
        if(wyraz[du]=='w')tab[22]++;
        if(wyraz[du]=='x')tab[23]++;
        if(wyraz[du]=='y')tab[24]++;
        if(wyraz[du]=='z')tab[25]++;
        if(wyraz[du]=='A')tab[26]++;
        if(wyraz[du]=='B')tab[27]++;
        if(wyraz[du]=='C')tab[28]++;
        if(wyraz[du]=='D')tab[29]++;
        if(wyraz[du]=='E')tab[30]++;
        if(wyraz[du]=='F')tab[31]++;
        if(wyraz[du]=='G')tab[32]++;
        if(wyraz[du]=='H')tab[33]++;
        if(wyraz[du]=='I')tab[34]++;
        if(wyraz[du]=='J')tab[35]++;
        if(wyraz[du]=='K')tab[36]++;
        if(wyraz[du]=='L')tab[37]++;
        if(wyraz[du]=='M')tab[38]++;
        if(wyraz[du]=='N')tab[39]++;
        if(wyraz[du]=='O')tab[40]++;
        if(wyraz[du]=='P')tab[41]++;
        if(wyraz[du]=='Q')tab[42]++;
        if(wyraz[du]=='R')tab[43]++;
        if(wyraz[du]=='S')tab[44]++;
        if(wyraz[du]=='T')tab[45]++;
        if(wyraz[du]=='U')tab[47]++;
        if(wyraz[du]=='V')tab[48]++;
        if(wyraz[du]=='W')tab[48]++;
        if(wyraz[du]=='X')tab[49]++;
        if(wyraz[du]=='Y')tab[50]++;
        if(wyraz[du]=='Z')tab[51]++;
    }
    if(tab[0]!=0)cout<<"a"<<" "<<tab[0]<<endl;
    if(tab[1]!=0)cout<<"b"<<" "<<tab[1]<<endl;
    if(tab[2]!=0)cout<<"c"<<" "<<tab[2]<<endl;
    if(tab[3]!=0)cout<<"d"<<" "<<tab[3]<<endl;
    if(tab[4]!=0)cout<<"e"<<" "<<tab[4]<<endl;
    if(tab[5]!=0)cout<<"f"<<" "<<tab[5]<<endl;
    if(tab[6]!=0)cout<<"g"<<" "<<tab[6]<<endl;
    if(tab[7]!=0)cout<<"h"<<" "<<tab[7]<<endl;
    if(tab[8]!=0)cout<<"i"<<" "<<tab[8]<<endl;
    if(tab[9]!=0)cout<<"j"<<" "<<tab[9]<<endl;
    if(tab[10]!=0)cout<<"k"<<" "<<tab[10]<<endl;
    if(tab[11]!=0)cout<<"l"<<" "<<tab[11]<<endl;
    if(tab[12]!=0)cout<<"m"<<" "<<tab[12]<<endl;
    if(tab[13]!=0)cout<<"n"<<" "<<tab[13]<<endl;
    if(tab[14]!=0)cout<<"o"<<" "<<tab[14]<<endl;
    if(tab[15]!=0)cout<<"p"<<" "<<tab[15]<<endl;
    if(tab[16]!=0)cout<<"q"<<" "<<tab[16]<<endl;
    if(tab[17]!=0)cout<<"r"<<" "<<tab[17]<<endl;
    if(tab[18]!=0)cout<<"s"<<" "<<tab[18]<<endl;
    if(tab[19]!=0)cout<<"t"<<" "<<tab[19]<<endl;
    if(tab[20]!=0)cout<<"u"<<" "<<tab[20]<<endl;
    if(tab[21]!=0)cout<<"v"<<" "<<tab[21]<<endl;
    if(tab[22]!=0)cout<<"w"<<" "<<tab[22]<<endl;
    if(tab[23]!=0)cout<<"x"<<" "<<tab[23]<<endl;
    if(tab[24]!=0)cout<<"y"<<" "<<tab[24]<<endl;
    if(tab[25]!=0)cout<<"z"<<" "<<tab[25]<<endl;
    if(tab[26]!=0)cout<<"A"<<" "<<tab[26]<<endl;
    if(tab[27]!=0)cout<<"B"<<" "<<tab[27]<<endl;
    if(tab[28]!=0)cout<<"C"<<" "<<tab[28]<<endl;
    if(tab[29]!=0)cout<<"D"<<" "<<tab[29]<<endl;
    if(tab[30]!=0)cout<<"E"<<" "<<tab[30]<<endl;
    if(tab[31]!=0)cout<<"F"<<" "<<tab[31]<<endl;
    if(tab[32]!=0)cout<<"G"<<" "<<tab[32]<<endl;
    if(tab[33]!=0)cout<<"H"<<" "<<tab[33]<<endl;
    if(tab[34]!=0)cout<<"I"<<" "<<tab[34]<<endl;
    if(tab[35]!=0)cout<<"J"<<" "<<tab[35]<<endl;
    if(tab[36]!=0)cout<<"K"<<" "<<tab[36]<<endl;
    if(tab[37]!=0)cout<<"L"<<" "<<tab[37]<<endl;
    if(tab[38]!=0)cout<<"M"<<" "<<tab[38]<<endl;
    if(tab[39]!=0)cout<<"N"<<" "<<tab[39]<<endl;
    if(tab[40]!=0)cout<<"O"<<" "<<tab[40]<<endl;
    if(tab[41]!=0)cout<<"P"<<" "<<tab[41]<<endl;
    if(tab[42]!=0)cout<<"Q"<<" "<<tab[42]<<endl;
    if(tab[43]!=0)cout<<"R"<<" "<<tab[43]<<endl;
    if(tab[44]!=0)cout<<"S"<<" "<<tab[44]<<endl;
    if(tab[45]!=0)cout<<"T"<<" "<<tab[45]<<endl;
    if(tab[46]!=0)cout<<"U"<<" "<<tab[46]<<endl;
    if(tab[47]!=0)cout<<"V"<<" "<<tab[47]<<endl;
    if(tab[48]!=0)cout<<"W"<<" "<<tab[48]<<endl;
    if(tab[49]!=0)cout<<"X"<<" "<<tab[49]<<endl;
    if(tab[50]!=0)cout<<"Y"<<" "<<tab[50]<<endl;
    if(tab[51]!=0)cout<<"Z"<<" "<<tab[51]<<endl;






    ii++;
}

    return 0;
}


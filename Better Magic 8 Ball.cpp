#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string myAnswer[]{
"It is certain",
"It is decidedly so",
"Without a doubt",
"Yes, definitely",
"You may rely on it",
"As I see it, yes",
"Most likely",
"Outlook good",
"Yes",
"Signs point to yes",
"Reply hazy try again",
"Ask again later",
"Better not tell you now",
"Cannot predict now",
"Concentrate and ask again",
"Don't count on it",
"My reply is no",
"My sources say no",
"Outlook not so good",
"Very doubtful",};

int randIndex(){
srand(time(0));
    for(int x=0;x<=19;x++){
    return 1+(rand()%19);}
    }


int main(){
cout << "Ask the great 8_Ball9000 your question." << endl;
string mystr;
getline(cin, mystr);
cout << myAnswer[randIndex()] << endl;
return 0;
}

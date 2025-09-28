//ask how many glasses
//calculate current total
//total-current=needed

#include <iostream>
using namespace std;

int main()
{
    int glasses, current; //creat variables to store glasses left and current drank
    cout << "How many classes of water have you had?" << endl; 
    cin>>current; //user inputs how many glasses theyve had
    glasses=7-current; //calculate glasses left to drink
    if(current>=glasses){ //if user has drank 7 or more glasses
        cout<<"Congratulations! You've hit your water goal for the day! Stay hydrated!"<<endl;
    }
    else if(current<3){ //if user has had under 3 glasses
        cout<<"You are falling behind! Drink more water! You have "<<glasses<<" glasses left to drink."<<endl;
    }
    else if(current>3 && current<7){ //if user has had between 3 and 7 glasses
        cout<<"You're doing well! Keep it up! You still have "<<glasses<<" glass(es) left to drink"<<endl;
    }
    else{ //if user inputs a noninteger
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
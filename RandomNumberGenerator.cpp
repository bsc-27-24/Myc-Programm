#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int daysUntilExpiration = rand() % 12;
     cout << "Days Until Expiration: " << daysUntilExpiration << endl;
    if (daysUntilExpiration == 0){
       cout << " Your subscription has expires"<< endl;
    }
    else if(daysUntilExpiration ==1){
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20% ";
    }
    else if (daysUntilExpiration <=5){
        cout << "Your subscription expire in : " << daysUntilExpiration << endl;
        cout << "Renew now and save 10% "; 
    }
    else if (daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon. Renew now!"<< endl;
    }else{
        cout << "You have an active subscription";
    }
    return 0;
}
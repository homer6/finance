
#include <iostream>

#include "timeline.hpp"


using namespace std;


int main( int, char ** ){

    cout << "Main Insight: A dollar today is worth more an a dollar tomorrow." << endl;
    cout << "The passage of time, by itself, has value." << endl;
    cout << "What captures the time value of money is interest rate, which is the relationship between to today and tomorrow.  " << endl;
    cout << "We're going to assume that this rate is positive." << endl;
    cout << endl;

    cout << "Example: Suppose a bank pays a 10% interest rate per year and you are given a choice between two plans:" << endl;
    cout << "A: Receive $100 today." << endl;
    cout << "B: Receive $100 in a year." << endl;
    cout << endl;

    cout << "Example: Suppose a bank pays a 10% interest rate per year and you are given a choice between two plans:" << endl;
    cout << "A: Receive $100 today." << endl;
    cout << "B: Receive $100 in a year." << endl;
    cout << endl;

    Timeline timeline;

    timeline.setSteps( 25 );
    timeline.setPresentValue( 30000 );
    timeline.setRate( 0.03 );
    timeline.setPaymentAmount( 30000 );

    timeline.show();

    return 0;

}

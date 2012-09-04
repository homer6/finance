
#ifndef CLASS_TIMELINE
#define CLASS_TIMELINE


#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;




class Timeline{


    public:
        Timeline()
            :steps( -1 ), rate( -1 ), present_value( -1 ), future_value( -1 ), payment_amount( 0.0 )
        {



        }

        void setSteps( int steps ){
            this->steps = steps;
        }
        int getSteps(){
            if( this->steps == -1 ){
                //solve for steps
            }
            return this->steps;
        }


        void setRate( double rate ){
            this->rate = rate;
        }
        double getRate(){
            if( this->rate == -1 ){
                //solve for rate
            }
            return this->rate;
        }


        void setPresentValue( double present_value ){
            this->present_value = present_value;
        }
        double getPresentValue(){
            if( this->present_value == -1 ){
                //solve for present_value
            }
            return this->present_value;
        }


        void setFutureValue( double future_value ){
            this->future_value = future_value;
        }
        double getFutureValue(){

            if( this->future_value == -1 ){
                //solve for future_value

                int x = 0;
                int number_of_steps = this->getSteps();
                if( number_of_steps < x ){
                    throw range_error( "Number of steps must be larger than 0." );
                }

                double temp_value = this->getPresentValue();
                double current_rate = this->getRate();

                for( ; x < number_of_steps; ++x ){

                    temp_value += ( temp_value * current_rate ) + this->getPaymentAmount();

                }

                this->future_value = temp_value;

            }
            return this->future_value;

        }


        void setPaymentAmount( double payment_amount ){
            this->payment_amount = payment_amount;
        }
        double getPaymentAmount(){
            return this->payment_amount;
        }


        void show(){

            cout << "Present Value: " << this->getPresentValue() << endl;
            cout << "Future Value: " << this->getFutureValue() << endl;
            cout << "Rate: " << this->getRate() << endl;
            cout << "Number of Steps: " << this->getSteps() << endl;

            int x = 0;
            int number_of_steps = this->getSteps();
            if( number_of_steps < x ){
                throw range_error( "Number of steps must be larger than 0." );
            }

            for( ; x < number_of_steps; ++x ){
                cout << "I------";
            }
            cout << "I" << endl;

        }



    protected:

        int steps;
        double rate;
        double present_value;
        double future_value;
        double payment_amount;

};


#endif

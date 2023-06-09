#include <iostream>
#include "../inc/RationalNumber.h"

int main() {

    int wholeNum = 2;
    int denominator = 4;

    bool continuePrompt = true;

    while(continuePrompt)
    {
        std::string input;

        std::cout<<"Enter in a rational Number: (enter 'q' if want to quit) "<<endl;
        std::cin>>input;
        if(input == "q")
        {
            continuePrompt = false;
            continue;
        }

        RationalNumber RN1 = RationalNumber();

        RN1.isValidNumber(input);

        std::cout<<RN1;

        // Creating second rational Number
        std::cout<<"\nEnter in another rational Number: (enter 'q' if want to quit) "<<endl;
        std::cin>>input;
        if(input == "q")
        {
            continuePrompt = false;
            continue;
        }

        RationalNumber RN2 = RationalNumber();


        if(!RN2.isValidNumber(input))
        {
            std:cout<<"Invalid input. Please enter a Rational Number: "<<endl;
            std::cin>>input;

            RationalNumber RN2 = RationalNumber(input);
        };

        std::cout<<RN2<<endl;

        std::cout<<"Adding Rational Numbers"<<endl;
        RationalNumber RN3 = RN1 + RN2;

        std::cout<<RN3<<endl;

        std::cout<<"Subtracting Rational Numbers"<<endl;
        RationalNumber RN4 = RN3 - RN1;

        std::cout<<RN4<<endl;

        std::cout<<"Dividing Rational Numbers"<<endl;
        RationalNumber RN5 = RN4 / RN2;

        std::cout<<RN5<<endl;

        std::cout<<"Multiplying Rational Numbers"<<endl;
        RationalNumber RN6 = RN5 * RN4;

        std::cout<<RN6<<endl;

        std::cout<<"Comparing Rational Numbers"<<endl;
        if(RN6 > RN3){
            std::cout<<"RN6 is greater than RN3"<<endl;
            std::cout<<RN6<<endl;
        } else if (RN6 < RN3) {
            std::cout<<"RN6 is less than RN3"<<endl;
            std::cout<<RN6<<endl;
        } else if (RN6 == RN3) {
            std::cout<<"RN6 is equal to RN3"<<endl;
            std::cout<<RN6<<endl;
        } else {
            std::cout<<"RN6 is not equal to RN3"<<endl;
            std::cout<<RN6<<endl;
        }

        std::cout<<"Displaying Whole Number Constructor"<<endl;
        RationalNumber RN7 = RationalNumber(wholeNum);
        std::cout<<RN7<<endl;

        std::cout<<"Displaying Two Int Argument Constructor"<<endl;
        RationalNumber RN8 = RationalNumber(wholeNum, denominator);
        std::cout<<RN8<<endl;

//        RationalNumber RN = RationalNumber(); // default construtor
//
//        RationalNumber RN3 = RationalNumber(strFraction);
//
//        RationalNumber RN4 = RationalNumber(posNumerator, posDenominator);
//
//        RationalNumber RN5 = RN3 + RN4;
//
//        RationalNumber RN6 = RN5 * RN3;
    }



    return 0;
}

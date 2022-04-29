#include <iostream>

using namespace std;

int main() 
{
    char middle_inital {'J'};
    cout << "My middle initial is " << middle_inital << endl;
    
    unsigned short int exam_score {55}; // same as usigned short exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "PI is  " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    bool game_over {true};
    cout << "the value of gameOver is " << game_over << endl;
    
    /**********
     * Overflow examples
     * ********/
     
     short value1 {30000};
     short value2 {1000};
     short product {value1 * value2};
     
     cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

    
    return 0;
}
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    const unsigned short int spaceship_model = 2023;

    const float spaceship_height_in_meter = 13.004;

    const double speed_of_spaceship_in_km_per_hour = 1600;

    const double distance_spaceship_travelled_in_km = 8576473;

    cout << "Spaceship model : " << spaceship_model << endl;
    cout << "Spaceship height : " << spaceship_height_in_meter << " Meter " << endl;

    cout << "Speed of Spaceship : " << speed_of_spaceship_in_km_per_hour << " Km/h" << endl;

    cout << "Total distance by Spaceship : " << distance_spaceship_travelled_in_km << endl;

    return 0;
}
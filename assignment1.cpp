#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double level; 
    const int CAPACITY = 1000;
    const int SENTINEL = 6;
    int option;
    std::string status;

    cout << "Please enter the current water level: "; //input current water level
    cin >> level;

    do {
        cout << "--------------------------------------------------" << '\n';
        cout << "Please select 1-6:\n"   //display options
             << "1: View current water level\n" 
             << "2: Add water to the tank\n"
             << "3: Use water for irrigation\n"
             << "4: Check system status\n"
             << "5: Simulate daily changes over time\n"
             << "6: Exit\n";
        cout << "Your option is: ";   
        cin >> option;
        cout << "--------------------------------------------------" << '\n';


        switch (option) {
            case 1:
                cout << "Current water level (L): "
                     << fixed << setprecision(2) << level << endl; //set to 2 decimal places
                break;

            case 2: {
                double add;
                cout << "Please enter water to be added to the tank (L): ";
                cin >> add;
                if (add + level > CAPACITY) {
                    cout << "Your water tank overflows" << endl; //alert user when water overflows
                    break;
                }
                level += add;
                break;
            }

            case 3: {
                double irrigation;
                cout << "Please enter water to be used for irrigation (L): ";
                cin >> irrigation;
                if (level < irrigation) {
                    cout << "Your water is not sufficient" << endl; //alert user when water insufficient
                    break;
                }
                level -= irrigation;
                break;
            }

            case 4: { //check status 
                if (level < 200) {
                    status = "Low level warning";
                } else if (level > 900) {
                    status = "Overflow alert";
                } else {
                    status = "Normal";
                }
                cout << "System status: " << status << endl;
                break;
            }

            case 5: { 
                int days;
                double daily_inflow, daily_outflow, evap_percent;

                cout << "Number of days: ";
                cin >> days;
                cout << "Daily inflow (L): ";
                cin >> daily_inflow;
                cout << "Daily outflow (L): ";
                cin >> daily_outflow;
                cout << "Evaporation per day (% of current level): ";
                cin >> evap_percent;

                for (int d = 1; d <= days; ++d) {
                    double start = level;

                    //Add daily inflow 
                    level += daily_inflow;
                    if (level > CAPACITY){
                        level = CAPACITY;
                    }

                    //Subtract daily outflow
                    if (daily_outflow > level) {
                        cout << "Day " << d << " | Start: " << start
                             << " | +In: " << daily_inflow
                             << " | -Out: BLOCKED (insufficient)" //block when water insufficient
                             << " | -Evap: 0.00"
                             << " | End: " << level << " L\n";
                        continue;
                    }
                    level -= daily_outflow;

                    //calculate evaporation litre
                    double evap = level * (evap_percent / 100.0);
                    level -= evap;

                    //Clamp to [0, 1000]
                    if (level < 0){
                        level = 0;
                    }
                    if (level > CAPACITY){
                        level = CAPACITY;
                    }

                    cout << "Day " << d
                         << " | Start: " << start
                         << " | +In: " << daily_inflow
                         << " | -Out: " << daily_outflow
                         << " | -Evap: " << evap
                         << " | End: " << level << " L\n";
                }
                break;

            default: //out of option range
                if(option == 6){
                    cout << "Thank you for using the water tank monitoring system ! " << endl ; 
                }
                else{
                    cout << "Invalid option!" << endl;
                    break;
                }
            }
        }
        cout << "--------------------------------------------------" << '\n';
    } while (option != SENTINEL);
    //loop the menu until option = 6 

    return 0;
}

#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

double dydt(double t, double y) {
    // Define the ODE here, for example:
    return -2 * y + t;
}

int main(int argc, char* argv[]) {
    double t0 = 0;   // Initial time
    double y0 = 1;   // Initial value
    double h = 0.1;  // Step size
    double tn = 2;   // Final time

    int opt;
    while ((opt = getopt(argc, argv, "t:y:h:n:")) != -1) {
        switch (opt) {
            case 't':
                t0 = atof(optarg);
                break;
            case 'y':
                y0 = atof(optarg);
                break;
            case 'h':
                h = atof(optarg);
                break;
            case 'n':
                tn = atof(optarg);
                break;
            default:
                cout << "Usage: " << argv[0] << " -t initial_time -y initial_value -h step_size -n final_time" << endl;
                return 1;
        }
    }

    // Open the output file
    ofstream output("output.csv");

    // Write the header to the file
    output << "t,y" << endl;

    // Euler method
    double t = t0;
    double y = y0;
    while (t <= tn) {
        output << t << "," << y << endl;  // Write the current values to the file

        y = y + h * dydt(t, y);  // Update y
        t = t + h;               // Update t
    }

    // Close the output file
    output.close();

    return 0;
}
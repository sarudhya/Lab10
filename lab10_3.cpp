#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;



int main()

{
        int count = 0;
        double sum,sum_of_square,mean;
        string textline;
        ifstream source;
        source.open("score.txt");
        while(getline(source,textline))
        {
                sum += atof(textline.c_str());
                sum_of_square += pow(atof(textline.c_str()),2);
                count++;
        }

        mean = sum/count;
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum/count << "\n";
        cout << "Standard deviation = " << sqrt((sum_of_square/count) - (pow(mean,2)));
}
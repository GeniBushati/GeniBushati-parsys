#include <iostream>
#include <cstdlib>     
#include <ctime>        
#include <cmath>       
using namespace std;

double dist(double x, double y)
{
    double throwDist;
    throwDist = sqrt(x*x +y*y);
    return throwDist;
}

double pie(int numThrows, double a)
{
    double pieValue = a / numThrows;
    return pieValue;
}

int main()
{
    double coord_x, coord_y, test;
    srand(time(NULL));    

    test = rand() / double(RAND_MAX);

    double throwDist;       

    double a = 0;           
    int numThrows;   
    cout<< "Number of datapoints: ";
    cin>> numThrows;

    //creates 2 random numbers 'n' times
    for(int i = 1; i <= numThrows; i++)
    {
        coord_x = (double)rand() / (RAND_MAX); 
        coord_y = (double)rand() / (RAND_MAX); 
        throwDist = dist(coord_x, coord_y);

        //check if the dart is thrown inside the circle i.e radius is less than 1
        if(throwDist <= 1)
        {
            a++;
        }
    }

    double pieCalc =4* pie(numThrows, a); //

    cout<< "The value of PI is: " << pieCalc;
return 0;
}

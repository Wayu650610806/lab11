#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string x;
    int i=0;
    double mean=0,sd=0;
    while(getline(source,x)){
        mean+=atof(x.c_str());
        sd+=pow(atof(x.c_str()),2);
		i++;
	}
    mean/=i;
    sd/=i;
    sd=pow(sd-pow(mean,2),0.5);

    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd;
}
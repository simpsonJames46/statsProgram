#include <iostream>
#include <vector>
#include <string>

using namespace std;

double median = 0;
string input = "";
vector <double> dataSet;
vector <double> aboveMedian;
vector <double> belowMedian;

void sortData() {
    int place1 = 0;
    int place2 = 1;
    bool swapsPerformed = false;
    while (swapsPerformed == false) {
        swapsPerformed = false;
        for (auto i : dataSet) {
            if (dataSet[place2] < dataSet[place1]) {
                float tmp = dataSet[place1];
                dataSet[place1] = dataSet[place2];
                dataSet[place2] = tmp;
                place1++;
                place2++;
                swapsPerformed = true;
            }
        }
        for (auto i : dataSet) {
            cout << dataSet[i] << " " << endl;
        }
    }
}

void dataInput() {
    cin >> input;
    if (input == "complete") {
        sortData();
    }
    else {
        dataSet.push_back(stod(input));
        dataInput();
    }
}

int main()
{
    cout << "Please input your data values, enter 'complete' when finished:";
    dataInput();
    
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

 /*    string resultFile;
 // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun weel er enough!";


//this read the file to the console
ifstream MyFile("filename.txt");
while(getline(MyFile,resultFile)){
    cout<<resultFile;
}
  // Close the file
  MyFile.close();
  */

    string Fname,Lname,dePartment;
  double monthlySalary,bonusMonthlyPercent,taxPercent,payCheck,distanceTravel,travelingTime,speedAverage,numberOfCoffeeSold,costPerCupSold,saleAmount,taxedInc;

    // Write your main here
    ofstream outFile("outData");
    ifstream inFile("inData");

    inFile.open("inData.txt");
     outFile.open("outData.txt");

    inFile>>Fname>>Lname>>dePartment;
    outFile<<"name: "<<Fname<<" "<<Lname<<","<<" department: "<<dePartment<<endl;

    inFile>>monthlySalary>>bonusMonthlyPercent>>taxPercent;
    outFile<< "Monthly Gross Salary: $" << setprecision (2) << fixed << monthlySalary<< ", " << "Monthly Bonus: " << setprecision (2) << fixed << bonusMonthlyPercent << "%, " << "Taxes: " << setprecision (2) << fixed << taxPercent<< "%\n";
	taxPercent = monthlySalary-(monthlySalary*(taxPercent/100));
	payCheck=taxedInc+(taxedInc*(bonusMonthlyPercent/100));

	outFile<<"paycheck: $"<< setprecision (2) << fixed << payCheck << endl << endl;
    inFile>>distanceTravel>>travelingTime;
    outFile<<"Travel distance: " << setprecision (2) << fixed << distanceTravel << ", " << " Travel time: " << setprecision (2) << fixed << travelingTime<< " hours\n";

    speedAverage=distanceTravel/travelingTime;

    outFile << "Average speed: " << setprecision (2) << fixed << speedAverage << endl << endl;
    inFile >> numberOfCoffeeSold >> costPerCupSold;

    outFile << "Number of Coffee Cups Sold: " << numberOfCoffeeSold << ", " << " Cost: $" << setprecision (2) << fixed << costPerCupSold << " per cup\n";
    saleAmount=numberOfCoffeeSold*costPerCupSold;

    outFile << "Sales Amount = $" << setprecision (2) << fixed << saleAmount << endl;

	inFile.close();
    outFile.close();


return 0;

}

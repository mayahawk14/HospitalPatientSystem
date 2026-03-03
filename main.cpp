#include <iostream>

using namespace std;

char getPatientType(){
    char patientType;
    cout << "In-patient or Out-patient? Type i for in or o for out: " << endl;
    cin >> patientType;
    return patientType;
}
double patientCharges(int days, double rate, double med, double serv){ // In-patient
    //days spent, daily rate, hospital medication charges, hospital services

    double total = days * rate;
    total += med + serv;
    
    return total;
}
double patientCharges(double med, double serv){ // Out-patient
    //hospital services, medication
    double total = med + serv;
    return total;
}
bool negNum(double var){
    if (var >= 0) {
        ;
        return true;
    }
    else {
        cout << "Cannot accept negative numbers for data." << endl;
        return false;
    }
}

int main() {
    
    int days;
    double rate;
    double med;
    double serv;

    
    if (getPatientType() == 'i') {
     
        while (true) {
            cout << "How many days was spent in the hospital?: ";
            cin >> days;
            if (negNum(days));
            else continue;
            
            cout << "What was the daily rate?: ";
            cin >> rate;
            if (negNum(rate));
            else continue;
            
            cout << "What were the hospital medication charges?: ";
            cin >> med;
            if (negNum(med));
            else continue;
            
            cout << "What were the charges for hospital services?: ";
            cin >> serv;
            if (negNum(serv));
            else continue;
            
            break;
        }
        
        cout << "Total Charges: " << patientCharges(days,rate,med,serv) << endl;
    }
    else {
        while (true){
            cout << "What were the hospital medication charges?: ";
            cin >> med;
            if (negNum(med));
            else continue;
            
            cout << "What were the charges for hospital services?: ";
            cin >> serv;
            if (negNum(serv));
            else continue;
            
            break;
            
        }
        cout << "Total Charges: " << patientCharges(med,serv) << endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

double calculateTax(double income) {
    double tax = 0;

    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    }
    else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    return tax;
}

int main() {
    double salary, elss, homeLoan, totalDeduction, taxableIncome, tax;

    cout << "Enter your annual gross salary: ";
    cin >> salary;

    cout << "Enter ELSS investment amount: ";
    cin >> elss;

    cout << "Enter home loan principal amount: ";
    cin >> homeLoan;

    if (salary < 0 || elss < 0 || homeLoan < 0) {
        cout << " Error: Inputs cannot be negative\n";
        return 1;
    }
    totalDeduction = elss + homeLoan;
    if (totalDeduction > 150000) {
        totalDeduction = 150000;
    }

    if (totalDeduction > salary) {
        cout << " Error: Deductions cannot be more than salary\n";
        return 1;
    }
    taxableIncome = salary - totalDeduction;

    tax = calculateTax(taxableIncome);

    cout << fixed << setprecision(2);
    cout << "\n=== INCOME TAX SUMMARY ===\n";
    cout << "Gross Salary: " << salary << "\n";
    cout << "ELSS Investment: " << elss << "\n";
    cout << "Home Loan Principal: " << homeLoan << "\n";
    cout << "Total Deductions (max ₹1,50,000): " << totalDeduction << "\n";
    cout << "Taxable Income: " << taxableIncome << "\n";
    cout << "Total Tax Payable: " << tax << "\n";
    
    return 0;
}
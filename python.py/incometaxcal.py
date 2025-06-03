def calculate_tax(income):
    tax = 0

    if income <= 250000:
        tax = 0
    elif income <= 500000:
        tax = (income - 250000) * 0.05
    elif income <= 1000000:
        tax = (250000 * 0.05) + (income - 500000) * 0.20
    else:
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30

    return tax
try:
    salary = float(input("Enter your annual gross salary: "))
    elss = float(input("Enter ELSS investment amount: "))
    home_loan = float(input("Enter home loan principal amount: "))

    if salary < 0 or elss < 0 or home_loan < 0:
        print("❌ Error: Inputs cannot be negative.")
        exit()

    total_deduction = elss + home_loan
    if total_deduction > 150000:
        total_deduction = 150000

    if total_deduction > salary:
        print("❌ Error: Deductions cannot be more than salary.")
        exit()

    taxable_income = salary - total_deduction
    tax = calculate_tax(taxable_income)

    print("\n=== INCOME TAX SUMMARY ===")
    print(f"Gross Salary: ₹{salary:,.2f}")
    print(f"ELSS Investment: ₹{elss:,.2f}")
    print(f"Home Loan Principal: ₹{home_loan:,.2f}")
    print(f"Total Deductions (max ₹1,50,000): ₹{total_deduction:,.2f}")
    print(f"Taxable Income: ₹{taxable_income:,.2f}")
    print(f"Total Tax Payable: ₹{tax:,.2f}")

except ValueError:
    print("❌ Error: Please enter valid numeric values.")

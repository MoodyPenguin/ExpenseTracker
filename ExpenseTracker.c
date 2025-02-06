using System;
using System.Collections.Generic;

class ExpenseTracker {
    static List<double> expenses = new List<double>();

    static void Main() {
        AddExpense(10.5);
        AddExpense(25.0);
        AddExpense(5.75);

        double total = GetTotalExpenses();
        Console.WriteLine($"Total Expenses: ${total}");
    }

    static void AddExpense(double amount) {
        expenses.Add(amount);
    }

    static double GetTotalExpenses() {
        double total = 0;
        foreach (double expense in expenses) {
            total += expense;
        }
        return total;
    }
}

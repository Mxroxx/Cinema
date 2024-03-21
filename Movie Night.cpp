#include <iostream>
#include <iomanip>
#include <string>



// Function to display movie options
void movieList(){
    std::cout << "Welcome To Galaxy Cinema\n";
    std::cout << "=========================\n";
    std::cout << "Choose a movie:\n";
    std::cout << "1. Deadpool\n";
    std::cout << "2. Reacher\n";
    std::cout << "3. Star Wars Revenge Of The Sith\n";
    std::cout << "=========================\n";
}

int main(){
    //Declaring Pricing of the Tickets
    const double adultTicketPrice = 10.0;
    const double childTicketPrice = 3.0;
    const double donationPercentage = 0.10;
    
    //Get Number Of Sold Tickets
    int adultTickets = 0;
    int childTickets = 0;
    //Get User's Movie Choice
    int choice;

    movieList(); // Display available movies
    std::cout << "Choose a Movie From (1-3): ";
    std::cin >> choice;

    // Get Number of Adult and Child Tickets
    std::cout << "Enter number of adult tickets: ";
    std::cin >> adultTickets;
    std::cout << "Enter number of child tickets: ";
    std::cin >> childTickets;
    // Calculate total ticket price
    double grossAmount = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
    // Calculate donation amount
    double donationAmount = grossAmount * donationPercentage;
    // Calculate Net amount
    double netAmount = grossAmount - donationAmount;

    // Display ticket details
    std::cout << "\nTickets Details\n";
    std::cout << "=========================\n";
    switch (choice)
    {
    case 1:
    std::cout << "Movie: Deadpool\n";
        break;
    case 2:
    std::cout << "Movie: Reacher\n";
        break;
    case 3:
    std::cout << "Movie: Star Wars Revenge Of The Sith\n";
        break;
    default:
        std::cout << "Invalid choice\n";
        return 1;
    }
    std::cout << "Number Of Adult Tickets: " << adultTickets << '\n';
    std::cout << "Number Of Child Tickets: " << childTickets << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Gross Amount: $" << grossAmount << '\n';
    std::cout << "Donation amount: (10% of gross): $" << donationAmount << '\n';
    std::cout << "Net amount after donation: $" << netAmount << '\n';

return 0;
}


#include <iostream>



#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define WEEKDAY(num) DAY_##num

int main() {
  //  int n = 1;
    std::cout << "Input number day of week please!" << std::endl;
   // std::cin >> n;

    std::cout << WEEKDAY(3) << std::endl;
    return 0;
}

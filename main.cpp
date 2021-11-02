#include <iostream>



#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define WEEKDAY(num) ((num) == 1? DAY_1:((num)==2? DAY_2:((num)==3? DAY_3:((num)==4? DAY_4:((num)==5)? DAY_5:((num)==6? DAY_6: DAY_7)))))

#define WEEKDAY2(num) if((num)==1){ \
std::cout<<DAY_1 << std::endl;        \
} else if((num)==2){                \
std::cout<<DAY_2 << std::endl;         \
} else if((num)==3){                \
std::cout<<DAY_3 << std::endl;                    \
} else if((num)==4){                \
std::cout<<DAY_4 << std::endl;                    \
} else if((num)==5){                \
std::cout<<DAY_5 << std::endl;                    \
} else if((num)==6){                \
std::cout<<DAY_6 << std::endl;                    \
} else if((num)==7){                \
std::cout<<DAY_7 << std::endl;                    \
}



int main() {
   int n ;

    std::cout << "Input number day of week please!" << std::endl;
   std::cin >> n;


    std::cout << WEEKDAY(n) << std::endl;
    WEEKDAY2(n);
    return 0;
}

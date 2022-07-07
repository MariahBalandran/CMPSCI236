/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Date {
    private:
    	int month;
    	int day;
    	int year;
    
    public:
    	Date(int mm = 1, int dd = 1, int yyyy = 2014) {
    	    month = mm;
    	    day = dd;
    	    year = yyyy;
    	}
    
    	void setDate(int mm, int dd, int yy){
    	    month = mm;
    	    day = dd;
    	    year = yy;
    	}
    	
    	int getMonth() { return month; }
    	int getDay() { return day; }
    	int getYear() { return year; }
    
    	void showDate();
    
    	bool isLeapYear();
    	
    	long convert();
    	int dayOfWeek();
    	bool isWeekDay();
    	string nameOfDay();
    
    	bool operator==(const Date& date2);
    	bool operator>(const Date& date2);
    	bool operator+(int add);
};

void Date::showDate() {
	cout << "The date is " << setfill('0') << setw(2) << month << "/" << setw(2) <<day << "/" << setw(2) << year % 100 << endl;
}

bool Date::isLeapYear() {
	return ((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0);
}

bool Date::operator==(const Date& date2) {
	return (month == date2.month) && (day == date2.day) && (year == date2.year);
}

long Date::convert() {
	return long(year * 10000 + month * 100 + day);
}

bool Date::operator>(const Date& date2) {
	
	return convert() > long(date2.year * 10000 + date2.month * 100 + date2.day);
}

int Date::dayOfWeek() {

	int mm = month;
	int yy = year;

	if (mm < 3) {
		mm = mm + 12;
		yy = yy - 1;
	}

	int cc = int(yy / 100);	
	yy = yy % 100;	

	int T = day + int(26 * (mm + 1) / 10) + yy + int(yy / 4) + int(cc / 4) - 2 * cc;
	int dd = T % 7;

	if (dd < 0) {
		dd = dd + 7;
	}

	return dd;
}

bool Date::isWeekDay() {
    if(dayOfWeek() > 1) {
        return true;
    } else {
        return false;
    }
	
}

string Date::nameOfDay() {
    
    switch (dayOfWeek()){
        
        case 0:
            return "Saturday";
            break;
        
        case 1:
            return "Sunday";
            break;
        
        case 2:
            return "Monday";
            break;
        
        case 3:
            return "Tuesday";
            break;
        
        case 4:
            return "Wednesday";
            break;
        
        case 5:
            return "Thursday";
            break;
        
        case 6:
            return "Friday";
            break;
        
    }
    return "";
}

bool Date::operator+(int add) {
	
	int result = 0;
	
	int addYear = trunc((add/30)/12);
	
	int addMonth = trunc(add/30) - addYear*12;
	
	int addDay = add - addMonth*30 - addYear*30*12;
	
	year = year + addYear;
	
	if (month + addMonth > 12) {
	    month = (month + addMonth) - 12;
	    year++;
	} else {
	    month = month + addMonth;
	}
	
	if (day + addDay > 30) {
	    day = (day + addDay) - 30;
	    month++;
	} else {
	    day = day + addDay;
	}
	
	return result;
}


int main() {
    
    Date d1, d2(3,12,2011), d3(3,15,2011);
    
    d1.showDate();
    
    cout << "\nIs d1 larger than d2? " << ((d1 > d2) ? "Yes" : "No") << endl;
    
    if (d2.isWeekDay()) {
		cout << "\n" << d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear() << " is a week day" << endl;
	} else {
		cout << "\n" << d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear() << " is not a week day" << endl;
	}
	
	if (d3.isWeekDay()) {
		cout << "\n" << d3.getMonth() << "/" << d3.getDay() << "/" << d3.getYear() << " is a week day" << endl;
	} else {
		cout << "\n" << d3.getMonth() << "/" << d3.getDay() << "/" << d3.getYear() << " is not a week day" << endl;
	}
	
	cout << "\n" << d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear() << " is a " << d2.nameOfDay() << endl;
	
	cout << "\n" << d3.getMonth() << "/" << d3.getDay() << "/" << d3.getYear() << " is a " << d3.nameOfDay() << endl;
	
	cout << "\nAdd days to date: ";
	
	int num;
	
	cin >> num;
	
	cout << "\n" << d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear() << " plus " << num << " days is ";
	
	d2.operator+(num);
	
	cout << d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear() << endl;

    return 0;
}

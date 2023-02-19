class Solution {
    bool is_leap_year(int year)
    {
        return (year %4  == 0 && year % 100 != 0) || year % 400 == 0;
    }

    long long days(string date) {
    int y=0,m=0,d=0;
    long long res=0;
    y= stoi(date.substr(0,4));
    m = stoi(date.substr(5,2));
    d = stoi(date.substr(8,2));
    res+=d;
    while(--m)
    {
        if (m == 2) res+=is_leap_year(y) ? 29 : 28;
        else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ) res+=31;
        else res+=30;
    }
    while(--y)
    {
        res+=is_leap_year(y)?366:365;
    }
    return res;
}
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(days(date1)-days(date2));
    }
};
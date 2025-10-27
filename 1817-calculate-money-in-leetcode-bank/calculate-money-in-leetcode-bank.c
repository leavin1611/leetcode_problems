int totalMoney(int n) {

    int week=n/7;
    int rem=n%7;

    float totweek=(week/2.0)*(2*28+(week-1)*7);
    float days=(rem/2.0)*(2*(week+1)+(rem-1));

    return (int)(totweek+days);



    
}
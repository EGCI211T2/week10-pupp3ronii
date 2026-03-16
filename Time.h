struct Time{
    int m,h,s;
};


void getTime(Time &t){
    cin >> t.h >> t.m >> t.s;
}


Time subtract(Time t2, Time t1){
    Time t3;

    int sec1 = t1.h*3600 + t1.m*60 + t1.s;
    int sec2 = t2.h*3600 + t2.m*60 + t2.s;

    int diff = sec2 - sec1;

    if(diff < 0){
        diff += 24*3600;
    }

    t3.h = diff / 3600;
    diff %= 3600;

    t3.m = diff / 60;
    t3.s = diff % 60;

    return t3;
}


void display(Time t){
    cout << setw(2) << setfill('0') << t.h << ":"
         << setw(2) << setfill('0') << t.m << ":"
         << setw(2) << setfill('0') << t.s;
}
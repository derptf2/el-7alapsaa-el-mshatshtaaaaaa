#include <bits/stdc++.h>
#define shoohdy                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

struct date
{
    int day,month,year;
};

struct movie
{
    string name_movie;
    long long id;
    bool is_rented;
    float fees_per_day;
    float over_fees_per_day;
    vector<float> rating;
    float overall_rating;
    date current_date;
    int rented_days;
};

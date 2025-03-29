#pragma once
#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "USER.h"
using namespace std;

struct date
{
public:
    int day = 0;
    int month = 0;
    int year = 0;

};
struct movie
{
public:
    string name_movie = "0";
    long long id = 0;
    bool is_rented = 0;
    float fees_per_day = 0;
    float over_fees_per_day = 0;
    vector<float> rating{};
    float overall_rating = 0;
    date current_date;
    date due_date;
    int rented_days = 0;
    int customer_id = 0;
    static int count_movies();
    static void add_movies();
    static void list_of_movies();
    static void Rent_movie();
};

#endif


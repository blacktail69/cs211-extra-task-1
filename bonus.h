#pragma once
///Returns the number of seconds later that a time in secondstime_2 is than a time in seconds time_1.
double seconds_difference(double time_1, double time_2);
///Returns the number of hours later that a time in secondstime_2 is than a time in seconds time_1.
double hours_difference(double time_1, double time_2);
///Returns the total number of hours in the specified number of hours, minutes, and seconds.
double to_float_hours(int hours, int minutes, int seconds);
///Returns the hour as seen on a 24-hour clock.
double to_24_hour_clock(double hours);
///Returns the hours part of a time in seconds.
int get_hours(int seconds);
///Returns the minutes part of a time in seconds.
int get_minutes(int seconds);
///Returns the seconds part of a time in seconds.
int get_seconds(int seconds);
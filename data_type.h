#ifndef datatype
#define datatype

#include "base_type.h"

typedef struct _flight_record flight_record;
typedef struct _aircraft      aircraft;
typedef struct _airport       airport;
typedef struct _flight        flight;
typedef struct _ticket        ticket;
typedef struct _etkt          etkt;
typedef struct _date          date;
typedef struct _time          time;
typedef struct _date_time     date_time;

typedef struct _flight_record {
    u64       id;
    date_time takeoff_time;
    u32       takeoff_time_delay;
    date_time landing_time;
    u32       landing_time_delay;
    airport   takeoff_airport;
    airport   landing_airport;
    aircraft  aircraft_info;
    flight    flight_info;
    ticket    ticket_info;
} flight_record;

typedef struct _aircraft {
    text manufacture;
    text main_type;
    text sub_type;
    text owner;
    text regist_num;
} aircraft;

typedef struct _airport {
    text name;
    text iata_code;
    text icao_code;
    text rank;
    text city;
    text country;
} airport;

typedef struct _flight {
    text airlines;
    text airlines_prefix;
    text flight_num;
    text operate_airlines;
    text operate_airlines_prefix;
    text operate_flight_num;

    u64 duration;
    u64 distance;
    i16 delay_minutes;

    text boarding_gate;
    text arrival_gate;
} flight;

typedef struct _ticket {
    improved_float price;
    text currency;

    text sale_channel;

    text etkt;
    text pnr;

    text cabin_level;
    text cabin_class;

    i16 luggage_allowance;
    i16 luggage_weight;

    text seat_num;

    text id_type;
} ticket;

typedef struct _etkt {
    u16 airlines_prefix;
    u64 num_suffix;
} etkt;

typedef struct _date {
    u16 year;
    u8  month;
    u8  day;
} date;

typedef struct _time {
    u8 hour;
    u8 minute;
    u8 second;
} time;

typedef struct _date_time {
    date date;
    time time;
    i16  timezone_offset;
} date_time;

#endif

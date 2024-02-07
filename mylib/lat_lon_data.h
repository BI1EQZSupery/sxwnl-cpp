#ifndef LAT_LON_DATA_H
#define LAT_LON_DATA_H

struct JINGWEI {
    double J;//经度
    double W;//纬度
    char s[48];//省市
    char x[48];//区县
};

struct Location {
    double longitude; // 经度
    double latitude; // 纬度
    double longitude_R; // 经度(弧度)
    double latitude_R; // 纬度(弧度)
    Location(double lon, double lat): longitude(lon), latitude(lat), longitude_R(lon/(180/3.14159265358979323846)), latitude_R(lat/(180/3.14159265358979323846)) {}
};

extern JINGWEI lon_and_lat;

JINGWEI GeographicalPosition(void);

#endif
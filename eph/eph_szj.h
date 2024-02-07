#include "../mylib/mystl/my_string.h"
#include "../mylib/mystl/vector.h"
#include "lat_lon_data.h"

struct SJ {
    double z;
    double x;
    double s;
    double j;
    double c;
    double h;
    double c2;
    double h2;
    double c3;
    double h3;
    double H0;
    double H;
    double H1;
    double H2;
    double H3;
    double H4;
    mystl::string sm;
};

struct SJ_S {
    mystl::string s;
    mystl::string z;
    mystl::string j;
    mystl::string c;
    mystl::string h;
    mystl::string ch;
    mystl::string sj;
    mystl::string Ms;
    mystl::string Mz;
    mystl::string Mj;
};


class SZJ {    //日月的升中天降,不考虑气温和气压的影响
public:
    static mystl::vector<SJ_S> rts;    //多天的升中降

    static double getH(double h, double w, Location loc);

    static void Mcoord(double jd, double H0, SJ &r, Location loc);

    static void Scoord(double jd, int xm, SJ &r, Location loc);

    static SJ Mt(double jd, Location loc);

//    static SJ Qt(double jd);

    static SJ St(double jd, Location loc);

    static void calcRTS(double jd, int n, Location loc, double sq);

//    static double lon;    //站点地理经度,向东测量为正
//    static double lat;    //站点地理纬度

private:
    static double E;    //黄赤交角
    static double dt;    //TD-UT
};
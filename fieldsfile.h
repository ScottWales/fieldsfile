#ifndef FIELDSFILE_H
#define FIELDSFILE_H

#include <stdint.h>
#include <stdio.h>

static const int64_t IMDI = -32768;

struct FFDate {
    int64_t year;
    int64_t month;
    int64_t day;
    int64_t hour;
    int64_t minute;
    int64_t second;
};

struct FFHeader {
    int64_t version;
    int64_t u2;
    int64_t u3;
    int64_t u4;
    int64_t u5;
    int64_t u6;
    int64_t u7;
    int64_t u8;
    int64_t u9;
    int64_t u10;
    int64_t u11;
    int64_t u12;
    int64_t u13;
    int64_t u14;
    int64_t u15;
    int64_t u16;
    int64_t u17;
    int64_t u18;
    int64_t u19;
    int64_t u20;
    struct FFDate initial_time;
    int64_t u27;
    struct FFDate valid_time;
    int64_t u34;
    struct FFDate generated_time;
    int64_t u41;
    int64_t u42;
    int64_t u43;
    int64_t u44;
    int64_t u45;
    int64_t u46;
    int64_t u47;
    int64_t u48;
    int64_t u49;
    int64_t u50[50];
    int64_t u100;
    int64_t u101;
    int64_t u102;
    int64_t u103;
    int64_t u104;
    int64_t u105;
    int64_t u106;
    int64_t u107;
    int64_t u108;
    int64_t u109;
    int64_t u110;
    int64_t u111;
    int64_t u112;
    int64_t u113;
    int64_t u114;
    int64_t u115;
    int64_t u116;
    int64_t u117;
    int64_t u118;
    int64_t u119;
    int64_t u120;
    int64_t u121;
    int64_t u122;
    int64_t u123;
    int64_t u124;
    int64_t u125;
    int64_t u126;
    int64_t u127;
    int64_t u128;
    int64_t u129;
    int64_t u130;
    int64_t u131;
    int64_t u132;
    int64_t u133;
    int64_t u134;
    int64_t u135;
    int64_t u136;
    int64_t u137;
    int64_t u138;
    int64_t u139;
    int64_t u140;
    int64_t u141;
    int64_t u142;
    int64_t u143;
    int64_t u144;
    int64_t u145;
    int64_t u146;
    int64_t u147;
    int64_t u148;
    int64_t u149;
    int64_t lookup_start;
    int64_t lookup_size;
    int64_t field_count;
    int64_t u153;
    int64_t u154;
    int64_t u155;
    int64_t u156;
    int64_t u157;
    int64_t u158;
    int64_t u159;
    int64_t data_start;
    int64_t u161;
    int64_t u162;
    int64_t u163;
    int64_t u164;
    int64_t u165;
    int64_t u166;
    int64_t u167;
    int64_t u168;
    int64_t u169;
    int64_t u170[87];
};
struct FFLookup {
    struct FFDate valid_time;
    struct FFDate data_time;
    int64_t u13;
    int64_t u14;
    int64_t data_length;
    int64_t u16;
    int64_t u17;
    int64_t rows;
    int64_t columns;
    int64_t u20;
    int64_t u21;
    int64_t u22;
    int64_t u23;
    int64_t u24;
    int64_t u25;
    int64_t u26;
    int64_t u27;
    int64_t u28;
    int64_t file_start;
    int64_t record_count;
    int64_t u31;
    int64_t u32;
    int64_t u33;
    int64_t u34;
    int64_t u35;
    int64_t u36;
    int64_t u37;
    int64_t u38;
    int64_t u39;
    int64_t u40;
    int64_t u41;
    int64_t stash_code;
    int64_t psudo_dimension;
    int64_t u44;
    int64_t u45;
    double u46;
    double u47;
    double u48;
    double u49;
    double u50;
    double u51;
    double heightlevel;
    double u53;
    double u54;
    double u55;
    double pole_latitude;
    double pole_longitude;
    double u58;
    double origin_latitude;
    double latitude_interval;
    double origin_longitude;
    double longitude_interval;
    double missing_data;
    double mks_scale;
};

struct FieldsFile {
    FILE * stream;
    struct FFHeader * header;
    struct FFLookup * lookup;
};

struct FieldsFile * OpenFieldsFile(const char * filename);
void WriteFieldsFile(struct FieldsFile * ff);
void CloseFieldsFile(struct FieldsFile * ff);

#endif

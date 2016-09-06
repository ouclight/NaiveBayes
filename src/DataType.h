/*
 *
 *
 *  Declaration of data_type used in this program
 *
 *
 * */

#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#define DataType     double
#define ProType      double
#define CountType    long


typedef struct RawLabledPoint 
{
	DataType label;
	DataType *features;
}rawLabledPoint;

typedef struct PreLabledPoint
{
	DataType label;
	CountType count;
	DataType *features;
        struct PreLabledPoint *next;
}preLabledPoint;




#endif


/*
    Auther : Rahul Dhiman
*/
#ifndef __MOVING_AVERAGE_H__
#define __MOVING_AVERAGE_H__


/* In the below enum write the descriptive name of data which is similar to array in which data want to store */
typedef enum
{
    e_demoDataName,             /* for demo purpose */
    e_numberOfData,             /*dont delete this */
}dataName_eType;


void getMovingAveargeOf(const dataName_eType e_DataName, const void *dataIn, void *getMovAvg);


#endif



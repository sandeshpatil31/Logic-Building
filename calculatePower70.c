// calculate power using separate Business logic file

#include "header70.h"   // in this header we import and declare

 ULONG calculatePower(int iBase,int iPower )  // return unsigned long integer value to main callie function
{       
    
    register int iCnt=0;
     ULONG iMult=1;
     for (iCnt= 1; iCnt<=iPower;iCnt++)
     { 
          iMult=iMult*iBase;
     }
     return iMult;
   
}

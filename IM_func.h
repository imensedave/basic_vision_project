#ifndef _IM_func_h
#define _IM_func_h


#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <set>
#include <vector>


#include "Imgx.h"
#include "IM_struct.h"

/* copyright David SInclair 2020.

   released under the Apache2.0 license:
   https://www.apache.org/licenses/LICENSE-2.0



 */



int read_pgm( Matrix<short> &im, char *fname);

void C_to_BW( CxImage &cim, Matrix<short> &out );

int  canny(Matrix<short> &im, float low, float high, Matrix<short> &edge);

  
#endif



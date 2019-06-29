//
// Created by xiaochen on 2019-06-29.
//

#ifndef INC_06INERIT2_SOFABED_H
#define INC_06INERIT2_SOFABED_H

#include "sofa.h"
#include "bed.h"


class sofabed:public bed, public sofa{
public:
    sofabed();


};


#endif //INC_06INERIT2_SOFABED_H

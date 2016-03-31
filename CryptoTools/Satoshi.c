//
//  Satoshi.c
//  CryptoTools
//
//  Created by Julio Cesar Torres dos Santos on 3/30/16.
//  Copyright (c) 2016 Julio Cesar Torres dos Santos. All rights reserved.
//

#include "Satoshi.h"

double AttackerSuccessProbability(double q, int z){
    double p = 1.0 - q;
    double lambda = z * (q / p);
    double sum = 1.0;
    int i, k;
    
    for(k=0; k <= z; k++){
        double poisson = exp(-lambda);
        for(i=0; i <= k; i++){
            poisson *= lambda / i;
        }
        sum -= poisson * (1 - pow(q / p, z - k));
    }
    return sum;
}
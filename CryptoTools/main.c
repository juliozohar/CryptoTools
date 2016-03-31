//
//  main.c
//  CryptoTools
//
//  Created by Julio Cesar Torres dos Santos on 3/30/16.
//  Copyright (c) 2016 Julio Cesar Torres dos Santos. All rights reserved.
//

#include <stdio.h>
#include "Satoshi.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    double prob = AttackerSuccessProbability(0.1, 1);
    printf("Val : %f", prob);
    return 0;
}

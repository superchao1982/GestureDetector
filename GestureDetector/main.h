//
//  main.h
//  GestureDetector
//
//  Created by Zichen Zheng on 11/30/13.
//  Copyright (c) 2013 Zichen Zheng. All rights reserved.
//

#ifndef GestureDetector_main_h
#define GestureDetector_main_h

#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "util/convert2png.h"
#include "util/genFileList.h"
#include "basic.h"
#include "hogClassifier.h"

using namespace cv;
using namespace std;

/**
 * Utility functions
 *
 * genFileListForAll: generate file list for training dataset, complex testing
 * dataset, and uniform testing dataset.
 *
 * convert2pngForAll: convert images listed in the above file list to PNG format.
 */

void genFileListForAll() {
    genFileList(".png");
}

void convert2pngForAll() {
    batch_convert2png("../train_list.txt");
    batch_convert2png("../test_complex_list.txt");
    batch_convert2png("../test_uniform_list.txt");
}

#endif

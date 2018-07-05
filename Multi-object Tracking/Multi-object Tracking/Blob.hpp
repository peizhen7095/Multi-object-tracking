//
//  Blob.hpp
//  Multi-object Tracking
//
//  Created by 裴真 on 7/4/18.
//  Copyright © 2018 裴真. All rights reserved.
//

// Blob.h

#ifndef MY_BLOB
#define MY_BLOB

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////
class Blob {
public:
    // member variables ///////////////////////////////////////////////////////////////////////////
    std::vector<cv::Point> currentContour;
    
    cv::Rect currentBoundingRect;
    
    std::vector<cv::Point> centerPositions;
    
    double dblCurrentDiagonalSize;
    double dblCurrentAspectRatio;
    
    bool blnCurrentMatchFoundOrNewBlob;
    
    bool blnStillBeingTracked;
    
    int intNumOfConsecutiveFramesWithoutAMatch;
    
    cv::Point predictedNextPosition;
    
    // function prototypes ////////////////////////////////////////////////////////////////////////
    Blob(std::vector<cv::Point> _contour);
    void predictNextPosition(void);
    
};

#endif    // MY_BLOB




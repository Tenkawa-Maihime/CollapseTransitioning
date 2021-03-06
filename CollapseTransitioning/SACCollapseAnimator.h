//
//  SACCollapseAnimator.h
//  CollapseTransitioning
//
//  Created by S.C. on 16/9/7.
//  Copyright © 2016年 Kabylake. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SACCollapseAnimator : NSObject <UIViewControllerAnimatedTransitioning>

/**
 *  转场持续时间,默认为2s
 */
@property (nonatomic, readwrite, assign) NSTimeInterval duration;

/**
 *  碎片大小,默认边长为10
 */
@property (nonatomic, readwrite, assign) NSInteger sideLength;

@end

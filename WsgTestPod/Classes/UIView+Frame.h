//
//  UIView+Frame.h
//  WZLCodeLibrary
//
//  Created by wzl on 15/3/23.
//  Copyright (c) 2015年 Weng-Zilin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat tail;
@property (nonatomic, assign) CGFloat middleX;
@property (nonatomic, assign) CGFloat middleY;



@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y

@property (nonatomic,readonly) CGPoint boxCenter;
@property (nonatomic,readonly) CGFloat boxCenterX;
@property (nonatomic,readonly) CGFloat boxCenterY;

- (void)removeAllSubviews;


@end

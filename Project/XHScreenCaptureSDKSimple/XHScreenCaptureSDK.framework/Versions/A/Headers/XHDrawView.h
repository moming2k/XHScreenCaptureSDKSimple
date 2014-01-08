//
//  XHDrawView.h
//  XHScreenCapture
//
//  Created by 曾 宪华 on 14-1-8.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHDrawView : UIImageView
@property (nonatomic, assign) CGFloat lineWidth; // 默认是3.0
@property (nonatomic, strong) UIColor *strokeColor;
@end
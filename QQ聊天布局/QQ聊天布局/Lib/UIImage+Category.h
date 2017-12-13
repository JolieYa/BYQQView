//
//  UIImage+Category.h
//  QQ聊天布局
//
//  Created by admin on 2017/10/17.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGBAOF(v, a)            [UIColor colorWithRed:((float)(((v) & 0xFF0000) >> 16))/255.0 \
green:((float)(((v) & 0x00FF00) >> 8))/255.0 \
blue:((float)(v & 0x0000FF))/255.0 \
alpha:a]
#define JZMBtnBackColor             RGBAOF(0xc8c8c8, 1.0)   // 按钮背景色

@interface UIImage (Category)

+ (UIImage *)imageWithColor:(UIColor *)color;

@end

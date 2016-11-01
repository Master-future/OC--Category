//
//  UIColor+UIColor+BGHexColor.h
//  常用分类
//
//  Created by future on 16/11/1.
//  Copyright © 2016年 future. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BGHexColor)

+ (UIColor *)colorWithHex:(uint)hex alpha:(CGFloat)alpha;

/**
 *  十六进制字符串转颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)HexString;

+ (UIColor*) colorRGBonvertToHSB:(UIColor*)color withBrighnessDelta:(CGFloat)delta;

+ (UIColor*) colorRGBonvertToHSB:(UIColor*)color withAlphaDelta:(CGFloat)delta;

+ (UIColor*) colorWithHex:(NSInteger)hexValue;

@end

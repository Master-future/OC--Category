//
//  UIImage+ImageCovert.h
//  常用分类
//
//  Created by future on 16/11/1.
//  Copyright © 2016年 future. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageCovert)
//根据颜色和大小转换成Image
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

//改变Image的大小
- (UIImage *)convertImageWithSize:(CGSize)size;

//拉伸Image的大小
+ (UIImage *)compressImage:(UIImage *)imgSrc toSize:(CGSize)size;

//通过Rect剪裁图片
- (UIImage *) imageByCropToRect:(CGRect)rect;

//图片增加圆角
- (UIImage *) imageByRoundCornerRadius:(CGFloat)radius;

//图片增加圆角及边框
- (UIImage *) imageByRoundCornerRadius:(CGFloat)radius
                           borderWidth:(CGFloat)borderWidth
                           borderColor:(UIColor *)borderColor;

@end

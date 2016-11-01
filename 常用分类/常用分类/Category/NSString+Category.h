//
//  NSString+Category.h
//  常用分类
//
//  Created by future on 16/11/1.
//  Copyright © 2016年 future. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Category)
//清空字符串中的空白字符
- (NSString *)trimString;

//是否空字符串
- (BOOL)isEmptyString;

//返回沙盒中的文件路径
- (NSString *)documentsPath;

//写入系统偏好
- (void)saveToNSDefaultsWithKey:(NSString *)key;

//字符串反转
+ (NSString *)doturnback:(NSString *)str;

@end

@interface NSString (Base64)
//Base64编码
- (NSString *)base64Encode:(NSString *)string;
//base64解码
- (NSString *)base64Decode:(NSString *)base64String;
@end

@interface NSString (MD5)
- (NSString *) md5WithString;//MD5加密
@end
